#pragma once

#include "gameobject.h"
#include "graphics.h"
#include "config.h"

class Pipe : public GameObject
{
	float pos_x;
	float pos_y;
	float top;
	float bottom;
	float pipe_width;
	float speed;
	float init_speed = 1.8f;

public:
	void update() override;
	void draw() override;
	void init() override;
	Pipe(const class Game& mygame);
	~Pipe();

	float getPosX() { return pos_x; }
	float getPosY() { return pos_y; }
	float getTop() { return top; }
	float getBottom() { return bottom; }
	float getWidth() { return pipe_width; }
	void speedup(float s) { init_speed += s; }
};