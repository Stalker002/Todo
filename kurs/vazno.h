#pragma once
#include "add.h"
#include "modify.h"
#include "F1.h"
#include "done.h"
namespace kurs {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class vazno : public System::Windows::Forms::Form
	{
	public:
		vazno(void)
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
		~vazno()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::Label^ add_label;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;





	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ add_pictureBox;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel3;







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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(vazno::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->add_pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->add_label = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->add_pictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(243)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->panel1->Controls->Add(this->pictureBox6);
			this->panel1->Controls->Add(this->pictureBox5);
			this->panel1->Controls->Add(this->pictureBox4);
			this->panel1->Controls->Add(this->pictureBox3);
			this->panel1->Controls->Add(this->add_pictureBox);
			this->panel1->Controls->Add(this->add_label);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(384, 1146);
			this->panel1->TabIndex = 0;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(239)),
				static_cast<System::Int32>(static_cast<System::Byte>(229)));
			this->pictureBox6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(41, 337);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(66, 63);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 10;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(41, 427);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(66, 63);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 2;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &vazno::pictureBox5_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(41, 249);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(66, 60);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 9;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &vazno::pictureBox4_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(41, 166);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(66, 61);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 8;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &vazno::pictureBox3_Click);
			// 
			// add_pictureBox
			// 
			this->add_pictureBox->Cursor = System::Windows::Forms::Cursors::Hand;
			this->add_pictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"add_pictureBox.Image")));
			this->add_pictureBox->Location = System::Drawing::Point(17, 976);
			this->add_pictureBox->Name = L"add_pictureBox";
			this->add_pictureBox->Size = System::Drawing::Size(62, 60);
			this->add_pictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->add_pictureBox->TabIndex = 7;
			this->add_pictureBox->TabStop = false;
			this->add_pictureBox->Click += gcnew System::EventHandler(this, &vazno::add_pictureBox_Click);
			// 
			// add_label
			// 
			this->add_label->AutoSize = true;
			this->add_label->Cursor = System::Windows::Forms::Cursors::Hand;
			this->add_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->add_label->Location = System::Drawing::Point(85, 986);
			this->add_label->Name = L"add_label";
			this->add_label->Size = System::Drawing::Size(258, 37);
			this->add_label->TabIndex = 6;
			this->add_label->Text = L"Добавить задачу";
			this->add_label->Click += gcnew System::EventHandler(this, &vazno::add_label_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(239)),
				static_cast<System::Int32>(static_cast<System::Byte>(229)));
			this->label5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->label5->Location = System::Drawing::Point(113, 349);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(152, 40);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Важные";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->label4->Location = System::Drawing::Point(113, 437);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(234, 40);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Выполненые";
			this->label4->Click += gcnew System::EventHandler(this, &vazno::label4_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->label3->Location = System::Drawing::Point(113, 260);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(248, 40);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Предстоящие";
			this->label3->Click += gcnew System::EventHandler(this, &vazno::label3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->label2->Location = System::Drawing::Point(113, 175);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(158, 40);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Сегодня";
			this->label2->Click += gcnew System::EventHandler(this, &vazno::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->label1->Location = System::Drawing::Point(160, 49);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(191, 46);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Поехали!";
			this->label1->Click += gcnew System::EventHandler(this, &vazno::label1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(116, 114);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &vazno::pictureBox1_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(239)),
				static_cast<System::Int32>(static_cast<System::Byte>(229)));
			this->panel3->Location = System::Drawing::Point(17, 325);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(345, 88);
			this->panel3->TabIndex = 2;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Controls->Add(this->pictureBox7);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->dataGridView1);
			this->panel2->Location = System::Drawing::Point(362, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1424, 1146);
			this->panel2->TabIndex = 0;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(1285, 0);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(48, 48);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox7->TabIndex = 1;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Click += gcnew System::EventHandler(this, &vazno::pictureBox7_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->label7->Location = System::Drawing::Point(576, 55);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(312, 46);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Важные задачи";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToOrderColumns = true;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(210)));
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			dataGridViewCellStyle4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(59)));
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::Color::CornflowerBlue;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(59)));
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(210)));
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			dataGridViewCellStyle5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(59)));
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::SystemColors::GradientActiveCaption;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(59)));
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle5;
			this->dataGridView1->GridColor = System::Drawing::Color::Black;
			this->dataGridView1->Location = System::Drawing::Point(94, 154);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(210)));
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(59)));
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::SystemColors::GradientActiveCaption;
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(59)));
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle6;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(1184, 869);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellFormatting += gcnew System::Windows::Forms::DataGridViewCellFormattingEventHandler(this, &vazno::dataGridView1_CellFormatting);
			this->dataGridView1->CellMouseDoubleClick += gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this, &vazno::dataGridView1_CellMouseDoubleClick);
			// 
			// vazno
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1785, 1146);
			this->ControlBox = false;
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->KeyPreview = true;
			this->MaximizeBox = false;
			this->Name = L"vazno";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Поехали!";
			this->Activated += gcnew System::EventHandler(this, &vazno::vazno_Activated);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &vazno::vazno_KeyDown);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->add_pictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void add_label_Click(System::Object^ sender, System::EventArgs^ e) {
		add^ addevent = gcnew(add);
		addevent->ShowDialog();
		this->Show();
	}
	private: System::Void add_pictureBox_Click(System::Object^ sender, System::EventArgs^ e) {
		add^ addevent = gcnew(add);
		addevent->ShowDialog();
		this->Show();
	}


	private: System::Void vazno_Activated(System::Object^ sender, System::EventArgs^ e) {
		String^ connect = "Data Source=localhost\\sqlexpress;Integrated Security=True;Encrypt=False";
		SqlConnection^ sqlconn = gcnew SqlConnection(connect); // Используйте управляемый указатель (^)
		SqlDataReader^ reader = nullptr;

		try {
			sqlconn->Open();
			if (sqlconn->State == ConnectionState::Open) {
				// 1. Получение Id активного пользователя
				String^ sqlSelectQuery = "SELECT Id FROM Users WHERE Status = 1;";
				SqlCommand^ selectCommand = gcnew SqlCommand(sqlSelectQuery, sqlconn);
				reader = selectCommand->ExecuteReader();

				int userId = -1;
				if (reader->HasRows && reader->Read()) {
					userId = reader->GetInt32(0); // Исправлено: индекс столбца 0
				}
				reader->Close();

				if (userId != -1) {
					// 2. Получение данных из Events
					String^ sqlEventsQuery = "SELECT status AS Статус, Title AS Задача, Type AS Тип, StartDate AS Дата, Color FROM Events WHERE Type = 'Важное' AND Id_user = @userId ORDER BY StartDate ASC;";
					SqlCommand^ eventsCommand = gcnew SqlCommand(sqlEventsQuery, sqlconn);
					eventsCommand->Parameters->AddWithValue("@userId", userId);
					// Загрузка данных в DataGridView
					SqlDataAdapter^ adapter = gcnew SqlDataAdapter(eventsCommand);
					DataTable^ dataTable = gcnew DataTable();
					adapter->Fill(dataTable); // Автоматически открывает/закрывает соединение
					dataGridView1->DataSource = dataTable;
					dataGridView1->Columns["Задача"]->AutoSizeMode = DataGridViewAutoSizeColumnMode::Fill;
					dataGridView1->Columns["Дата"]->Width = 175;
					dataGridView1->Columns["Тип"]->Width = 100;
					dataGridView1->Columns["Статус"]->Width = 115;
					dataGridView1->Columns["Color"]->Visible = false;
				}
			}
		}
		catch (Exception^ e) {
			MessageBox::Show("Ошибка: " + e->Message, "Ошибка БД", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally {
			if (reader != nullptr && !reader->IsClosed)
				reader->Close();
			if (sqlconn->State == ConnectionState::Open)
				sqlconn->Close();

		}
	}

	private: System::Void dataGridView1_CellMouseDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellMouseEventArgs^ e) {
		if (e->RowIndex >= 0) { // Проверяем, что кликнули по строке данных, а не по заголовку
			DataGridViewRow^ selectedRow = dataGridView1->Rows[e->RowIndex];

			// Извлекаем данные
			String^ status = selectedRow->Cells["Статус"]->Value->ToString();
			String^ task = selectedRow->Cells["Задача"]->Value->ToString();
			String^ type = selectedRow->Cells["Тип"]->Value->ToString();
			DateTime date = Convert::ToDateTime(selectedRow->Cells["Дата"]->Value);
			String^ rowColor = selectedRow->Cells["Color"]->Value->ToString();

			// Открываем форму редактирования
			modify^ modifyForm = gcnew modify(status, task, type, date, rowColor);
			modifyForm->ShowDialog();
		}
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void pictureBox7_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void vazno_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::F1) {
			// Создаем и показываем форму помощи
			F1^ helpForm = gcnew F1();
			helpForm->Show();
			e->Handled = true; // Предотвращаем дальнейшую обработку клавиши
		}
	}
		   Color ParseHexColor(String^ hexColor)
		   {
			   // Удаляем # если есть
			   hexColor = hexColor->Trim()->ToUpper();
			   if (hexColor->StartsWith("#"))
				   hexColor = hexColor->Substring(1);

			   // Допустимые форматы: RRGGBB или RGB
			   if (hexColor->Length != 6 && hexColor->Length != 3)
				   throw gcnew ArgumentException("Неправильный формат HEX цвета");

			   int r, g, b;

			   if (hexColor->Length == 6)
			   {
				   r = Convert::ToInt32(hexColor->Substring(0, 2), 16);
				   g = Convert::ToInt32(hexColor->Substring(2, 2), 16);
				   b = Convert::ToInt32(hexColor->Substring(4, 2), 16);
			   }
			   else // 3 символа
			   {
				   r = Convert::ToInt32(hexColor->Substring(0, 1), 16) * 17;
				   g = Convert::ToInt32(hexColor->Substring(1, 1), 16) * 17;
				   b = Convert::ToInt32(hexColor->Substring(2, 1), 16) * 17;
			   }

			   return Color::FromArgb(r, g, b);
		   }
		   Color GetContrastColor(Color color)
		   {
			   // Рассчитываем яркость цвета по формуле
			   double luminance = (0.299 * color.R + 0.587 * color.G + 0.114 * color.B) / 255;

			   // Возвращаем черный для светлых цветов, белый для темных
			   return luminance > 0.5 ? Color::Black : Color::White;
		   }
	private: System::Void dataGridView1_CellFormatting(System::Object^ sender, System::Windows::Forms::DataGridViewCellFormattingEventArgs^ e) {
		Color specialBackgroundColor = Color::FromArgb(243, 230, 210);
		Color specialTextColor = Color::FromArgb(209, 69, 59);
		if (e->RowIndex < 0 || e->ColumnIndex < 0) return;

		DataGridViewRow^ row = dataGridView1->Rows[e->RowIndex];
		if (row->Cells["Color"]->Value == nullptr) return;

		String^ hexColor = row->Cells["Color"]->Value->ToString();
		if (String::IsNullOrEmpty(hexColor)) return;

		try
		{
			Color backColor = ParseHexColor(hexColor);
			if (hexColor->ToUpper() == "#FFFFFF")
			{
				e->CellStyle->BackColor = specialBackgroundColor;
				e->CellStyle->ForeColor = specialTextColor;
			}
			else
			{
				e->CellStyle->BackColor = backColor;
				e->CellStyle->ForeColor = GetContrastColor(backColor);
			}
		}
		catch (Exception^)
		{
			// Если цвет в неправильном формате, используем значения по умолчанию
			e->CellStyle->BackColor = Color::White;
			e->CellStyle->ForeColor = Color::Black;
		}
		if (e->ColumnIndex == 0 && row->Cells["Color"]->Value != nullptr)
		{
			String^ statusHexColor = row->Cells["Color"]->Value->ToString();
			if (!String::IsNullOrEmpty(statusHexColor))
			{
				try
				{
					Color statusColor = ParseHexColor(statusHexColor);
					if (hexColor->ToUpper() == "#FFFFFF")
					{
						e->CellStyle->BackColor = specialBackgroundColor;
						e->CellStyle->ForeColor = specialTextColor;
					}
					else
					{
						e->CellStyle->BackColor = statusColor;
						e->CellStyle->ForeColor = GetContrastColor(statusColor);
					}
				}
				catch (Exception^)
				{
					// Если цвет статуса в неправильном формате, используем оранжевый как цвет по умолчанию
					e->CellStyle->BackColor = Color::Orange;
					e->CellStyle->ForeColor = Color::Black;
				}
			}
		}
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
		done^ formDone = gcnew done();
		this->Hide();
		formDone->ShowDialog();
		this->Show();
	}
private: System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e) {
	done^ formDone = gcnew done();
	this->Hide();
	formDone->ShowDialog();
	this->Show();
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
