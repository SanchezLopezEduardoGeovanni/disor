#include <windows.h>  
#include <tchar.h>
#include "Interfaz.h"

using namespace std;
using namespace System;
using namespace System ::Windows::Forms;
[STAThread]

int main(array<String^>^ arg){
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	
	CifradoCesaYTransposicionInversa::Interfaz interfaz;	
	Application::Run(%interfaz);	
}

int CALLBACK WinMain(  
  _In_ HINSTANCE hInstance,  
  _In_ HINSTANCE hPrevInstance,  
  _In_ LPSTR     lpCmdLine,  
  _In_ int       nCmdShow
  );

LRESULT CALLBACK WndProc(  
  _In_ HWND   hwnd,  
  _In_ UINT   uMsg,  
  _In_ WPARAM wParam,  
  _In_ LPARAM lParam  
);  
