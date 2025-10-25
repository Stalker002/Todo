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
	public ref class add : public System::Windows::Forms::Form
	{
	public:
		add(void)
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
		~add()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ add_button;
	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;


	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ setColor1_button;



	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::ColorDialog^ colorDialog1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox1;












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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(add::typeid));
			this->add_button = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->setColor1_button = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// add_button
			// 
			this->add_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->add_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->add_button->ForeColor = System::Drawing::Color::White;
			this->add_button->Location = System::Drawing::Point(84, 651);
			this->add_button->Name = L"add_button";
			this->add_button->Size = System::Drawing::Size(416, 100);
			this->add_button->TabIndex = 0;
			this->add_button->Text = L"Добавить задачу";
			this->add_button->UseVisualStyleBackColor = false;
			this->add_button->Click += gcnew System::EventHandler(this, &add::add_button_Click);
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
			// setColor1_button
			// 
			this->setColor1_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->setColor1_button->Location = System::Drawing::Point(225, 431);
			this->setColor1_button->Name = L"setColor1_button";
			this->setColor1_button->Size = System::Drawing::Size(304, 42);
			this->setColor1_button->TabIndex = 10;
			this->setColor1_button->Text = L"Выбрать цвет";
			this->setColor1_button->UseVisualStyleBackColor = true;
			this->setColor1_button->Click += gcnew System::EventHandler(this, &add::setColor1_button_Click);
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
			this->label6->Location = System::Drawing::Point(142, 31);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(295, 37);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Добавление задачи";
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
			this->checkedListBox1->ItemCheck += gcnew System::Windows::Forms::ItemCheckEventHandler(this, &add::checkedListBox1_ItemCheck);
			// 
			// add
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(589, 784);
			this->Controls->Add(this->checkedListBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->setColor1_button);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->add_button);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"add";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Добавить задачу";
			this->Activated += gcnew System::EventHandler(this, &add::add1_Activated);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void setColor1_button_Click(System::Object^ sender, System::EventArgs^ e) {
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
	private: System::Void radioButton_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		RadioButton^ selectedRadio = dynamic_cast<RadioButton^>(sender);
	}
	private: System::Void add_button_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ zagolvk = this->textBox1->Text;
		DateTime selectedDate = dateTimePicker1->Value;
		System::Drawing::Color bgColor = pictureBox1->BackColor;
		String^ hexColor = String::Format("#{0:X2}{1:X2}{2:X2}", bgColor.R, bgColor.G, bgColor.B);
		String^ begindate = selectedDate.ToString("dd.MM.yyyy HH:mm");
		String^ eventType = nullptr;
		if (hexColor == nullptr) {
			hexColor = "#FFFFFF";
		}
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
						String^ sqlInsertQuery = "INSERT INTO Events (Id_user, Title, Type, StartDate, Color, status) VALUES (@userId, @Title, @Type, @Date, @Color, 'В процессе');";
						SqlCommand insertCommand(sqlInsertQuery, % sqlconn1);
						insertCommand.Parameters->AddWithValue("@Title", zagolvk);
						insertCommand.Parameters->AddWithValue("@Date", begindate);
						insertCommand.Parameters->AddWithValue("@Color", hexColor);
						insertCommand.Parameters->AddWithValue("@userId", userId);
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

	private: System::Void add1_Activated(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Focus();
	}

	};
}
