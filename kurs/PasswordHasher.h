#pragma once
#include <Windows.h>
#include <bcrypt.h>
#pragma comment(lib, "bcrypt.lib")
using namespace System;
using namespace System::Security::Cryptography;
using namespace System::Text;

public ref class PasswordHasher
{
public:
    // ����� ��� �������� ���� ������ � �����
    static String^ HashPassword(String^ password)
    {
        // ���������� ��������� ����
        array<Byte>^ salt = GenerateSalt(16);

        // ������������ ������ � ���� � �����
        array<Byte>^ passwordBytes = Encoding::UTF8->GetBytes(password);
        array<Byte>^ saltedPassword = gcnew array<Byte>(passwordBytes->Length + salt->Length);

        Buffer::BlockCopy(passwordBytes, 0, saltedPassword, 0, passwordBytes->Length);
        Buffer::BlockCopy(salt, 0, saltedPassword, passwordBytes->Length, salt->Length);

        // ������� ��� � ������� SHA-256
        SHA256Managed^ sha256 = gcnew SHA256Managed();
        array<Byte>^ hashBytes = sha256->ComputeHash(saltedPassword);

        // ���������� ���� � ��� ��� ��������
        array<Byte>^ hashWithSalt = gcnew array<Byte>(hashBytes->Length + salt->Length);
        Buffer::BlockCopy(hashBytes, 0, hashWithSalt, 0, hashBytes->Length);
        Buffer::BlockCopy(salt, 0, hashWithSalt, hashBytes->Length, salt->Length);

        // ������������ � ������ Base64 ��� ��������
        return Convert::ToBase64String(hashWithSalt);
    }

    // ����� ��� �������� ������
    static bool VerifyPassword(String^ enteredPassword, String^ storedHash)
    {
        try
        {
            // ���������� �������� ���
            array<Byte>^ hashWithSalt = Convert::FromBase64String(storedHash);

            // SHA-256 ��� ����� ����� 32 �����
            int hashSize = 32;
            if (hashWithSalt->Length < hashSize)
                return false;

            // ��������� ���� (��� ��� ����� ����)
            array<Byte>^ salt = gcnew array<Byte>(hashWithSalt->Length - hashSize);
            Buffer::BlockCopy(hashWithSalt, hashSize, salt, 0, salt->Length);

            // �������� ��������� ������ � ��� �� �����
            array<Byte>^ enteredPasswordBytes = Encoding::UTF8->GetBytes(enteredPassword);
            array<Byte>^ saltedPassword = gcnew array<Byte>(enteredPasswordBytes->Length + salt->Length);

            Buffer::BlockCopy(enteredPasswordBytes, 0, saltedPassword, 0, enteredPasswordBytes->Length);
            Buffer::BlockCopy(salt, 0, saltedPassword, enteredPasswordBytes->Length, salt->Length);

            SHA256Managed^ sha256 = gcnew SHA256Managed();
            array<Byte>^ enteredHashBytes = sha256->ComputeHash(saltedPassword);

            // ���������� ����
            for (int i = 0; i < hashSize; i++)
            {
                if (enteredHashBytes[i] != hashWithSalt[i])
                    return false;
            }

            return true;
        }
        catch (Exception^)
        {
            return false;
        }
    }

private:
    // ��������� ��������� ����
    static array<Byte>^ GenerateSalt(int length)
    {
        array<Byte>^ salt = gcnew array<Byte>(length);
        RNGCryptoServiceProvider^ rng = gcnew RNGCryptoServiceProvider();
        rng->GetBytes(salt);
        return salt;
    }
};