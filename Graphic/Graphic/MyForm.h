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
	/// Сводка для MyForm
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
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
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
	private: System::Windows::Forms::ToolStripMenuItem^ текстовыйРедакторToolStripMenuItem;

	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::ToolStripMenuItem^ загрузитьИзображениеToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
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
			this->менюToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->текстовыйРедакторToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->загрузитьИзображениеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->AutoSize = true;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(335, 41);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(153, 29);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Вывод текста";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->AutoSize = true;
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(10, 364);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(153, 33);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Запуск формы";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->AutoSize = true;
			this->button3->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(335, 364);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(153, 33);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Выход";
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
			this->groupBox1->Location = System::Drawing::Point(10, 255);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(478, 103);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Стиль шрифта";
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(177, 70);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(149, 23);
			this->checkBox4->TabIndex = 7;
			this->checkBox4->Text = L"Перечеркнутый";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(6, 41);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(129, 23);
			this->checkBox1->TabIndex = 4;
			this->checkBox1->Text = L"Полужирный";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(177, 41);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(142, 23);
			this->checkBox3->TabIndex = 6;
			this->checkBox3->Text = L"Подчеркнутый";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(6, 70);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(116, 23);
			this->checkBox2->TabIndex = 5;
			this->checkBox2->Text = L"Курсивный";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(10, 41);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(319, 22);
			this->textBox1->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(6, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(98, 22);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Введите текст";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->radioButton5);
			this->groupBox2->Controls->Add(this->radioButton4);
			this->groupBox2->Controls->Add(this->radioButton3);
			this->groupBox2->Controls->Add(this->radioButton2);
			this->groupBox2->Controls->Add(this->radioButton1);
			this->groupBox2->Location = System::Drawing::Point(335, 76);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(153, 173);
			this->groupBox2->TabIndex = 6;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Цвет текста";
			// 
			// radioButton5
			// 
			this->radioButton5->BackColor = System::Drawing::Color::Black;
			this->radioButton5->ForeColor = System::Drawing::Color::White;
			this->radioButton5->Location = System::Drawing::Point(6, 142);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(87, 21);
			this->radioButton5->TabIndex = 4;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"Черный";
			this->radioButton5->UseVisualStyleBackColor = false;
			// 
			// radioButton4
			// 
			this->radioButton4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(89)));
			this->radioButton4->Location = System::Drawing::Point(6, 115);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(87, 21);
			this->radioButton4->TabIndex = 3;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Желтый";
			this->radioButton4->UseVisualStyleBackColor = false;
			// 
			// radioButton3
			// 
			this->radioButton3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(251)),
				static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->radioButton3->Location = System::Drawing::Point(6, 88);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(87, 21);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Зеленый";
			this->radioButton3->UseVisualStyleBackColor = false;
			// 
			// radioButton2
			// 
			this->radioButton2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(91)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->radioButton2->Location = System::Drawing::Point(6, 64);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(87, 21);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Синий";
			this->radioButton2->UseVisualStyleBackColor = false;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(84)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->radioButton1->Location = System::Drawing::Point(7, 37);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(87, 21);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Красный";
			this->radioButton1->UseVisualStyleBackColor = false;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(10, 69);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(319, 180);
			this->listBox1->TabIndex = 7;
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->менюToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(711, 28);
			this->menuStrip1->TabIndex = 8;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// менюToolStripMenuItem
			// 
			this->менюToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->текстовыйРедакторToolStripMenuItem });
			this->менюToolStripMenuItem->Name = L"менюToolStripMenuItem";
			this->менюToolStripMenuItem->Size = System::Drawing::Size(65, 24);
			this->менюToolStripMenuItem->Text = L"Меню";
			// 
			// текстовыйРедакторToolStripMenuItem
			// 
			this->текстовыйРедакторToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->загрузитьИзображениеToolStripMenuItem });
			this->текстовыйРедакторToolStripMenuItem->Name = L"текстовыйРедакторToolStripMenuItem";
			this->текстовыйРедакторToolStripMenuItem->Size = System::Drawing::Size(150, 26);
			this->текстовыйРедакторToolStripMenuItem->Text = L"Открыть";
			// 
			// загрузитьИзображениеToolStripMenuItem
			// 
			this->загрузитьИзображениеToolStripMenuItem->Name = L"загрузитьИзображениеToolStripMenuItem";
			this->загрузитьИзображениеToolStripMenuItem->Size = System::Drawing::Size(260, 26);
			this->загрузитьИзображениеToolStripMenuItem->Text = L"Загрузить изображение";
			this->загрузитьИзображениеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::загрузитьИзображениеToolStripMenuItem_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 28);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(711, 537);
			this->tabControl1->TabIndex = 9;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->listBox1);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->groupBox2);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->button3);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(703, 508);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Текстовый редактор";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button7);
			this->tabPage2->Controls->Add(this->button6);
			this->tabPage2->Controls->Add(this->button5);
			this->tabPage2->Controls->Add(this->button4);
			this->tabPage2->Controls->Add(this->pictureBox1);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(703, 508);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Графический редактор";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(8, 118);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(118, 54);
			this->button6->TabIndex = 3;
			this->button6->Text = L" Убрать картинку";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(8, 62);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(118, 50);
			this->button5->TabIndex = 2;
			this->button5->Text = L"Очистить";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(8, 6);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(118, 50);
			this->button4->TabIndex = 1;
			this->button4->Text = L"Нарисовать";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::DimGray;
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Right;
			this->pictureBox1->Location = System::Drawing::Point(132, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(568, 502);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(8, 178);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(118, 56);
			this->button7->TabIndex = 4;
			this->button7->Text = L"Повернуть";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->ClientSize = System::Drawing::Size(711, 565);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->MainMenuStrip = this->menuStrip1;
			this->MinimumSize = System::Drawing::Size(530, 460);
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
		//Устанавливает красный цвет для текста
		if (radioButton1->Checked == true) {
			this->listBox1->ForeColor = System::Drawing::Color::Red;
		}
		//Устанавливает синий цвет для текста
		if (radioButton2->Checked == true) {
			this->listBox1->ForeColor = System::Drawing::Color::Blue;
		}
		//Устанавливает зеленый цвет для текста
		if (radioButton3->Checked == true) {
			this->listBox1->ForeColor = System::Drawing::Color::Green;
		}
		//Устанавливает желтый цвет для текста
		if (radioButton4->Checked == true) {
			this->listBox1->ForeColor = System::Drawing::Color::Yellow;
		}
		//Устанавливает черный цвет для текста
		if (radioButton5->Checked == true) {
			this->listBox1->ForeColor = System::Drawing::Color::Black;
		}
		//Устанавливает атрибут «жирность» для текста
		if (checkBox1->Checked == true) {
			this->listBox1->Font = (gcnew
				System::Drawing::Font(L"Arial", 14, System::Drawing:: FontStyle::Bold, System::Drawing::GraphicsUnit::Point,static_cast<System::Byte>(204)));
		}
		//Устанавливает атрибут «курсив» для текста
		if (checkBox2->Checked == true) {
			this->listBox1->Font = (gcnew	System::Drawing::Font(L"Arial", 14, System::Drawing:: FontStyle::Italic, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
		}
		//Устанавливает атрибут «подчеркнутый» для текста
		if (checkBox3->Checked == true) {
			this->listBox1->Font = (gcnew
				System::Drawing::Font(L"Arial", 14, System::Drawing:: FontStyle::Underline, System::Drawing :: GraphicsUnit::Point,static_cast<System::Byte>(204)));
		}
		//Устанавливает атрибут «зачеркнутый» для текста
		if (checkBox4->Checked == true) {
			this->listBox1->Font = (gcnew
				System::Drawing::Font(L"Arial", 14, System::Drawing:: FontStyle::Strikeout, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
		}
		//Устанавливает атрибуты «жирность», «курсив» для текста
		if ((checkBox1->Checked == true) && (checkBox2->Checked ==
			true)) {
			this->listBox1->Font = (gcnew System::Drawing:: Font(L"Arial", 14, static_cast<System:: Drawing::FontStyle>((System::Drawing::FontStyle::Bold |	System::Drawing::FontStyle::Italic)), 
				System::Drawing:: GraphicsUnit::Point, static_cast<System::Byte>(204)));
		}
		//Устанавливает атрибуты «жирность», «курсив» и «подчеркнутый» для текста
		if ((checkBox1->Checked == true) && ((checkBox2->Checked ==
			true)) && (checkBox3->Checked == true))this->listBox1->Font =
			(gcnew System::Drawing::Font(L"Arial", 14,static_cast<System::Drawing:: FontStyle>(((System::Drawing::FontStyle::Bold | System:: Drawing::FontStyle::Italic) |
				System::Drawing::FontStyle:: Underline)), System::Drawing::GraphicsUnit::Point,	static_cast<System:: Byte>(204)));
		//Устанавливает атрибуты «жирность», «курсив», «подчеркнутый» и «зачеркнутый» 
		
		if ((checkBox1->Checked == true) && (checkBox2->Checked ==true) && (checkBox3->Checked == true) && 
			(checkBox4->Checked ==true))this->listBox1->Font = (gcnew System::Drawing:: Font(L"Arial", 14, static_cast<System::Drawing:: FontStyle>(System::Drawing::FontStyle::Bold | 
				System:: Drawing::FontStyle::Italic | System::Drawing :: FontStyle::Underline | System::Drawing :: FontStyle::Strikeout), 
				System::Drawing::GraphicsUnit::Point,static_cast<System::Byte>(204)));
		//Устанавливает атрибуты «курсив», «подчеркнутый» и «зачеркнутый» для текста
		if ((checkBox2->Checked == true) && (checkBox3->Checked ==true) && (checkBox4->Checked == true))this->listBox1->Font =(gcnew System::Drawing::Font(L"Arial", 14, static_cast<System:: Drawing::FontStyle>(System::Drawing::FontStyle::Italic |
			System::Drawing::FontStyle::Underline | System:: Drawing::FontStyle::Strikeout), System::Drawing:: GraphicsUnit::Point, static_cast<System::Byte>(204)));
		//Устанавливает атрибуты «курсив», «подчеркнутый» для текста
		if ((checkBox2->Checked == true) && (checkBox3->Checked ==	true))this->listBox1->Font = (gcnew System::Drawing:: Font(L"Arial", 14, static_cast<System::Drawing:: FontStyle>(System::Drawing::FontStyle::Italic | 
			System:: Drawing::FontStyle::Underline), System::Drawing:: GraphicsUnit::Point, static_cast<System::Byte>(204)));
		//Устанавливает атрибуты «курсив», «зачеркнутый» для текста
		if ((checkBox2->Checked == true) && (checkBox4->Checked ==true))this->listBox1->Font = (gcnew System::Drawing:: Font(L"Arial", 14, static_cast<System:: Drawing::FontStyle>(System::Drawing::FontStyle::Italic |
			System::Drawing::FontStyle::Strikeout), System::Drawing:: GraphicsUnit::Point, static_cast<System::Byte>(204)));
		//Устанавливает атрибуты «жирность», «подчеркнутый» для текста
		if ((checkBox1->Checked == true) && (checkBox3->Checked ==true))this->listBox1->Font = (gcnew System::Drawing:: Font(L"Arial", 14, static_cast<System::Drawing:: FontStyle>(System::Drawing::FontStyle::Bold | 
			System:: Drawing::FontStyle::Underline), System::Drawing:: GraphicsUnit::Point, static_cast<System::Byte>(204)));
		//Устанавливает атрибуты «подчеркнутый», «зачеркнутый» для текста
		if ((checkBox3->Checked == true) && (checkBox4->Checked ==true))this->listBox1->Font = (gcnew System::Drawing:: Font(L"Arial", 14, static_cast<System::Drawing:: FontStyle>(System::Drawing::FontStyle::Underline |
			System::Drawing::FontStyle::Strikeout), System::Drawing:: GraphicsUnit::Point, static_cast<System::Byte>(204)));
		//Устанавливает атрибуты «жирность», «зачеркнутый» для текста
		if ((checkBox1->Checked == true) && (checkBox4->Checked ==true))this->listBox1->Font = (gcnew System::Drawing:: Font(L"Arial", 14, static_cast<System::Drawing:: FontStyle>(System::Drawing::FontStyle::Bold |
			System::Drawing::FontStyle::Strikeout), System::Drawing:: GraphicsUnit::Point, static_cast<System::Byte>(204)));
		//Устанавливает атрибуты «жирность», «подчеркнутый», «зачеркнутый» для текста
		if ((checkBox1->Checked == true) && (checkBox3->Checked ==true))this->listBox1->Font = (gcnew System::Drawing:: Font(L"Arial", 14, static_cast<System::Drawing:: FontStyle>(System::Drawing::FontStyle::Bold | 
			System:: Drawing::FontStyle::Underline), System::Drawing:: GraphicsUnit::Point, static_cast<System::Byte>(204)));
		//Устанавливает атрибуты «жирность», «курсив», «зачеркнутый» для текста
		if ((checkBox1->Checked == true) && ((checkBox2->Checked ==	true)) && (checkBox4->Checked == true))this->listBox1->Font =(gcnew System::Drawing::Font(L"Arial", 14, static_cast<System:: Drawing::FontStyle>((System::Drawing::FontStyle::Bold
			| System::Drawing::FontStyle::Italic | System::Drawing::FontStyle::Strikeout)), System::Drawing::GraphicsUnit::Point,static_cast<System::Byte>(204)));
	}
	else
	{
		MessageBox::Show("Заполните пожалуйста данные", "Ошибка ввода данных",
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
	g->DrawEllipse(bluePen, 10, 20, 30, 40);

	// Fill polygon 
	g->FillClosedCurve(hBrush, curvePoints);
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	pictureBox1->Invalidate();

}
private: System::Void загрузитьИзображениеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

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
		MessageBox::Show("Откройте изображение", "Ошибка ввода данных",
			MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}
};
}
