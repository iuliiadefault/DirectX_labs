#include "GameObject.h"

GameObject::GameObject(float n_x, float n_y, float h, float w, D3DXCOLOR c) : pos(n_x, n_y, 0.0f), size(h, w, 0.0f), color(c) {

}

void GameObject::calculate_vert()
{
	vertices[0] = { pos.x, pos.y, pos.z, color };
	vertices[1] = { pos.x, pos.y + size.height, pos.z, color };
	vertices[2] = { pos.x + size.width, pos.y + size.height, pos.z, color };
	vertices[3] = { pos.x + size.width, pos.y + size.height, pos.z, color };
}

VERTEX* GameObject::get_vertices()
{
	return vertices;
}
