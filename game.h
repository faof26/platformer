#pragma once

#include "player.h"
#include "world.h"

class game
{
public:
	game(void);
	game(player *_p, world *_w);
	~game(void);

	player *pPlayer;
	world *pWorld;
};

