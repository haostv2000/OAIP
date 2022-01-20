#pragma once
#include"RGBrandom.h"
namespace MyForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ToolTip^ toolTip1;
	private: System::Windows::Forms::Timer^ timer1;
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
			this->components = (gcnew System::ComponentModel::Container());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->button1, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->label1, 0, 0);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(630, 480);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->tableLayoutPanel1->SetColumnSpan(this->button1, 2);
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(80, 320);
			this->button1->Margin = System::Windows::Forms::Padding(80);
			this->button1->MinimumSize = System::Drawing::Size(470, 54);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(470, 80);
			this->button1->TabIndex = 0;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			this->button1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button1_MouseDown);
			this->button1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button1_MouseMove);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->tableLayoutPanel1->SetColumnSpan(this->label1, 2);
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 45, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(624, 240);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Your Text";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->MouseLeave += gcnew System::EventHandler(this, &MyForm::label1_MouseLeave);
			this->label1->MouseHover += gcnew System::EventHandler(this, &MyForm::label1_MouseHover);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(630, 480);
			this->Controls->Add(this->tableLayoutPanel1);
			this->MinimumSize = System::Drawing::Size(648, 475);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Цвета";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		Int32 timeCounter;
private: System::Void button1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	RandomRGB(rgb);
	button1->BackColor = System::Drawing::Color::FromArgb(rgb[0], rgb[1], rgb[2]);
}
private: System::Void label1_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	label1->Text = "COLOR RUSH";
	toolTip1->SetToolTip(this->label1, "Ваше текст изменился");
}
private: System::Void label1_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	label1->Text = "Ваш текст";
}
private: System::Void button1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	String^ eventString = nullptr;
	switch (e->Button) {
	case::System::Windows::Forms::MouseButtons::Right:
		eventString = "R";
		break;
	default:
		break;
	}
	if (eventString != nullptr) {
		MessageBox::Show("Ваше сообщение");
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	tableLayoutPanel1->BackColor = System::Drawing::SystemColors::ActiveCaption;
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	timeCounter = 0;
	timer1->Interval = 500;
	timer1->Enabled = true;
}

	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		++timeCounter;
		if (timeCounter == 5) label1->Text = "Таймер остановился";
	}
};
}
