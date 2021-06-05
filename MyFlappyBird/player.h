#pragma once

#include "config.h"
#include "gameobject.h"

class Player : public GameObject

{
	float pos_x = 120.0f;
	float pos_y = CANVAS_HEIGHT / 2.0f;
	float gravity = 0.5f;
	float lift = -1.3f;
	float speed = 0.0f;

public:
	Player(const class Game& mygame);
	void update() override;
	void draw() override;
	void init() override;
	float getPosX() { return pos_x; }
	float getPosY() { return pos_y; }
	void liftUp() { speed += lift; }
};