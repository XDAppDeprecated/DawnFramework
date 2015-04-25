#include "stdafx.h"

#include "DApp.h"
#include "DEngine.h"
#include "DWindow.h"
#include "DWindowManager.h"
int main()
{
	DApp::Engine = new DEngine();
	DApp::Engine->Initialize();
	DWindow *Window = DApp::Engine->WindowManager->NewWindow(800, 600, "Dawn Framework Sample Window");
	DApp::Engine->WindowManager->MakeCurrent(Window);
	Window->Initialize();
	Window->Show();
	DApp::Engine->Loop();
	return 0;
}