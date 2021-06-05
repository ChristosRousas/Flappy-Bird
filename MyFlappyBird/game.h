#pragma once

#include "player.h"
#include "Pipe.h"

class Game
{
	typedef enum {START,PLAY,END} status_g;
	Player* player = nullptr;
	Pipe* pipe = nullptr;
	void spawnPipe();
	bool withinX;
	bool withinY;
	bool withinX_old;
	bool collision;
	int scoreCounter = 0;
	int highScore = 0;
	status_g status;

	void updateStart();
	void updatePlay();
	void updateEnd();

	void drawStart();
	void drawPlay();
	void drawEnd();


public:
	void update();
	void draw();
	void init();
	Game();
	~Game();
};