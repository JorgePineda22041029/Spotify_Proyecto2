#include "pch.h"
#include "Login.h"
// #include "Form1.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    //WinformCDemo is your project name
    Spotify_Project2::Login login;
    Application::Run(% login);
}