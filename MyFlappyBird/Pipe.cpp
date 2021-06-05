#include "Pipe.h"
#include "util.h"


void Pipe::update()
{
	pos_x -= speed;

	if (pos_x < -pipe_width)
	{
		init();
	}
}

void Pipe::draw()
{
	graphics::Brush br;

	br.texture = std::string(ASSET_PATH) + "pipe1.png";
	br.outline_opacity = 0.0f;
	graphics::drawRect(pos_x + pipe_width / 2.0f, pos_y, pipe_width, 400.0f, br);


	br.texture = std::string(ASSET_PATH) + "pipe2.png";
	br.outline_opacity = 0.0f;
	graphics::drawRect(pos_x + pipe_width / 2.0f, pos_y + 600.0f, pipe_width, 400.0f, br);
}

void Pipe::init()
{
	pos_x = CANVAS_WIDTH;
	pos_y = -100.0f + 200.0f * rand0to1();
	top = 200.0f + pos_y;
	bottom = top + 200.0f;
	pipe_width = CANVAS_HEIGHT / 4.0f;
	speed = init_speed;
}

Pipe::Pipe(const Game& mygame)
	: GameObject(mygame)
{
	init();
}

Pipe::~Pipe()
{
}
