#pragma once

namespace kurs {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Сводка для add
	/// </summary>
	public ref class modify : public System::Windows::Forms::Form
	{
	private:
		String^ o_task;
		String^ o_type;
		DateTime o_date;
		Color ParseHexColor(String^ hexColor) {
			hexColor = hexColor->Trim()->ToUpper();
			if (hexColor->StartsWith("#")) hexColor = hexColor->Substring(1);

			int r = Convert::ToInt32(hexColor->Substring(0, 2), 16);
			int g = Convert::ToInt32(hexColor->Substring(2, 2), 16);
			int b = Convert::ToInt32(hexColor->Substring(4, 2), 16);

			return Color::FromArgb(r, g, b);
		}

		String^ o_status;
	public:
		modify(String^ status, String^ task, String^ type, DateTime date, String^ rowColor)
		{
			InitializeComponent();
			textBox1->Text = task;
			dateTimePicker1->Value = date;
			if (status == "В процессе")
			{
				checkBox1->Checked = false;
			}
			if (status == "Выполнена")
			{
				checkBox1->Checked = true;
			}
			// Выбираем соответствующий элемент
			for (int i = 0; i < checkedListBox1->Items->Count; i++) {
				if (checkedListBox1->Items[i]->ToString() == type) {
					checkedListBox1->SetItemChecked(i, true);
					break;
				}
			}
			pictureBox1->BackColor = ParseHexColor(rowColor);
			o_task = task;
			o_type = type;
			o_date = date;
			o_status = status;
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~modify()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ modify_button;
	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ setColor2_button;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::ColorDialog^ colorDialog1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox1;
	private: System::Windows::Forms::Button^ dealete_button;

	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(modify::typeid));
			this->modify_button = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->setColor2_button = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->dealete_button = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// modify_button
			// 
			this->modify_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->modify_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->modify_button->ForeColor = System::Drawing::Color::White;
			this->modify_button->Location = System::Drawing::Point(32, 647);
			this->modify_button->Name = L"modify_button";
			this->modify_button->Size = System::Drawing::Size(239, 100);
			this->modify_button->TabIndex = 0;
			this->modify_button->Text = L"Продолжить";
			this->modify_button->UseVisualStyleBackColor = false;
			this->modify_button->Click += gcnew System::EventHandler(this, &modify::modify_button_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->label1->Location = System::Drawing::Point(39, 105);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(163, 32);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Заголовок*";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"dd.MM.yyyy HH:mm";
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(225, 501);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(304, 39);
			this->dateTimePicker1->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->label3->Location = System::Drawing::Point(39, 431);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(87, 32);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Цвет:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->label4->Location = System::Drawing::Point(39, 504);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(119, 32);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Время*:";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(225, 105);
			this->textBox1->MaxLength = 66;
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->textBox1->Size = System::Drawing::Size(304, 115);
			this->textBox1->TabIndex = 8;
			// 
			// setColor2_button
			// 
			this->setColor2_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->setColor2_button->Location = System::Drawing::Point(225, 431);
			this->setColor2_button->Name = L"setColor2_button";
			this->setColor2_button->Size = System::Drawing::Size(304, 42);
			this->setColor2_button->TabIndex = 10;
			this->setColor2_button->Text = L"Выбрать цвет";
			this->setColor2_button->UseVisualStyleBackColor = true;
			this->setColor2_button->Click += gcnew System::EventHandler(this, &modify::setColor2_button_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Location = System::Drawing::Point(149, 431);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(53, 42);
			this->pictureBox1->TabIndex = 11;
			this->pictureBox1->TabStop = false;
			// 
			// colorDialog1
			// 
			this->colorDialog1->AnyColor = true;
			this->colorDialog1->ShowHelp = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->label2->Location = System::Drawing::Point(39, 274);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(180, 32);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Тип события";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->label6->Location = System::Drawing::Point(122, 41);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(361, 37);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Редактирование задачи";
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->BackColor = System::Drawing::Color::White;
			this->checkedListBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->checkedListBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Важное", L"Событие", L"Долги" });
			this->checkedListBox1->Location = System::Drawing::Point(225, 274);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(304, 128);
			this->checkedListBox1->TabIndex = 14;
			this->checkedListBox1->ItemCheck += gcnew System::Windows::Forms::ItemCheckEventHandler(this, &modify::checkedListBox1_ItemCheck);
			// 
			// dealete_button
			// 
			this->dealete_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->dealete_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dealete_button->ForeColor = System::Drawing::Color::White;
			this->dealete_button->Location = System::Drawing::Point(318, 647);
			this->dealete_button->Name = L"dealete_button";
			this->dealete_button->Size = System::Drawing::Size(234, 100);
			this->dealete_button->TabIndex = 32;
			this->dealete_button->Text = L"Удалить задачу";
			this->dealete_button->UseVisualStyleBackColor = false;
			this->dealete_button->Click += gcnew System::EventHandler(this, &modify::dealete_button_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox1->Location = System::Drawing::Point(140, 576);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(308, 41);
			this->checkBox1->TabIndex = 33;
			this->checkBox1->Text = L"Задача выполнена";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// modify
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(589, 784);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->dealete_button);
			this->Controls->Add(this->checkedListBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->setColor2_button);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->modify_button);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"modify";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Редактирование задачи";
			this->Activated += gcnew System::EventHandler(this, &modify::modify1_Activated);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void setColor2_button_Click(System::Object^ sender, System::EventArgs^ e) {
		if (colorDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			System::Drawing::Color selectedColor = colorDialog1->Color;
			pictureBox1->BackColor = selectedColor;
		}
	}
	private: System::Void checkedListBox1_ItemCheck(System::Object^ sender, System::Windows::Forms::ItemCheckEventArgs^ e) {
		if (e->NewValue == CheckState::Checked) {
			for (int i = 0; i < checkedListBox1->Items->Count; ++i) {
				if (i != e->Index) {
					checkedListBox1->SetItemChecked(i, false);
				}
			}
		}
	}
	private: System::Void modify_button_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ zagolvk = this->textBox1->Text;
		DateTime selectedDate = dateTimePicker1->Value;
		System::Drawing::Color bgColor = pictureBox1->BackColor;
		String^ hexColor = String::Format("#{0:X2}{1:X2}{2:X2}", bgColor.R, bgColor.G, bgColor.B);
		String^ begindate = selectedDate.ToString("dd.MM.yyyy HH:mm");
		String^ eventType = nullptr;

		// Проверяем выбранные элементы в CheckedListBox
		if (checkedListBox1->CheckedItems->Count > 0) {
			// Получаем первый выбранный элемент (если разрешен только один выбор)
			String^ selectedItem = checkedListBox1->CheckedItems[0]->ToString();

			if (selectedItem == "Важное") {
				eventType = "Важное";
			}
			else if (selectedItem == "Событие") {
				eventType = "Событие";
			}
			else if (selectedItem == "Долги") {
				eventType = "Долги";
			}
		}

		if (zagolvk->Length == 0)
		{
			MessageBox::Show("Пожалуйста заполните поле с заголовком задачи", "Поля пустые", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}
		try
		{
			String^ connect = "Data Source=localhost\\sqlexpress;Integrated Security=True;Encrypt=False";
			SqlConnection sqlconn1(connect);

			try {
				sqlconn1.Open();
				if (sqlconn1.State == ConnectionState::Open) { // Проверяем соединение

					// Запрос на получение Id активных пользователей
					String^ sqlSelectQuery = "SELECT Id FROM Users WHERE Status = 1;";
					SqlCommand selectCommand(sqlSelectQuery, % sqlconn1);
					SqlDataReader^ reader = selectCommand.ExecuteReader();

					int userId = -1;
					if (reader->HasRows && reader->Read()) {
						userId = reader->GetInt32(0); // Получаем Id первого найденного пользователя
					}
					reader->Close(); // Закрываем ридер

					if (userId != -1) {
						// Запрос на вставку в Events
						String^ sqlInsertQuery = "UPDATE Events SET Title=@task, Type=@type, StartDate=@date, Color=@Color, status=@status WHERE Id_user=@userId AND (Type=@o_type OR Type IS NULL) AND StartDate=@o_date AND status=@o_status;";
						SqlCommand insertCommand(sqlInsertQuery, % sqlconn1);
						insertCommand.Parameters->AddWithValue("@task", zagolvk);
						insertCommand.Parameters->AddWithValue("@date", begindate);
						insertCommand.Parameters->AddWithValue("@Color", hexColor);
						insertCommand.Parameters->AddWithValue("@status", checkBox1->Checked ? "Выполнена" : "В процессе");
						insertCommand.Parameters->AddWithValue("@userId", userId);
						insertCommand.Parameters->AddWithValue("@o_task", o_task);
						insertCommand.Parameters->AddWithValue("@o_type", o_type);
						insertCommand.Parameters->AddWithValue("@o_date", o_date);
						insertCommand.Parameters->AddWithValue("@o_status", o_status);
						if (eventType != nullptr) {
							insertCommand.Parameters->AddWithValue("@Type", eventType);
						}
						else {
							insertCommand.Parameters->AddWithValue("@Type", DBNull::Value); // Отправляем NULL в БД
						}
						insertCommand.ExecuteNonQuery(); // Выполняем INSERT
					}
					sqlconn1.Close(); // Закрываем соединение
				}
				this->Hide();
			}
			catch (Exception^ e) {
				MessageBox::Show("Потеряно соединение с БД: " + e->Message, "Ошибка БД", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}

		}
		catch (Exception^ e)
		{
			MessageBox::Show("Потеряно соединение с БД", "Ошибка БД", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}

	private: System::Void modify1_Activated(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Focus();
	}

	private: System::Void dealete_button_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			String^ connect = "Data Source=localhost\\sqlexpress;Integrated Security=True;Encrypt=False";
			SqlConnection^ sqlconn1 = gcnew SqlConnection(connect);

			try {
				sqlconn1->Open();
				if (sqlconn1->State == ConnectionState::Open) {

					// Получаем ID активного пользователя
					String^ sqlSelectQuery = "SELECT Id FROM Users WHERE Status = 1;";
					SqlCommand^ selectCommand = gcnew SqlCommand(sqlSelectQuery, sqlconn1);
					SqlDataReader^ reader = selectCommand->ExecuteReader();

					int userId = -1;
					if (reader->HasRows && reader->Read()) {
						userId = reader->GetInt32(0);
					}
					reader->Close();

					if (userId != -1) {
						// Подтверждение удаления
						System::Windows::Forms::DialogResult result = MessageBox::Show(
							"Вы уверены, что хотите удалить это событие?\n\n" +
							"Название: " + o_task + "\n" +
							"Тип: " + o_type + "\n" +
							"Дата: " + o_date.ToString("dd.MM.yyyy"),
							"Подтверждение удаления",
							MessageBoxButtons::YesNo,
							MessageBoxIcon::Question,
							MessageBoxDefaultButton::Button2);

						if (result == System::Windows::Forms::DialogResult::Yes) {
							// Удаление события
							String^ sqlDeleteQuery = "DELETE FROM Events WHERE Id_user=@userId AND Title=@o_task AND (Type=@o_type OR Type IS NULL) AND StartDate=@o_date AND status=@o_status;";
							SqlCommand^ deleteCommand = gcnew SqlCommand(sqlDeleteQuery, sqlconn1);
							deleteCommand->Parameters->AddWithValue("@userId", userId);
							deleteCommand->Parameters->AddWithValue("@o_task", o_task);
							deleteCommand->Parameters->AddWithValue("@o_type", o_type);
							deleteCommand->Parameters->AddWithValue("@o_date", o_date);
							deleteCommand->Parameters->AddWithValue("@o_status", o_status);

							int rowsAffected = deleteCommand->ExecuteNonQuery();
							if (rowsAffected > 0) {
								MessageBox::Show("Событие успешно удалено", "Успех",
									MessageBoxButtons::OK, MessageBoxIcon::Information);
								this->Hide();
							}
							else {
								MessageBox::Show("Событие не найдено или уже удалено", "Информация",
									MessageBoxButtons::OK, MessageBoxIcon::Information);
							}
						}
					}
				}
				sqlconn1->Close();
			}
			catch (Exception^ ex) {
				MessageBox::Show("Ошибка при работе с БД: " + ex->Message, "Ошибка БД", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("Ошибка подключения к БД: " + ex->Message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	};
}
