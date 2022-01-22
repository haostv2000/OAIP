#pragma once

namespace MyForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ ôàéëToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïğàâêàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âèäToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñòèëüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ò¸ìíûéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñâåòëûéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ äîáàâèòüToolStripMenuItem;
	private: System::Windows::Forms::Panel^ panel1;






	private: System::Windows::Forms::ToolStripMenuItem^ ğàçìåğÊàğòèíêèToolStripMenuItem;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ïğèâåòToolStripMenuItem;
	private: System::ComponentModel::IContainer^ components;




	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ôàéëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïğàâêàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->äîáàâèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âèäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñòèëüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ò¸ìíûéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñâåòëûéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ğàçìåğÊàğòèíêèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->ïğèâåòToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->contextMenuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ôàéëToolStripMenuItem,
					this->ïğàâêàToolStripMenuItem, this->âèäToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->RenderMode = System::Windows::Forms::ToolStripRenderMode::System;
			this->menuStrip1->ShowItemToolTips = true;
			this->menuStrip1->Size = System::Drawing::Size(807, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ôàéëToolStripMenuItem
			// 
			this->ôàéëToolStripMenuItem->Name = L"ôàéëToolStripMenuItem";
			this->ôàéëToolStripMenuItem->Size = System::Drawing::Size(59, 24);
			this->ôàéëToolStripMenuItem->Text = L"Ôàéë";
			// 
			// ïğàâêàToolStripMenuItem
			// 
			this->ïğàâêàToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->äîáàâèòüToolStripMenuItem });
			this->ïğàâêàToolStripMenuItem->Name = L"ïğàâêàToolStripMenuItem";
			this->ïğàâêàToolStripMenuItem->Size = System::Drawing::Size(74, 24);
			this->ïğàâêàToolStripMenuItem->Text = L"Ïğàâêà";
			// 
			// äîáàâèòüToolStripMenuItem
			// 
			this->äîáàâèòüToolStripMenuItem->Name = L"äîáàâèòüToolStripMenuItem";
			this->äîáàâèòüToolStripMenuItem->Size = System::Drawing::Size(159, 26);
			this->äîáàâèòüToolStripMenuItem->Text = L"Äîáàâèòü";
			// 
			// âèäToolStripMenuItem
			// 
			this->âèäToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ñòèëüToolStripMenuItem,
					this->ğàçìåğÊàğòèíêèToolStripMenuItem
			});
			this->âèäToolStripMenuItem->Name = L"âèäToolStripMenuItem";
			this->âèäToolStripMenuItem->Size = System::Drawing::Size(49, 24);
			this->âèäToolStripMenuItem->Text = L"Âèä";
			// 
			// ñòèëüToolStripMenuItem
			// 
			this->ñòèëüToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ò¸ìíûéToolStripMenuItem,
					this->ñâåòëûéToolStripMenuItem
			});
			this->ñòèëüToolStripMenuItem->Name = L"ñòèëüToolStripMenuItem";
			this->ñòèëüToolStripMenuItem->Size = System::Drawing::Size(211, 26);
			this->ñòèëüToolStripMenuItem->Text = L"Ñòèëü";
			// 
			// ò¸ìíûéToolStripMenuItem
			// 
			this->ò¸ìíûéToolStripMenuItem->Name = L"ò¸ìíûéToolStripMenuItem";
			this->ò¸ìíûéToolStripMenuItem->Size = System::Drawing::Size(151, 26);
			this->ò¸ìíûéToolStripMenuItem->Text = L"Ò¸ìíûé";
			this->ò¸ìíûéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ò¸ìíûéToolStripMenuItem_Click);
			// 
			// ñâåòëûéToolStripMenuItem
			// 
			this->ñâåòëûéToolStripMenuItem->Name = L"ñâåòëûéToolStripMenuItem";
			this->ñâåòëûéToolStripMenuItem->Size = System::Drawing::Size(151, 26);
			this->ñâåòëûéToolStripMenuItem->Text = L"Ñâåòëûé";
			this->ñâåòëûéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ñâåòëûéToolStripMenuItem_Click);
			// 
			// ğàçìåğÊàğòèíêèToolStripMenuItem
			// 
			this->ğàçìåğÊàğòèíêèToolStripMenuItem->Name = L"ğàçìåğÊàğòèíêèToolStripMenuItem";
			this->ğàçìåğÊàğòèíêèToolStripMenuItem->Size = System::Drawing::Size(211, 26);
			this->ğàçìåğÊàğòèíêèToolStripMenuItem->Text = L"Ğàçìåğ êàğòèíêè";
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->tableLayoutPanel1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 28);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(807, 370);
			this->panel1->TabIndex = 1;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				24.5F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				75.5F)));
			this->tableLayoutPanel1->Controls->Add(this->panel2, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->panel3, 1, 0);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(805, 368);
			this->tableLayoutPanel1->TabIndex = 5;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::GrayText;
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->button4);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(3, 3);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(191, 362);
			this->panel2->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(24, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(127, 36);
			this->button1->TabIndex = 0;
			this->button1->Text = L"+";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(24, 129);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(127, 36);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Ñâåğíóòü";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(24, 45);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(127, 36);
			this->button2->TabIndex = 1;
			this->button2->Text = L"-";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(24, 87);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(127, 36);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Ğàñòÿíóòü";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->panel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel3->Controls->Add(this->pictureBox1);
			this->panel3->Location = System::Drawing::Point(200, 3);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(602, 362);
			this->panel3->TabIndex = 1;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->ContextMenuStrip = this->contextMenuStrip1;
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->ImageLocation = L"D:\\OAIP\\ContextMenu\\ContextMenu\\kopa.png";
			this->pictureBox1->Location = System::Drawing::Point(229, 87);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(167, 127);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseDown);
			this->pictureBox1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseMove);
			this->pictureBox1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseUp);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->ïğèâåòToolStripMenuItem });
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(130, 28);
			// 
			// ïğèâåòToolStripMenuItem
			// 
			this->ïğèâåòToolStripMenuItem->Name = L"ïğèâåòToolStripMenuItem";
			this->ïğèâåòToolStripMenuItem->Size = System::Drawing::Size(129, 24);
			this->ïğèâåòToolStripMenuItem->Text = L"Ïğèâåò";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(807, 398);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximumSize = System::Drawing::Size(825, 445);
			this->MinimumSize = System::Drawing::Size(670, 350);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->contextMenuStrip1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Int32 sx=0;
		Int32 sy=0;
		Int32 tm = 1;
		bool dragging = false;
		Int32 currentX, currentY;


private: System::Void ò¸ìíûéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	panel1->BackColor = System::Drawing::SystemColors::GrayText;
	menuStrip1->BackColor = System::Drawing::SystemColors::GrayText;
}
private: System::Void ñâåòëûéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		panel1->BackColor = System::Drawing::SystemColors::Control;
		menuStrip1->BackColor = System::Drawing::SystemColors::Control;
}

private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	sx += 30;
	sy += 30;
	pictureBox1->Size = System::Drawing::Size(167+sx, 127+sy);
	//pictureBox1->ImageLocation = L"D:\\OAIP\\ContextMenu\\ContextMenu\\kopa.png";

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	sx -= 30;
	sy -= 30;
	pictureBox1->Size = System::Drawing::Size(167 + sx, 127 + sy);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	pictureBox1->Dock = System::Windows::Forms::DockStyle::None;
}
//private: System::Void ğàçìåğÊàğòèíêèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
//	++tm;
//	if (tm % 2 == 0) panel1->Enabled = true;
//	else panel1->Enabled = false;
//}
//private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
//	panel1->Enabled = false;
//}

private: System::Void pictureBox1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	dragging = true;
	currentX = e->X;
	currentY = e->Y;
}
private: System::Void pictureBox1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if(dragging)
	{
		pictureBox1->Top = pictureBox1->Top + (e->Y - currentY);
		pictureBox1->Left = pictureBox1->Left + (e->X - currentX);
	}
}
private: System::Void pictureBox1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	dragging = false;
}
};
}
