#include "game.h"


game::game(void)
{
}

game::~game(void)
{
}

game::game(player *_p, world *_w){
	pPlayer=_p;
	pWorld=_w;
}

void game::update(){
	//calcul de la nouvelle position du joueur
	//...

	//collisions
	//...


}