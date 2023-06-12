#include "AppForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) //< ^>^ - автоматическая очистка памяти
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	ExamTask::AppForm form;
	Application::Run(% form); //если в классе объекта стоит ключеваое слово ref, то нужно использовать знак %

}

