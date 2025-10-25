#pragma once
#include "add.h"
#include "done.h"
#include "predst.h"
#include "vazno.h"
#include "modify.h"
#include "F1.h"
#include <stdlib.h>
#include <vcclr.h>
#include <Windows.h>
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
	public ref class MainForm : public System::Windows::Forms::Form
	{
	private:
		Form^ avtoriz;

	public:
		MainForm()
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label_PredstForm;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::Label^ add_label;
	private: System::Windows::Forms::Label^ label_VaznoForm;
	private: System::Windows::Forms::Label^ label_DoneForm;











	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::PictureBox^ pictureBox_Exite;

	private: System::Windows::Forms::Label^ label_Leave;
	private: System::Windows::Forms::PictureBox^ pictureBox_VaznoForm;
	private: System::Windows::Forms::PictureBox^ pictureBox_DoneForm;
	private: System::Windows::Forms::PictureBox^ pictureBox_PredstForm;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ add_pictureBox;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox_Leave;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox_VaznoForm = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_DoneForm = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_PredstForm = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->add_pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->add_label = (gcnew System::Windows::Forms::Label());
			this->label_VaznoForm = (gcnew System::Windows::Forms::Label());
			this->label_DoneForm = (gcnew System::Windows::Forms::Label());
			this->label_PredstForm = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox_Leave = (gcnew System::Windows::Forms::PictureBox());
			this->label_Leave = (gcnew System::Windows::Forms::Label());
			this->pictureBox_Exite = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_VaznoForm))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_DoneForm))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_PredstForm))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->add_pictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_Leave))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_Exite))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(243)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->panel1->Controls->Add(this->pictureBox_VaznoForm);
			this->panel1->Controls->Add(this->pictureBox_DoneForm);
			this->panel1->Controls->Add(this->pictureBox_PredstForm);
			this->panel1->Controls->Add(this->pictureBox3);
			this->panel1->Controls->Add(this->add_pictureBox);
			this->panel1->Controls->Add(this->add_label);
			this->panel1->Controls->Add(this->label_VaznoForm);
			this->panel1->Controls->Add(this->label_DoneForm);
			this->panel1->Controls->Add(this->label_PredstForm);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(382, 1123);
			this->panel1->TabIndex = 0;
			// 
			// pictureBox_VaznoForm
			// 
			this->pictureBox_VaznoForm->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox_VaznoForm->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_VaznoForm.Image")));
			this->pictureBox_VaznoForm->Location = System::Drawing::Point(41, 337);
			this->pictureBox_VaznoForm->Name = L"pictureBox_VaznoForm";
			this->pictureBox_VaznoForm->Size = System::Drawing::Size(66, 63);
			this->pictureBox_VaznoForm->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox_VaznoForm->TabIndex = 10;
			this->pictureBox_VaznoForm->TabStop = false;
			this->pictureBox_VaznoForm->Click += gcnew System::EventHandler(this, &MainForm::pictureBox_VaznoForm_Click);
			// 
			// pictureBox_DoneForm
			// 
			this->pictureBox_DoneForm->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox_DoneForm->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_DoneForm.Image")));
			this->pictureBox_DoneForm->Location = System::Drawing::Point(41, 427);
			this->pictureBox_DoneForm->Name = L"pictureBox_DoneForm";
			this->pictureBox_DoneForm->Size = System::Drawing::Size(66, 63);
			this->pictureBox_DoneForm->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox_DoneForm->TabIndex = 2;
			this->pictureBox_DoneForm->TabStop = false;
			this->pictureBox_DoneForm->Click += gcnew System::EventHandler(this, &MainForm::pictureBox_DoneForm_Click);
			// 
			// pictureBox_PredstForm
			// 
			this->pictureBox_PredstForm->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox_PredstForm->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_PredstForm.Image")));
			this->pictureBox_PredstForm->Location = System::Drawing::Point(41, 249);
			this->pictureBox_PredstForm->Name = L"pictureBox_PredstForm";
			this->pictureBox_PredstForm->Size = System::Drawing::Size(66, 60);
			this->pictureBox_PredstForm->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox_PredstForm->TabIndex = 9;
			this->pictureBox_PredstForm->TabStop = false;
			this->pictureBox_PredstForm->Click += gcnew System::EventHandler(this, &MainForm::pictureBox_PredstForm_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(239)),
				static_cast<System::Int32>(static_cast<System::Byte>(229)));
			this->pictureBox3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(41, 166);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(66, 61);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 8;
			this->pictureBox3->TabStop = false;
			// 
			// add_pictureBox
			// 
			this->add_pictureBox->Cursor = System::Windows::Forms::Cursors::Hand;
			this->add_pictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"add_pictureBox.Image")));
			this->add_pictureBox->Location = System::Drawing::Point(16, 975);
			this->add_pictureBox->Name = L"add_pictureBox";
			this->add_pictureBox->Size = System::Drawing::Size(62, 60);
			this->add_pictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->add_pictureBox->TabIndex = 7;
			this->add_pictureBox->TabStop = false;
			this->add_pictureBox->Click += gcnew System::EventHandler(this, &MainForm::add_pictureBox_Click);
			// 
			// add_label
			// 
			this->add_label->AutoSize = true;
			this->add_label->Cursor = System::Windows::Forms::Cursors::Hand;
			this->add_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->add_label->Location = System::Drawing::Point(84, 985);
			this->add_label->Name = L"add_label";
			this->add_label->Size = System::Drawing::Size(258, 37);
			this->add_label->TabIndex = 6;
			this->add_label->Text = L"Добавить задачу";
			this->add_label->Click += gcnew System::EventHandler(this, &MainForm::add_label_Click);
			// 
			// label_VaznoForm
			// 
			this->label_VaznoForm->AutoSize = true;
			this->label_VaznoForm->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label_VaznoForm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_VaznoForm->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->label_VaznoForm->Location = System::Drawing::Point(113, 349);
			this->label_VaznoForm->Name = L"label_VaznoForm";
			this->label_VaznoForm->Size = System::Drawing::Size(152, 40);
			this->label_VaznoForm->TabIndex = 5;
			this->label_VaznoForm->Text = L"Важные";
			this->label_VaznoForm->Click += gcnew System::EventHandler(this, &MainForm::label_VaznoForm_Click);
			// 
			// label_DoneForm
			// 
			this->label_DoneForm->AutoSize = true;
			this->label_DoneForm->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label_DoneForm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_DoneForm->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->label_DoneForm->Location = System::Drawing::Point(113, 437);
			this->label_DoneForm->Name = L"label_DoneForm";
			this->label_DoneForm->Size = System::Drawing::Size(234, 40);
			this->label_DoneForm->TabIndex = 4;
			this->label_DoneForm->Text = L"Выполненые";
			this->label_DoneForm->Click += gcnew System::EventHandler(this, &MainForm::label_DoneForm_Click);
			// 
			// label_PredstForm
			// 
			this->label_PredstForm->AutoSize = true;
			this->label_PredstForm->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label_PredstForm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_PredstForm->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->label_PredstForm->Location = System::Drawing::Point(113, 260);
			this->label_PredstForm->Name = L"label_PredstForm";
			this->label_PredstForm->Size = System::Drawing::Size(248, 40);
			this->label_PredstForm->TabIndex = 3;
			this->label_PredstForm->Text = L"Предстоящие";
			this->label_PredstForm->Click += gcnew System::EventHandler(this, &MainForm::label_PredstForm_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(239)),
				static_cast<System::Int32>(static_cast<System::Byte>(229)));
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
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(239)),
				static_cast<System::Int32>(static_cast<System::Byte>(229)));
			this->panel3->Location = System::Drawing::Point(16, 153);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(345, 90);
			this->panel3->TabIndex = 1;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Controls->Add(this->pictureBox_Leave);
			this->panel2->Controls->Add(this->label_Leave);
			this->panel2->Controls->Add(this->pictureBox_Exite);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->dataGridView1);
			this->panel2->Location = System::Drawing::Point(381, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1405, 1123);
			this->panel2->TabIndex = 0;
			// 
			// pictureBox_Leave
			// 
			this->pictureBox_Leave->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox_Leave->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_Leave.Image")));
			this->pictureBox_Leave->Location = System::Drawing::Point(1056, 12);
			this->pictureBox_Leave->Name = L"pictureBox_Leave";
			this->pictureBox_Leave->Size = System::Drawing::Size(50, 50);
			this->pictureBox_Leave->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox_Leave->TabIndex = 5;
			this->pictureBox_Leave->TabStop = false;
			this->pictureBox_Leave->Click += gcnew System::EventHandler(this, &MainForm::pictureBox_Leave_Click);
			// 
			// label_Leave
			// 
			this->label_Leave->AutoSize = true;
			this->label_Leave->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label_Leave->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_Leave->Location = System::Drawing::Point(1112, 19);
			this->label_Leave->Name = L"label_Leave";
			this->label_Leave->Size = System::Drawing::Size(104, 37);
			this->label_Leave->TabIndex = 4;
			this->label_Leave->Text = L"Выйти";
			this->label_Leave->Click += gcnew System::EventHandler(this, &MainForm::label_Leave_Click);
			// 
			// pictureBox_Exite
			// 
			this->pictureBox_Exite->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox_Exite->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_Exite.Image")));
			this->pictureBox_Exite->Location = System::Drawing::Point(1262, 3);
			this->pictureBox_Exite->Name = L"pictureBox_Exite";
			this->pictureBox_Exite->Size = System::Drawing::Size(48, 48);
			this->pictureBox_Exite->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox_Exite->TabIndex = 3;
			this->pictureBox_Exite->TabStop = false;
			this->pictureBox_Exite->Click += gcnew System::EventHandler(this, &MainForm::pictureBox_Exite_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(441, 68);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(440, 40);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Список задач на сегодня";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToOrderColumns = true;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(210)));
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(59)));
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::CornflowerBlue;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(59)));
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(210)));
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(59)));
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::GradientActiveCaption;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(59)));
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->GridColor = System::Drawing::Color::Black;
			this->dataGridView1->Location = System::Drawing::Point(73, 141);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(210)));
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			dataGridViewCellStyle3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(59)));
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::GradientActiveCaption;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(59)));
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(1174, 881);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellMouseDoubleClick += gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this, &MainForm::dataGridView1_CellMouseDoubleClick);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1785, 1123);
			this->ControlBox = false;
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->KeyPreview = true;
			this->MaximizeBox = false;
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Поехали!";
			this->Activated += gcnew System::EventHandler(this, &MainForm::MainForm_Activated);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MainForm::MainForm_KeyDown);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_VaznoForm))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_DoneForm))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_PredstForm))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->add_pictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_Leave))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_Exite))->EndInit();
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
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void MainForm_Activated(System::Object^ sender, System::EventArgs^ e) {
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
					String^ sqlEventsQuery = "SELECT status AS Статус, Title AS Задача, Type AS Тип, StartDate AS Дата, Color FROM Events WHERE Id_user = @userId AND CONVERT(DATE, StartDate) = CONVERT(DATE, GETDATE()) ORDER BY StartDate ASC;";
					SqlCommand^ eventsCommand = gcnew SqlCommand(sqlEventsQuery, sqlconn);
					eventsCommand->Parameters->AddWithValue("@userId", userId);
					// Загрузка данных в DataGridView
					SqlDataAdapter^ adapter = gcnew SqlDataAdapter(eventsCommand);
					DataTable^ dataTable = gcnew DataTable();
					adapter->Fill(dataTable); // Автоматически открывает/закрывает соединение
					dataGridView1->DataSource = dataTable;
					dataGridView1->RowHeadersVisible = false;
					dataGridView1->CellFormatting += gcnew DataGridViewCellFormattingEventHandler(this, &MainForm::dataGridView1_CellFormatting);
					dataGridView1->Columns["Задача"]->AutoSizeMode = DataGridViewAutoSizeColumnMode::Fill;
					dataGridView1->Columns["Дата"]->Width = 175;
					dataGridView1->Columns["Тип"]->Width = 100;
					dataGridView1->Columns["Статус"]->Width = 115;
					dataGridView1->Columns["Color"]->Visible = false;
					String^ sqlUpdateQuery =
						"UPDATE Events SET Type = 'Долги' WHERE StartDate < CONVERT(date, GETDATE()) AND status = 'В процессе' AND Id_user = @userId";

					SqlCommand^ updateCommand = gcnew SqlCommand(sqlUpdateQuery, sqlconn);
					updateCommand->Parameters->AddWithValue("@userId", userId);
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

	private: System::Void label_PredstForm_Click(System::Object^ sender, System::EventArgs^ e) {
		predst^ formPredst = gcnew predst();
		this->Hide();
		formPredst->ShowDialog();
		this->Show();
	}
	private: System::Void pictureBox_PredstForm_Click(System::Object^ sender, System::EventArgs^ e) {
		predst^ formPredst = gcnew predst();
		this->Hide();
		formPredst->ShowDialog();
		this->Show();
	}
	private: System::Void label_VaznoForm_Click(System::Object^ sender, System::EventArgs^ e) {
		vazno^ formVazno = gcnew vazno();
		this->Hide();
		formVazno->ShowDialog();
		this->Show();
	}
	private: System::Void pictureBox_VaznoForm_Click(System::Object^ sender, System::EventArgs^ e) {
		vazno^ formVazno = gcnew vazno();
		this->Hide();
		formVazno->ShowDialog();
		this->Show();
	}
	private: System::Void label_DoneForm_Click(System::Object^ sender, System::EventArgs^ e) {
		done^ formDone = gcnew done();
		this->Hide();
		formDone->ShowDialog();
		this->Show();
	}
	private: System::Void pictureBox_DoneForm_Click(System::Object^ sender, System::EventArgs^ e) {
		done^ formDone = gcnew done();
		this->Hide();
		formDone->ShowDialog();
		this->Show();
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
	private: System::Void dataGridView1_CellFormatting(System::Object^ sender, DataGridViewCellFormattingEventArgs^ e) {
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
	private: System::Void pictureBox_Exite_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void label_Leave_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void pictureBox_Leave_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void MainForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::F1) {
			// Создаем и показываем форму помощи
			F1^ helpForm = gcnew F1();
			helpForm->Show();
			e->Handled = true; // Предотвращаем дальнейшую обработку клавиши
		}
	}
	};
}
