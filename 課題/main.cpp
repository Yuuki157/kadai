#include<DxLib.h>

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	SetMainWindowText("2016024_’†‘º—I‹P");
	SetGraphMode(640, 480, 32);
	ChangeWindowMode(true);
	if (DxLib_Init() == -1)
	{
		return false;
	}

	SetDrawScreen(DX_SCREEN_BACK);

	while (ProcessMessage() != -1)
	{
		ClearDrawScreen();

		ScreenFlip();
	}

	DxLib_End();

	return 0;
}
