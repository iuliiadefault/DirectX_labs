#include "App.h"
#include "GameObject.h"


App::App() : wnd(800, 600, L"Pong"){}

int App::Go() {
	GameObject(0.0f, 0.0f, 0.5f, 0.5f, D3DXCOLOR(0.2f, 0.2f, 0.2f, 1.0f));
	while (true)
	{
		//DoFrame();
	}
}