#include "avtoriz.h"
#include <Windows.h>

using namespace kurs; // Название проекта
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew avtoriz);
	return 0;
}
