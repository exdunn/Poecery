#include "ShoppingListForm.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Poecery::ShoppingListForm shoppingListForm;
    Application::Run(% shoppingListForm);

}