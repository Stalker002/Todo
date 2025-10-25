#pragma once
#include "reg.h"
#include "MainForm.h"
namespace kurs {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Сводка для avtoriz
	/// </summary>
	public ref class avtoriz : public System::Windows::Forms::Form
	{
	public:
		avtoriz(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//

		}
		// Метод для хэширования пароля

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~avtoriz()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label4;
	protected:
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::LinkLabel^ linkLabel_RegForm;
	private: System::Windows::Forms::Button^ avt_button;



	private: System::Windows::Forms::PictureBox^ pictureBox1;


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(avtoriz::typeid));
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->linkLabel_RegForm = (gcnew System::Windows::Forms::LinkLabel());
			this->avt_button = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->label4->Location = System::Drawing::Point(38, 207);
			this->label4->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(113, 32);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Пароль";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->label3->Location = System::Drawing::Point(38, 120);
			this->label3->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(93, 32);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Логин";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->label2->Location = System::Drawing::Point(269, 504);
			this->label2->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(335, 37);
			this->label2->TabIndex = 13;
			this->label2->Text = L"У вас нет аккаунта\? ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->label1->Location = System::Drawing::Point(171, 43);
			this->label1->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(341, 59);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Авторизация";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(42, 234);
			this->textBox2->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(232, 38);
			this->textBox2->TabIndex = 11;
			this->textBox2->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &avtoriz::textBox2_KeyDown);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(42, 147);
			this->textBox1->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(232, 53);
			this->textBox1->TabIndex = 10;
			this->textBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &avtoriz::textBox1_KeyDown);
			// 
			// linkLabel_RegForm
			// 
			this->linkLabel_RegForm->AutoSize = true;
			this->linkLabel_RegForm->BackColor = System::Drawing::Color::Transparent;
			this->linkLabel_RegForm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->linkLabel_RegForm->LinkColor = System::Drawing::Color::RoyalBlue;
			this->linkLabel_RegForm->Location = System::Drawing::Point(292, 532);
			this->linkLabel_RegForm->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->linkLabel_RegForm->Name = L"linkLabel_RegForm";
			this->linkLabel_RegForm->Size = System::Drawing::Size(270, 32);
			this->linkLabel_RegForm->TabIndex = 9;
			this->linkLabel_RegForm->TabStop = true;
			this->linkLabel_RegForm->Text = L"Зарегестрируйтесь";
			this->linkLabel_RegForm->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &avtoriz::linkLabel_RegForm_LinkClicked);
			// 
			// avt_button
			// 
			this->avt_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(189)));
			this->avt_button->FlatAppearance->BorderSize = 0;
			this->avt_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->avt_button->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->avt_button->Location = System::Drawing::Point(26, 303);
			this->avt_button->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->avt_button->Name = L"avt_button";
			this->avt_button->Size = System::Drawing::Size(272, 59);
			this->avt_button->TabIndex = 8;
			this->avt_button->Text = L"Войти";
			this->avt_button->UseVisualStyleBackColor = false;
			this->avt_button->Click += gcnew System::EventHandler(this, &avtoriz::avt_button_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(241, 237);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(30, 30);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 16;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &avtoriz::pictureBox1_MouseDown);
			this->pictureBox1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &avtoriz::pictureBox1_MouseUp);
			// 
			// avtoriz
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(14, 29);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(733, 604);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->linkLabel_RegForm);
			this->Controls->Add(this->avt_button);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->MaximizeBox = false;
			this->Name = L"avtoriz";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Авторизация";
			this->Activated += gcnew System::EventHandler(this, &avtoriz::avtoriz_Activated);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == System::Windows::Forms::Keys::Enter) {
			e->SuppressKeyPress = true; // Убираем ввод Enter из TextBox
			textBox2->Focus(); // Перемещение фокуса на следующий TextBox
		}
	}
	private: System::Void textBox2_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == System::Windows::Forms::Keys::Enter) {
			e->SuppressKeyPress = true; // Убираем символ Enter из TextBox
			avt_button->PerformClick(); // Симуляция нажатия кнопки
		}
	}

	private: System::Void linkLabel_RegForm_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		reg^ regform = gcnew(reg);
		this->Hide();
		regform->ShowDialog();
		this->Show();
	}

	private: System::Void avt_button_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ email = this->textBox1->Text;
		String^ password = this->textBox2->Text;

		// Проверка заполнения полей
		if (String::IsNullOrWhiteSpace(email) || String::IsNullOrWhiteSpace(password))
		{
			MessageBox::Show("Пожалуйста заполните поля с логином и паролем",
				"Поля пустые",
				MessageBoxButtons::OK,
				MessageBoxIcon::Information);
			return;
		}

		try
		{
			String^ connect = "Data Source=localhost\\sqlexpress;Integrated Security=True;Encrypt=False";
			SqlConnection^ sqlconn = gcnew SqlConnection(connect);
			sqlconn->Open();

			// Сброс статуса всех пользователей
			String^ sqlResetQuery = "UPDATE Users SET status = 0;";
			SqlCommand^ resetCommand = gcnew SqlCommand(sqlResetQuery, sqlconn);
			resetCommand->ExecuteNonQuery();

			// Поиск пользователя по email
			String^ sqlQuery = "SELECT Id, Password FROM Users WHERE email = @email;";
			SqlCommand^ command = gcnew SqlCommand(sqlQuery, sqlconn);
			command->Parameters->AddWithValue("@email", email);
			SqlDataReader^ reader = command->ExecuteReader();

			if (!reader->HasRows)
			{
				MessageBox::Show("Пользователь не найден",
					"Ошибка авторизации",
					MessageBoxButtons::OK,
					MessageBoxIcon::Warning);
				reader->Close();
				return;
			}
			// Чтение данных пользователя
			reader->Read();
			String^ storedHash = reader->GetString(1); // Получаем хэш пароля

			// Проверка пароля
			if (PasswordHasher::VerifyPassword(password, storedHash))
			{
				int userId = reader->GetInt32(0); // Получаем Id пользователя
				reader->Close();

				// Установка статуса "активен" для текущего пользователя
				String^ sqlUpdateQuery = "UPDATE Users SET status = 1 WHERE Id = @userId;";
				SqlCommand^ updateCommand = gcnew SqlCommand(sqlUpdateQuery, sqlconn);
				updateCommand->Parameters->AddWithValue("@userId", userId);
				updateCommand->ExecuteNonQuery();

				// Открытие главной формы
				MainForm^ mainForm = gcnew MainForm();
				this->Hide();
				mainForm->ShowDialog();
				this->Show();
			}
			else
			{
				MessageBox::Show("Логин или пароль не верны",
					"Ошибка авторизации",
					MessageBoxButtons::OK,
					MessageBoxIcon::Warning);
			}
			reader->Close();
		}
		catch (Exception^ e)
		{
			MessageBox::Show("Ошибка подключения к базе данных: " + e->Message,
				"Ошибка БД",
				MessageBoxButtons::OK);
		}

		// Очистка полей ввода
		textBox1->Text = "";
		textBox2->Text = "";
	}
	private: System::Void avtoriz_Activated(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Focus();
	}
	private:
		String^ openEyePath = "C:\\Users\\Admin\\OneDrive\\Рабочий стол\\kurs\\img\\icons8-показать-пароль-30.png";
		String^ closedEyePath = "C:\\Users\\Admin\\OneDrive\\Рабочий стол\\kurs\\img\\icons8-скрыто-30.png";

private: System::Void pictureBox1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	textBox2->PasswordChar = '\0';
	if (System::IO::File::Exists(openEyePath)) {
		pictureBox1->Image = Image::FromFile(openEyePath);
	}
}
private: System::Void pictureBox1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	textBox2->PasswordChar = '*';
	if (System::IO::File::Exists(closedEyePath)) {
		pictureBox1->Image = Image::FromFile(closedEyePath);
	}
}
};
}
