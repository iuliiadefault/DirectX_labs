#pragma once
#include <Windows.h>
#include <d3d11.h>
//#include "Keyboard.h"
#include "Graphics.h"

class Window
{
public:
	Window(int x, int y, const wchar_t* title);
	~Window();
	int width;
	int height;
	HWND hWnd;
private:
	static LRESULT CALLBACK HandleMsgSetup(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam) noexcept;
	static LRESULT CALLBACK HandleMsgThunk(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam) noexcept;
	LRESULT HandleMsg(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam) noexcept;
private:
	HINSTANCE hInst;
};

