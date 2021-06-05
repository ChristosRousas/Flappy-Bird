#include "game.h"
#include "player.h"

Player::Player(const Game& mygame)
	: GameObject(mygame)
{
}

void Player::update()
{
	if (graphics::getKeyState(graphics::SCANCODE_UP))
	{
		liftUp();
	}

	speed += gravity;
	speed *= 0.9f;
	pos_y += speed;

	if (pos_y > CANVAS_HEIGHT) {
		pos_y = CANVAS_HEIGHT;
		speed = 0.0f;
	}

	if (pos_y <  0.0f) {
		pos_y = 0.0f;
		speed = 0.0f;
	}
}

void Player::draw()
{
	graphics::Brush br;

	if (speed >= 0)
		br.texture = std::string(ASSET_PATH) + "birdup.png";
	else
		br.texture = std::string(ASSET_PATH) + "bird.png";

	br.outline_opacity = 0.0f;

	graphics::drawRect(pos_x, pos_y, 50.0f, 50.0f, br);
	graphics::resetPose();
}

void Player::init()
{
}
