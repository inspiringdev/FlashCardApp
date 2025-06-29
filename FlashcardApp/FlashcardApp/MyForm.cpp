#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(array<System::String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    // Create an instance of MyForm
    FlashcardApp::MyForm form;

    // Run the application
    Application::Run(% form);

    return 0;
}

