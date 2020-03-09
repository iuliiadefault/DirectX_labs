#pragma once
#include <d3d11.h>
#include <d3dx11.h>
#include <d3dx10.h>

// include the Direct3D Library file
#pragma comment (lib, "d3d11.lib")
#pragma comment (lib, "d3dx11.lib")
#pragma comment (lib, "d3dx10.lib")

class Graphics {
public:
	Graphics(HWND hWnd_src);
	~Graphics();
private:
	void InitPipeline(void);    // loads and prepares the shaders
private:
	IDXGISwapChain* swapchain;             // the pointer to the swap chain interface
	ID3D11Device* dev;                     // the pointer to our Direct3D device interface
	ID3D11DeviceContext* devcon;           // the pointer to our Direct3D device context
	ID3D11RenderTargetView* backbuffer;    // the pointer to our back buffer
	ID3D11InputLayout* pLayout;            // the pointer to the input layout
	ID3D11VertexShader* pVS;               // the pointer to the vertex shader
	ID3D11PixelShader* pPS;                // the pointer to the pixel shader
	ID3D11Buffer* pVBuffer;                // the pointer to the vertex buffer
	ID3D11Buffer* pIBuffer;                // the pointer to the index buffer
	HWND hWnd;
};
