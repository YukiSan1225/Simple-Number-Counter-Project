#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

void main() {
	//Enabling the application and running the application
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Project1::MyForm form;
	Application::Run(%form);

	system("pause");
}