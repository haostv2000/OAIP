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
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			comboBox1->SelectedIndex = 0;
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
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
	private: System::Windows::Forms::ToolStripMenuItem^ менюToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ текстовый–едакторToolStripMenuItem;

	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::ToolStripMenuItem^ загрузить»зображениеToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;



	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TabPage^ tabPage3;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
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
			this->менюToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->текстовый–едакторToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->загрузить»зображениеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tabPage3->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			resources->ApplyResources(this->button1, L"button1");
			this->button1->Name = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			resources->ApplyResources(this->button2, L"button2");
			this->button2->Name = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			resources->ApplyResources(this->button3, L"button3");
			this->button3->Name = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->checkBox4);
			this->groupBox1->Controls->Add(this->checkBox1);
			this->groupBox1->Controls->Add(this->checkBox3);
			this->groupBox1->Controls->Add(this->checkBox2);
			resources->ApplyResources(this->groupBox1, L"groupBox1");
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->TabStop = false;
			// 
			// checkBox4
			// 
			resources->ApplyResources(this->checkBox4, L"checkBox4");
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// checkBox1
			// 
			resources->ApplyResources(this->checkBox1, L"checkBox1");
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			resources->ApplyResources(this->checkBox3, L"checkBox3");
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			resources->ApplyResources(this->checkBox2, L"checkBox2");
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			resources->ApplyResources(this->textBox1, L"textBox1");
			this->textBox1->Name = L"textBox1";
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->Name = L"label1";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->radioButton5);
			this->groupBox2->Controls->Add(this->radioButton4);
			this->groupBox2->Controls->Add(this->radioButton3);
			this->groupBox2->Controls->Add(this->radioButton2);
			this->groupBox2->Controls->Add(this->radioButton1);
			resources->ApplyResources(this->groupBox2, L"groupBox2");
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->TabStop = false;
			// 
			// radioButton5
			// 
			this->radioButton5->BackColor = System::Drawing::Color::Black;
			this->radioButton5->ForeColor = System::Drawing::Color::White;
			resources->ApplyResources(this->radioButton5, L"radioButton5");
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->TabStop = true;
			this->radioButton5->UseVisualStyleBackColor = false;
			// 
			// radioButton4
			// 
			this->radioButton4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(89)));
			resources->ApplyResources(this->radioButton4, L"radioButton4");
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->TabStop = true;
			this->radioButton4->UseVisualStyleBackColor = false;
			// 
			// radioButton3
			// 
			this->radioButton3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(251)),
				static_cast<System::Int32>(static_cast<System::Byte>(113)));
			resources->ApplyResources(this->radioButton3, L"radioButton3");
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->TabStop = true;
			this->radioButton3->UseVisualStyleBackColor = false;
			// 
			// radioButton2
			// 
			this->radioButton2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(91)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			resources->ApplyResources(this->radioButton2, L"radioButton2");
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->TabStop = true;
			this->radioButton2->UseVisualStyleBackColor = false;
			// 
			// radioButton1
			// 
			resources->ApplyResources(this->radioButton1, L"radioButton1");
			this->radioButton1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(84)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->TabStop = true;
			this->radioButton1->UseVisualStyleBackColor = false;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			resources->ApplyResources(this->listBox1, L"listBox1");
			this->listBox1->Name = L"listBox1";
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->менюToolStripMenuItem });
			resources->ApplyResources(this->menuStrip1, L"menuStrip1");
			this->menuStrip1->Name = L"menuStrip1";
			// 
			// менюToolStripMenuItem
			// 
			this->менюToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->текстовый–едакторToolStripMenuItem });
			this->менюToolStripMenuItem->Name = L"менюToolStripMenuItem";
			resources->ApplyResources(this->менюToolStripMenuItem, L"менюToolStripMenuItem");
			// 
			// текстовый–едакторToolStripMenuItem
			// 
			this->текстовый–едакторToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->загрузить»зображениеToolStripMenuItem });
			this->текстовый–едакторToolStripMenuItem->Name = L"текстовый–едакторToolStripMenuItem";
			resources->ApplyResources(this->текстовый–едакторToolStripMenuItem, L"текстовый–едакторToolStripMenuItem");
			// 
			// загрузить»зображениеToolStripMenuItem
			// 
			this->загрузить»зображениеToolStripMenuItem->Name = L"загрузить»зображениеToolStripMenuItem";
			resources->ApplyResources(this->загрузить»зображениеToolStripMenuItem, L"загрузить»зображениеToolStripMenuItem");
			this->загрузить»зображениеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::загрузить»зображениеToolStripMenuItem_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			resources->ApplyResources(this->tabControl1, L"tabControl1");
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->comboBox1);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->listBox1);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->groupBox2);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->button3);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->groupBox1);
			resources->ApplyResources(this->tabPage1, L"tabPage1");
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { resources->GetString(L"comboBox1.Items"), resources->GetString(L"comboBox1.Items1") });
			resources->ApplyResources(this->comboBox1, L"comboBox1");
			this->comboBox1->Name = L"comboBox1";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button7);
			this->tabPage2->Controls->Add(this->button6);
			this->tabPage2->Controls->Add(this->button5);
			this->tabPage2->Controls->Add(this->button4);
			this->tabPage2->Controls->Add(this->pictureBox1);
			resources->ApplyResources(this->tabPage2, L"tabPage2");
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			resources->ApplyResources(this->button7, L"button7");
			this->button7->Name = L"button7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button6
			// 
			resources->ApplyResources(this->button6, L"button6");
			this->button6->Name = L"button6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			resources->ApplyResources(this->button5, L"button5");
			this->button5->Name = L"button5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			resources->ApplyResources(this->button4, L"button4");
			this->button4->Name = L"button4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::DimGray;
			resources->ApplyResources(this->pictureBox1, L"pictureBox1");
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->TabStop = false;
			// 
			// tabPage3
			// 
			resources->ApplyResources(this->tabPage3, L"tabPage3");
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// axWindowsMediaPlayer1
			// 
			// 
			// MyForm
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tabPage3->ResumeLayout(false);
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
		//this->listBox1->Items->Clear();
		this->listBox1->Font = (gcnew System::Drawing::Font(L"Arial",14, System::Drawing::FontStyle::Regular, System:: Drawing::GraphicsUnit::Point, 
			static_cast<System:: Byte>(204))); 
		this->listBox1->ForeColor = System:: Drawing::Color::Black; 
		this->listBox1->Items->Add(this -> textBox1->Text);
		//”станавливает красный цвет дл€ текста
		if (radioButton1->Checked == true) {
			this->listBox1->ForeColor = System::Drawing::Color::Red;
		}
		//”станавливает синий цвет дл€ текста
		if (radioButton2->Checked == true) {
			this->listBox1->ForeColor = System::Drawing::Color::Blue;
		}
		//”станавливает зеленый цвет дл€ текста
		if (radioButton3->Checked == true) {
			this->listBox1->ForeColor = System::Drawing::Color::Green;
		}
		//”станавливает желтый цвет дл€ текста
		if (radioButton4->Checked == true) {
			this->listBox1->ForeColor = System::Drawing::Color::Yellow;
		}
		//”станавливает черный цвет дл€ текста
		if (radioButton5->Checked == true) {
			this->listBox1->ForeColor = System::Drawing::Color::Black;
		}
		//”станавливает атрибут Ђжирностьї дл€ текста
		if (checkBox1->Checked == true) {
			this->listBox1->Font = (gcnew
				System::Drawing::Font(L"Arial", 14, System::Drawing:: FontStyle::Bold, System::Drawing::GraphicsUnit::Point,static_cast<System::Byte>(204)));
		}
		//”станавливает атрибут Ђкурсивї дл€ текста
		if (checkBox2->Checked == true) {
			this->listBox1->Font = (gcnew	System::Drawing::Font(L"Arial", 14, System::Drawing:: FontStyle::Italic, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
		}
		//”станавливает атрибут Ђподчеркнутыйї дл€ текста
		if (checkBox3->Checked == true) {
			this->listBox1->Font = (gcnew
				System::Drawing::Font(L"Arial", 14, System::Drawing:: FontStyle::Underline, System::Drawing :: GraphicsUnit::Point,static_cast<System::Byte>(204)));
		}
		//”станавливает атрибут Ђзачеркнутыйї дл€ текста
		if (checkBox4->Checked == true) {
			this->listBox1->Font = (gcnew
				System::Drawing::Font(L"Arial", 14, System::Drawing:: FontStyle::Strikeout, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
		}
		//”станавливает атрибуты Ђжирностьї, Ђкурсивї дл€ текста
		if ((checkBox1->Checked == true) && (checkBox2->Checked ==
			true)) {
			this->listBox1->Font = (gcnew System::Drawing:: Font(L"Arial", 14, static_cast<System:: Drawing::FontStyle>((System::Drawing::FontStyle::Bold |	System::Drawing::FontStyle::Italic)), 
				System::Drawing:: GraphicsUnit::Point, static_cast<System::Byte>(204)));
		}
		//”станавливает атрибуты Ђжирностьї, Ђкурсивї и Ђподчеркнутыйї дл€ текста
		if ((checkBox1->Checked == true) && ((checkBox2->Checked ==
			true)) && (checkBox3->Checked == true))this->listBox1->Font =
			(gcnew System::Drawing::Font(L"Arial", 14,static_cast<System::Drawing:: FontStyle>(((System::Drawing::FontStyle::Bold | System:: Drawing::FontStyle::Italic) |
				System::Drawing::FontStyle:: Underline)), System::Drawing::GraphicsUnit::Point,	static_cast<System:: Byte>(204)));
		//”станавливает атрибуты Ђжирностьї, Ђкурсивї, Ђподчеркнутыйї и Ђзачеркнутыйї 
		
		if ((checkBox1->Checked == true) && (checkBox2->Checked ==true) && (checkBox3->Checked == true) && 
			(checkBox4->Checked ==true))this->listBox1->Font = (gcnew System::Drawing:: Font(L"Arial", 14, static_cast<System::Drawing:: FontStyle>(System::Drawing::FontStyle::Bold | 
				System:: Drawing::FontStyle::Italic | System::Drawing :: FontStyle::Underline | System::Drawing :: FontStyle::Strikeout), 
				System::Drawing::GraphicsUnit::Point,static_cast<System::Byte>(204)));
		//”станавливает атрибуты Ђкурсивї, Ђподчеркнутыйї и Ђзачеркнутыйї дл€ текста
		if ((checkBox2->Checked == true) && (checkBox3->Checked ==true) && (checkBox4->Checked == true))this->listBox1->Font =(gcnew System::Drawing::Font(L"Arial", 14, static_cast<System:: Drawing::FontStyle>(System::Drawing::FontStyle::Italic |
			System::Drawing::FontStyle::Underline | System:: Drawing::FontStyle::Strikeout), System::Drawing:: GraphicsUnit::Point, static_cast<System::Byte>(204)));
		//”станавливает атрибуты Ђкурсивї, Ђподчеркнутыйї дл€ текста
		if ((checkBox2->Checked == true) && (checkBox3->Checked ==	true))this->listBox1->Font = (gcnew System::Drawing:: Font(L"Arial", 14, static_cast<System::Drawing:: FontStyle>(System::Drawing::FontStyle::Italic | 
			System:: Drawing::FontStyle::Underline), System::Drawing:: GraphicsUnit::Point, static_cast<System::Byte>(204)));
		//”станавливает атрибуты Ђкурсивї, Ђзачеркнутыйї дл€ текста
		if ((checkBox2->Checked == true) && (checkBox4->Checked ==true))this->listBox1->Font = (gcnew System::Drawing:: Font(L"Arial", 14, static_cast<System:: Drawing::FontStyle>(System::Drawing::FontStyle::Italic |
			System::Drawing::FontStyle::Strikeout), System::Drawing:: GraphicsUnit::Point, static_cast<System::Byte>(204)));
		//”станавливает атрибуты Ђжирностьї, Ђподчеркнутыйї дл€ текста
		if ((checkBox1->Checked == true) && (checkBox3->Checked ==true))this->listBox1->Font = (gcnew System::Drawing:: Font(L"Arial", 14, static_cast<System::Drawing:: FontStyle>(System::Drawing::FontStyle::Bold | 
			System:: Drawing::FontStyle::Underline), System::Drawing:: GraphicsUnit::Point, static_cast<System::Byte>(204)));
		//”станавливает атрибуты Ђподчеркнутыйї, Ђзачеркнутыйї дл€ текста
		if ((checkBox3->Checked == true) && (checkBox4->Checked ==true))this->listBox1->Font = (gcnew System::Drawing:: Font(L"Arial", 14, static_cast<System::Drawing:: FontStyle>(System::Drawing::FontStyle::Underline |
			System::Drawing::FontStyle::Strikeout), System::Drawing:: GraphicsUnit::Point, static_cast<System::Byte>(204)));
		//”станавливает атрибуты Ђжирностьї, Ђзачеркнутыйї дл€ текста
		if ((checkBox1->Checked == true) && (checkBox4->Checked ==true))this->listBox1->Font = (gcnew System::Drawing:: Font(L"Arial", 14, static_cast<System::Drawing:: FontStyle>(System::Drawing::FontStyle::Bold |
			System::Drawing::FontStyle::Strikeout), System::Drawing:: GraphicsUnit::Point, static_cast<System::Byte>(204)));
		//”станавливает атрибуты Ђжирностьї, Ђподчеркнутыйї, Ђзачеркнутыйї дл€ текста
		if ((checkBox1->Checked == true) && (checkBox3->Checked ==true))this->listBox1->Font = (gcnew System::Drawing:: Font(L"Arial", 14, static_cast<System::Drawing:: FontStyle>(System::Drawing::FontStyle::Bold | 
			System:: Drawing::FontStyle::Underline), System::Drawing:: GraphicsUnit::Point, static_cast<System::Byte>(204)));
		//”станавливает атрибуты Ђжирностьї, Ђкурсивї, Ђзачеркнутыйї дл€ текста
		if ((checkBox1->Checked == true) && ((checkBox2->Checked ==	true)) && (checkBox4->Checked == true))this->listBox1->Font =(gcnew System::Drawing::Font(L"Arial", 14, static_cast<System:: Drawing::FontStyle>((System::Drawing::FontStyle::Bold
			| System::Drawing::FontStyle::Italic | System::Drawing::FontStyle::Strikeout)), System::Drawing::GraphicsUnit::Point,static_cast<System::Byte>(204)));
	}
	else
	{
		MessageBox::Show("«аполните пожалуйста данные", "ќшибка ввода данных",
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
	//System::Drawing::Font(L"Arial", 14);
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
	System::Drawing::Font^ font = gcnew System::Drawing::Font("Myriad Pro", 14, FontStyle::Regular);
	g->DrawString("Hello World", font, Brushes::Blue, Rectangle(0, 0, 100, 150));
	// Fill polygon 
	//g->FillClosedCurve(hBrush, curvePoints);
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	pictureBox1->Invalidate();

}
private: System::Void загрузить»зображениеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

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
		MessageBox::Show("ќткройте изображение", "ќшибка ввода данных",
			MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}
private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (comboBox1->SelectedIndex == 0) {
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
