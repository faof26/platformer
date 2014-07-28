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
	/*
	bool testx;
	bool testy;
	testx=colision(_p->position.x+_p->vitesse.x,_p->position.y);
	testy=colision(_p->position.x,_p->position.y+_p->vitesse.y);
	if(testx==true)
	{
		if(testy==true)
		{
			_p->position.x=_p->position.x+_p->vitesse.x;
			_p->position.y=_p->position.y+_p->vitesse.y;
		}
		else
		{
			_p->position.x=_p->position.x+_p->vitesse.x;
			_p->position.y=_p->position.y+(40 - ((_p->position.y + _p->myHeight)%40));
			if(_p->isInAir==true && _p.vitesse.y<0)
			{
				_p->isInAir=false;
				_p->vitesse.y=0;
			}
			else
			{
				_p->vitesse.y=-1;	
			}
			
			
		}
	}
	else
	{
		if(testy==true)
		{
			_p->position.y=_p->position.y+_p->vitesse.y;
			_p->position.x=_p->position.x+(40 - ((_p->position.x + _p->myWidth)%40));
			_p->vitesse.x=0;
		}
		else
		{
			_p->position.y=_p->position.y+(40 - ((_p->position.y + _p->myHeight)%40));
			if(_p->isInAir==true && _p.vitesse.y<0)
			{
				_p->isInAir=false;
				_p->vitesse.y=0;
			}
			else
			{
				_p->vitesse.y=-1;	
			}
			_p->position.x=_p->position.x+(40 - ((_p->position.x + _p->myWidth)%40));
			_p->vitesse.x=0;
		}
	}


	if(_p->isInAir==true)
	{
			_p->vitesse.y--;
	}
		
*/
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



