#include "pch.h"
#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
int __clrcall main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	OPO2SUMproject::MyForm monFormulaire;
	Application::Run(% monFormulaire);
}