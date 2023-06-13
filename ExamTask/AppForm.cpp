#include "AppForm.h"
#include <string>

using namespace System;
using namespace System::Windows::Forms;

void ExamTask::AppForm::MarshalString(String^ s, std::string& os)
{
	using namespace Runtime::InteropServices;
	const char* chars = (const char*)(Marshal::StringToHGlobalAnsi(s).ToPointer());
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));
}

[STAThreadAttribute]
int main(array<String^>^ args) //< ^>^ - автоматическая очистка памяти
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	ExamTask::AppForm form;
	Application::Run(% form); //если в классе объекта стоит ключеваое слово ref, то нужно использовать знак %
}

