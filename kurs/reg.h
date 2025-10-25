#pragma once
#include "PasswordHasher.h"
namespace kurs {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Сводка для reg
	/// </summary>
	public ref class reg : public System::Windows::Forms::Form
	{
	public:
		reg(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~reg()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::LinkLabel^ linkLabel_AvtForm;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ reg_button;

	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(reg::typeid));
			this->linkLabel_AvtForm = (gcnew System::Windows::Forms::LinkLabel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->reg_button = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// linkLabel_AvtForm
			// 
			this->linkLabel_AvtForm->AutoSize = true;
			this->linkLabel_AvtForm->BackColor = System::Drawing::Color::Transparent;
			this->linkLabel_AvtForm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->linkLabel_AvtForm->LinkColor = System::Drawing::Color::RoyalBlue;
			this->linkLabel_AvtForm->Location = System::Drawing::Point(342, 631);
			this->linkLabel_AvtForm->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->linkLabel_AvtForm->Name = L"linkLabel_AvtForm";
			this->linkLabel_AvtForm->Size = System::Drawing::Size(86, 30);
			this->linkLabel_AvtForm->TabIndex = 19;
			this->linkLabel_AvtForm->TabStop = true;
			this->linkLabel_AvtForm->Text = L"Войти";
			this->linkLabel_AvtForm->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &reg::linkLabel_AvtForm_LinkClicked);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->label5->Location = System::Drawing::Point(282, 599);
			this->label5->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(259, 32);
			this->label5->TabIndex = 18;
			this->label5->Text = L"Уже есть аккаунт\?";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->label4->Location = System::Drawing::Point(92, 254);
			this->label4->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(333, 32);
			this->label4->TabIndex = 17;
			this->label4->Text = L"Пароль (от 6 символов):";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->label3->Location = System::Drawing::Point(92, 151);
			this->label3->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(93, 32);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Логин";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->label2->Location = System::Drawing::Point(92, 51);
			this->label2->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(260, 32);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Имя пользователя";
			// 
			// reg_button
			// 
			this->reg_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(189)));
			this->reg_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->reg_button->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->reg_button->Location = System::Drawing::Point(74, 479);
			this->reg_button->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->reg_button->Name = L"reg_button";
			this->reg_button->Size = System::Drawing::Size(378, 81);
			this->reg_button->TabIndex = 14;
			this->reg_button->Text = L"Зарегистрироваться";
			this->reg_button->UseVisualStyleBackColor = false;
			this->reg_button->Click += gcnew System::EventHandler(this, &reg::reg_button_Click);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(97, 286);
			this->textBox3->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->PasswordChar = '*';
			this->textBox3->Size = System::Drawing::Size(331, 50);
			this->textBox3->TabIndex = 13;
			this->textBox3->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &reg::textBox3_KeyDown);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(97, 183);
			this->textBox2->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(331, 47);
			this->textBox2->TabIndex = 12;
			this->textBox2->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &reg::textBox2_KeyDown);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(97, 85);
			this->textBox1->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(331, 42);
			this->textBox1->TabIndex = 11;
			this->textBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &reg::textBox1_KeyDown);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->label1->Location = System::Drawing::Point(270, 9);
			this->label1->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(281, 52);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Регистрация";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->label6->Location = System::Drawing::Point(92, 363);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(289, 32);
			this->label6->TabIndex = 20;
			this->label6->Text = L"Подтвердите пароль";
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(97, 395);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->PasswordChar = '*';
			this->textBox4->Size = System::Drawing::Size(331, 49);
			this->textBox4->TabIndex = 21;
			this->textBox4->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &reg::textBox4_KeyDown);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(382, 289);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(43, 43);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 22;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &reg::pictureBox1_MouseDown);
			this->pictureBox1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &reg::pictureBox1_MouseUp);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(382, 398);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(43, 43);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 23;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &reg::pictureBox2_MouseDown);
			this->pictureBox2->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &reg::pictureBox2_MouseUp);
			// 
			// reg
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(14, 29);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(728, 704);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->linkLabel_AvtForm);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->reg_button);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->MaximizeBox = false;
			this->Name = L"reg";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Регистрация";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void linkLabel_AvtForm_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->Close();
	}
	private: System::Void reg_button_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ name = this->textBox1->Text;
		String^ email = this->textBox2->Text;
		String^ password = this->textBox3->Text;
		String^ Confirmpassword = this->textBox4->Text;
		if (name->Length == 0 || email->Length == 0 || password->Length == 0 || Confirmpassword->Length == 0)
		{
			MessageBox::Show("Пожалуйста заполните поля", "Поля пустые", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}
		if (password->Length < 6)
		{
			MessageBox::Show("Пароль должен содержать не менее 6 символов",
				"Слишком короткий пароль", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		bool hasLetter = false;
		for each (Char c in password)
		{
			if (Char::IsLetter(c))
			{
				hasLetter = true;
				break;
			}
		}
		if (!hasLetter)
		{
			MessageBox::Show("Пароль должен содержать хотя бы одну букву",
				"Некорректный пароль", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		if (String::Compare(password, Confirmpassword) != 0) {
			MessageBox::Show("Пароль и подтверждение пароля не идентичны",
				"Ошибка", MessageBoxButtons::OK);
			return;
		}
		String^ passwordHash = PasswordHasher::HashPassword(password);

		try
		{
			String^ connect = "Data Source=localhost\\sqlexpress;Integrated Security=True;Encrypt=False";
			SqlConnection sqlconn(connect);
			sqlconn.Open();
			String^ sqlQuery = "INSERT INTO users " +
				"(name, email, password, status) VALUES " +
				"(@name, @email, @password, 0);";
			SqlCommand command(sqlQuery, % sqlconn);
			command.Parameters->AddWithValue("@name", name);
			command.Parameters->AddWithValue("@email", email);
			command.Parameters->AddWithValue("@password", passwordHash);
			command.ExecuteReader();
			MessageBox::Show("Вы успешно зарегистрировались. Переход на окно авторизации. ", "Успешная регистрация", MessageBoxButtons::OK);
			this->Close();
		}
		catch (Exception^ e)
		{
			MessageBox::Show("Повторяющейся email. Пожалуйста измените его", "Ошибка ввода", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}

	}
	private: System::Void textBox1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == System::Windows::Forms::Keys::Enter) {
			e->SuppressKeyPress = true; // Убираем ввод Enter из TextBox
			textBox2->Focus(); // Перемещение фокуса на следующий TextBox
		}
	}
	private: System::Void textBox2_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == System::Windows::Forms::Keys::Enter) {
			e->SuppressKeyPress = true; // Убираем ввод Enter из TextBox
			textBox3->Focus(); // Перемещение фокуса на следующий TextBox
		}
	}
	private: System::Void textBox3_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == System::Windows::Forms::Keys::Enter) {
			e->SuppressKeyPress = true; // Убираем ввод Enter из TextBox
			textBox4->Focus(); // Перемещение фокуса на следующий TextBox
		}
	}
	private: System::Void textBox4_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == System::Windows::Forms::Keys::Enter) {
			e->SuppressKeyPress = true; // Убираем символ Enter из TextBox
			reg_button->PerformClick(); // Симуляция нажатия кнопки
		}
	}
	private:
		String^ openEyePath = "C:\\Users\\Admin\\OneDrive\\Рабочий стол\\kurs\\img\\icons8-показать-пароль-30.png";
		String^ closedEyePath = "C:\\Users\\Admin\\OneDrive\\Рабочий стол\\kurs\\img\\icons8-скрыто-30.png";

private: System::Void pictureBox1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	textBox3->PasswordChar = '\0';
	if (System::IO::File::Exists(openEyePath)) {
		pictureBox1->Image = Image::FromFile(openEyePath);
	}
}
private: System::Void pictureBox1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	textBox3->PasswordChar = '*';
	if (System::IO::File::Exists(closedEyePath)) {
		pictureBox1->Image = Image::FromFile(closedEyePath);
	}
}
private: System::Void pictureBox2_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	textBox4->PasswordChar = '\0';
	if (System::IO::File::Exists(openEyePath)) {
		pictureBox2->Image = Image::FromFile(openEyePath);
	}
}
private: System::Void pictureBox2_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	textBox4->PasswordChar = '*';
	if (System::IO::File::Exists(closedEyePath)) {
		pictureBox2->Image = Image::FromFile(closedEyePath);
	}
}
};
}
