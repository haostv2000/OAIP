#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	MyForm::MyForm form;
	Application::Run(% form);
}

System::Void MyForm::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{ 
	label1->Text = "Hello User";
	//Comment from NikDorosh
}
