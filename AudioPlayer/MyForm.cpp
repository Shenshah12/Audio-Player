#include "MyForm.h"
#include<array>
#include <algorithm>   
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(cli::array<System::String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	AUdioPlayer::MyForm form;
	Application::Run(% form);
}
