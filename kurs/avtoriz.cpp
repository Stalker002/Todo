#include "avtoriz.h"
#include <Windows.h>

using namespace kurs; // �������� �������
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew avtoriz);
	return 0;
}
