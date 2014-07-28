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
/*
bool colision(){
	
	int i1 = _p->position.x/40;
	int i1 = _p->position.y/40;
	int i2 = (_p->position.x + _p->position.myWidth -1)/40;
	int i2 = (_p->position.y + _p->position.myHeight -1)/40;
	
	int i,j;
   	for(i=i1;i<=i2;i++)
   	{
     		for(j=j1;j<=j2;j++)
     		{
        		 if (TileIsDure(i,j))
             			return true;
     		}
	}
	 return false;
}

bool colision(int x,int y){
	
	int i1 = x/40;
	int i1 = y/40;
	int i2 = (x + _p->position.myWidth -1)/40;
	int i2 = (y + _p->position.myHeight -1)/40;
	
	int i,j;
   	for(i=i1;i<=i2;i++)
   	{
     		for(j=j1;j<=j2;j++)
     		{
        		 if (TileIsDure(i,j))
             			return true;
     		}
	}
	 return false;
} */



