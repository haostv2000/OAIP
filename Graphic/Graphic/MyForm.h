#pragma once
#include"Form2.h"
namespace Graphic {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Drawing2D;


	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����������������ToolStripMenuItem;

	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������������������ToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::RadioButton^ radioButton7;
	private: System::Windows::Forms::RadioButton^ radioButton6;


	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->AutoSize = true;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(251, 33);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(115, 26);
			this->button1->TabIndex = 0;
			this->button1->Text = L"����� ������";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->AutoSize = true;
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(10, 378);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(115, 27);
			this->button2->TabIndex = 1;
			this->button2->Text = L"������ �����";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->AutoSize = true;
			this->button3->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(335, 376);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(115, 27);
			this->button3->TabIndex = 2;
			this->button3->Text = L"�����";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->checkBox4);
			this->groupBox1->Controls->Add(this->checkBox1);
			this->groupBox1->Controls->Add(this->checkBox3);
			this->groupBox1->Controls->Add(this->checkBox2);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(8, 207);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(478, 117);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"����� ������";
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(133, 57);
			this->checkBox4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(129, 20);
			this->checkBox4->TabIndex = 7;
			this->checkBox4->Text = L"�������������";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(4, 33);
			this->checkBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(110, 20);
			this->checkBox1->TabIndex = 4;
			this->checkBox1->Text = L"����������";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(133, 33);
			this->checkBox3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(121, 20);
			this->checkBox3->TabIndex = 6;
			this->checkBox3->Text = L"������������";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(4, 57);
			this->checkBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(98, 20);
			this->checkBox2->TabIndex = 5;
			this->checkBox2->Text = L"���������";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(8, 33);
			this->textBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(240, 20);
			this->textBox1->TabIndex = 4;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(4, 13);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(85, 17);
			this->label1->TabIndex = 5;
			this->label1->Text = L"������� �����";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->radioButton5);
			this->groupBox2->Controls->Add(this->radioButton4);
			this->groupBox2->Controls->Add(this->radioButton3);
			this->groupBox2->Controls->Add(this->radioButton2);
			this->groupBox2->Controls->Add(this->radioButton1);
			this->groupBox2->Location = System::Drawing::Point(251, 62);
			this->groupBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox2->Size = System::Drawing::Size(115, 141);
			this->groupBox2->TabIndex = 6;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"���� ������";
			// 
			// radioButton5
			// 
			this->radioButton5->BackColor = System::Drawing::Color::Black;
			this->radioButton5->ForeColor = System::Drawing::Color::White;
			this->radioButton5->Location = System::Drawing::Point(4, 115);
			this->radioButton5->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(65, 17);
			this->radioButton5->TabIndex = 4;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"������";
			this->radioButton5->UseVisualStyleBackColor = false;
			// 
			// radioButton4
			// 
			this->radioButton4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(89)));
			this->radioButton4->Location = System::Drawing::Point(4, 93);
			this->radioButton4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(65, 17);
			this->radioButton4->TabIndex = 3;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"������";
			this->radioButton4->UseVisualStyleBackColor = false;
			// 
			// radioButton3
			// 
			this->radioButton3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(251)),
				static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->radioButton3->Location = System::Drawing::Point(4, 72);
			this->radioButton3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(65, 17);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"�������";
			this->radioButton3->UseVisualStyleBackColor = false;
			// 
			// radioButton2
			// 
			this->radioButton2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(91)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->radioButton2->Location = System::Drawing::Point(4, 52);
			this->radioButton2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(65, 17);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"�����";
			this->radioButton2->UseVisualStyleBackColor = false;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(84)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->radioButton1->Location = System::Drawing::Point(5, 30);
			this->radioButton1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(70, 17);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"�������";
			this->radioButton1->UseVisualStyleBackColor = false;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(8, 56);
			this->listBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(240, 147);
			this->listBox1->TabIndex = 7;
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->����ToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(533, 24);
			this->menuStrip1->TabIndex = 8;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->�����������������ToolStripMenuItem });
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->����ToolStripMenuItem->Text = L"����";
			// 
			// �����������������ToolStripMenuItem
			// 
			this->�����������������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->��������������������ToolStripMenuItem });
			this->�����������������ToolStripMenuItem->Name = L"�����������������ToolStripMenuItem";
			this->�����������������ToolStripMenuItem->Size = System::Drawing::Size(121, 22);
			this->�����������������ToolStripMenuItem->Text = L"�������";
			// 
			// ��������������������ToolStripMenuItem
			// 
			this->��������������������ToolStripMenuItem->Name = L"��������������������ToolStripMenuItem";
			this->��������������������ToolStripMenuItem->Size = System::Drawing::Size(205, 22);
			this->��������������������ToolStripMenuItem->Text = L"��������� �����������";
			this->��������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::��������������������ToolStripMenuItem_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 24);
			this->tabControl1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(533, 435);
			this->tabControl1->TabIndex = 9;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->groupBox3);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->listBox1);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->groupBox2);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->button3);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tabPage1->Size = System::Drawing::Size(525, 409);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"��������� ��������";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->radioButton7);
			this->groupBox3->Controls->Add(this->radioButton6);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox3->Location = System::Drawing::Point(494, 73);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(150, 100);
			this->groupBox3->TabIndex = 8;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"��� ������";
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->Location = System::Drawing::Point(7, 55);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(66, 26);
			this->radioButton7->TabIndex = 1;
			this->radioButton7->TabStop = true;
			this->radioButton7->Text = L"�����";
			this->radioButton7->UseVisualStyleBackColor = true;
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Location = System::Drawing::Point(7, 28);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(71, 26);
			this->radioButton6->TabIndex = 0;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"�����";
			this->radioButton6->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button7);
			this->tabPage2->Controls->Add(this->button6);
			this->tabPage2->Controls->Add(this->button5);
			this->tabPage2->Controls->Add(this->button4);
			this->tabPage2->Controls->Add(this->pictureBox1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tabPage2->Size = System::Drawing::Size(525, 409);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"����������� ��������";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(8, 178);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(118, 56);
			this->button7->TabIndex = 4;
			this->button7->Text = L"���������";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(6, 96);
			this->button6->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(88, 44);
			this->button6->TabIndex = 3;
			this->button6->Text = L" ������ ��������";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(6, 50);
			this->button5->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(88, 41);
			this->button5->TabIndex = 2;
			this->button5->Text = L"��������";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(6, 5);
			this->button4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(88, 41);
			this->button4->TabIndex = 1;
			this->button4->Text = L"����������";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::DimGray;
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Right;
			this->pictureBox1->Location = System::Drawing::Point(97, 2);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(426, 405);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->ClientSize = System::Drawing::Size(533, 459);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximumSize = System::Drawing::Size(729, 612);
			this->MinimumSize = System::Drawing::Size(729, 612);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Form2^ f = gcnew Form2();
		this->Hide();
		f->ShowDialog();
		this->Show();
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text != "") {
		this->listBox1->Items->Clear();
		this->listBox1->Font = (gcnew System::Drawing::Font(L"Arial",14, System::Drawing::FontStyle::Regular, System:: Drawing::GraphicsUnit::Point, 
			static_cast<System:: Byte>(204))); 
		this->listBox1->ForeColor = System:: Drawing::Color::Black; 
		this->listBox1->Items->Add(this -> textBox1->Text);
		//������������� ������� ���� ��� ������
		if (radioButton1->Checked == true) {
			this->listBox1->ForeColor = System::Drawing::Color::Red;
		}
		//������������� ����� ���� ��� ������
		if (radioButton2->Checked == true) {
			this->listBox1->ForeColor = System::Drawing::Color::Blue;
		}
		//������������� ������� ���� ��� ������
		if (radioButton3->Checked == true) {
			this->listBox1->ForeColor = System::Drawing::Color::Green;
		}
		//������������� ������ ���� ��� ������
		if (radioButton4->Checked == true) {
			this->listBox1->ForeColor = System::Drawing::Color::Yellow;
		}
		//������������� ������ ���� ��� ������
		if (radioButton5->Checked == true) {
			this->listBox1->ForeColor = System::Drawing::Color::Black;
		}
		//������������� ������� ���������� ��� ������
		if (checkBox1->Checked == true) {
			this->listBox1->Font = (gcnew
				System::Drawing::Font(L"Arial", 14, System::Drawing:: FontStyle::Bold, System::Drawing::GraphicsUnit::Point,static_cast<System::Byte>(204)));
		}
		//������������� ������� ������� ��� ������
		if (checkBox2->Checked == true) {
			this->listBox1->Font = (gcnew	System::Drawing::Font(L"Arial", 14, System::Drawing:: FontStyle::Italic, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
		}
		//������������� ������� ������������� ��� ������
		if (checkBox3->Checked == true) {
			this->listBox1->Font = (gcnew
				System::Drawing::Font(L"Arial", 14, System::Drawing:: FontStyle::Underline, System::Drawing :: GraphicsUnit::Point,static_cast<System::Byte>(204)));
		}
		//������������� ������� ������������ ��� ������
		if (checkBox4->Checked == true) {
			this->listBox1->Font = (gcnew
				System::Drawing::Font(L"Arial", 14, System::Drawing:: FontStyle::Strikeout, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
		}
		//������������� �������� ����������, ������� ��� ������
		if ((checkBox1->Checked == true) && (checkBox2->Checked ==
			true)) {
			this->listBox1->Font = (gcnew System::Drawing:: Font(L"Arial", 14, static_cast<System:: Drawing::FontStyle>((System::Drawing::FontStyle::Bold |	System::Drawing::FontStyle::Italic)), 
				System::Drawing:: GraphicsUnit::Point, static_cast<System::Byte>(204)));
		}
		//������������� �������� ����������, ������� � ������������� ��� ������
		if ((checkBox1->Checked == true) && ((checkBox2->Checked ==
			true)) && (checkBox3->Checked == true))this->listBox1->Font =
			(gcnew System::Drawing::Font(L"Arial", 14,static_cast<System::Drawing:: FontStyle>(((System::Drawing::FontStyle::Bold | System:: Drawing::FontStyle::Italic) |
				System::Drawing::FontStyle:: Underline)), System::Drawing::GraphicsUnit::Point,	static_cast<System:: Byte>(204)));
		//������������� �������� ����������, �������, ������������� � ������������ 
		
		if ((checkBox1->Checked == true) && (checkBox2->Checked ==true) && (checkBox3->Checked == true) && 
			(checkBox4->Checked ==true))this->listBox1->Font = (gcnew System::Drawing:: Font(L"Arial", 14, static_cast<System::Drawing:: FontStyle>(System::Drawing::FontStyle::Bold | 
				System:: Drawing::FontStyle::Italic | System::Drawing :: FontStyle::Underline | System::Drawing :: FontStyle::Strikeout), 
				System::Drawing::GraphicsUnit::Point,static_cast<System::Byte>(204)));
		//������������� �������� �������, ������������� � ������������ ��� ������
		if ((checkBox2->Checked == true) && (checkBox3->Checked ==true) && (checkBox4->Checked == true))this->listBox1->Font =(gcnew System::Drawing::Font(L"Arial", 14, static_cast<System:: Drawing::FontStyle>(System::Drawing::FontStyle::Italic |
			System::Drawing::FontStyle::Underline | System:: Drawing::FontStyle::Strikeout), System::Drawing:: GraphicsUnit::Point, static_cast<System::Byte>(204)));
		//������������� �������� �������, ������������� ��� ������
		if ((checkBox2->Checked == true) && (checkBox3->Checked ==	true))this->listBox1->Font = (gcnew System::Drawing:: Font(L"Arial", 14, static_cast<System::Drawing:: FontStyle>(System::Drawing::FontStyle::Italic | 
			System:: Drawing::FontStyle::Underline), System::Drawing:: GraphicsUnit::Point, static_cast<System::Byte>(204)));
		//������������� �������� �������, ������������ ��� ������
		if ((checkBox2->Checked == true) && (checkBox4->Checked ==true))this->listBox1->Font = (gcnew System::Drawing:: Font(L"Arial", 14, static_cast<System:: Drawing::FontStyle>(System::Drawing::FontStyle::Italic |
			System::Drawing::FontStyle::Strikeout), System::Drawing:: GraphicsUnit::Point, static_cast<System::Byte>(204)));
		//������������� �������� ����������, ������������� ��� ������
		if ((checkBox1->Checked == true) && (checkBox3->Checked ==true))this->listBox1->Font = (gcnew System::Drawing:: Font(L"Arial", 14, static_cast<System::Drawing:: FontStyle>(System::Drawing::FontStyle::Bold | 
			System:: Drawing::FontStyle::Underline), System::Drawing:: GraphicsUnit::Point, static_cast<System::Byte>(204)));
		//������������� �������� �������������, ������������ ��� ������
		if ((checkBox3->Checked == true) && (checkBox4->Checked ==true))this->listBox1->Font = (gcnew System::Drawing:: Font(L"Arial", 14, static_cast<System::Drawing:: FontStyle>(System::Drawing::FontStyle::Underline |
			System::Drawing::FontStyle::Strikeout), System::Drawing:: GraphicsUnit::Point, static_cast<System::Byte>(204)));
		//������������� �������� ����������, ������������ ��� ������
		if ((checkBox1->Checked == true) && (checkBox4->Checked ==true))this->listBox1->Font = (gcnew System::Drawing:: Font(L"Arial", 14, static_cast<System::Drawing:: FontStyle>(System::Drawing::FontStyle::Bold |
			System::Drawing::FontStyle::Strikeout), System::Drawing:: GraphicsUnit::Point, static_cast<System::Byte>(204)));
		//������������� �������� ����������, �������������, ������������ ��� ������
		if ((checkBox1->Checked == true) && (checkBox3->Checked ==true))this->listBox1->Font = (gcnew System::Drawing:: Font(L"Arial", 14, static_cast<System::Drawing:: FontStyle>(System::Drawing::FontStyle::Bold | 
			System:: Drawing::FontStyle::Underline), System::Drawing:: GraphicsUnit::Point, static_cast<System::Byte>(204)));
		//������������� �������� ����������, �������, ������������ ��� ������
		if ((checkBox1->Checked == true) && ((checkBox2->Checked ==	true)) && (checkBox4->Checked == true))this->listBox1->Font =(gcnew System::Drawing::Font(L"Arial", 14, static_cast<System:: Drawing::FontStyle>((System::Drawing::FontStyle::Bold
			| System::Drawing::FontStyle::Italic | System::Drawing::FontStyle::Strikeout)), System::Drawing::GraphicsUnit::Point,static_cast<System::Byte>(204)));
	}
	else
	{
		MessageBox::Show("��������� ���������� ������", "������ ����� ������",
		MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}

private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	Graphics^ g = pictureBox1->CreateGraphics();
	Pen^ bluePen = gcnew Pen(Color::Blue, 1.0f);
	HatchBrush^ hBrush = gcnew HatchBrush(HatchStyle::ZigZag, Color::White, Color::Blue);


	// Create points that define polygon.
	Point point1 = Point(50, 250);
	Point point2 = Point(100, 250);
	Point point3 = Point(150, 300);
	Point point4 = Point(200, 250);
	Point point5 = Point(300, 200);
	Point point6 = Point(200, 100);
	Point point7 = Point(150, 50);
	array<Point>^ curvePoints = { point1,point2,point3,point4,point5,point6,point7 };

	// Draw polygon to screen
	g->DrawPolygon(bluePen, curvePoints);
	g->DrawEllipse(bluePen, 231, 231, 20, 20);

	// Fill polygon 
	//g->FillClosedCurve(hBrush, curvePoints);
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	pictureBox1->Invalidate();

}
private: System::Void ��������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	openFileDialog1->ShowDialog();
	if (openFileDialog1->FileName != nullptr)
		this->pictureBox1->ImageLocation = this->openFileDialog1->FileName;
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	pictureBox1->Image = nullptr;
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (pictureBox1->Image != nullptr) {
		Bitmap^ bitmap1 = gcnew Bitmap(pictureBox1->Image);
		if (bitmap1 != nullptr) {
			bitmap1->RotateFlip(RotateFlipType::Rotate180FlipY);
			pictureBox1->Image = bitmap1;
		}
	}
	else {
		MessageBox::Show("�������� �����������", "������ ����� ������",
			MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}
private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (radioButton6->Checked == true) {
		if (e->KeyChar == '.') {
			if (this->textBox1->Text->Contains(".") && !this->textBox1->SelectedText->Contains("."))
				e->Handled = true;
		}
		else if (e->KeyChar == '-' && !(this->listBox1->Text->Contains("-"))) {
			e->Handled = true;
			textBox1->Text = "-" + textBox1->Text;
		}
		else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
			e->Handled = true;
		}
	}
	
}
};
}
