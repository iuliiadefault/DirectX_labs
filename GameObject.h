#pragma once
#include <d3d11.h>
#include <d3dx11.h>
#include <d3dx10.h>

struct Position {
	Position(float n_x, float n_y, float n_z) : x(n_x), y(n_y), z(n_z) {};
	float x, y, z;
};

struct Dimensions {
	Dimensions(float h, float w, float l) : width(w), height(h), length(l) {};
	float width, height, length;
};

// a struct to define a single vertex
struct VERTEX {
	FLOAT X, Y, Z;
	D3DXCOLOR Color;
};

class GameObject {
public:
	GameObject(float n_x, float n_y, float h, float w, D3DXCOLOR c);
	void calculate_vert();
	VERTEX* get_vertices();
	Position pos;
	Dimensions size;
	D3DXCOLOR color;
	VERTEX vertices[4];
};
