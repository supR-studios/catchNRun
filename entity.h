#include "basicinfo.h"


struct entity{
	double x,y,life,size,speed;
};

typedef struct entity entity;

void moveTorwards(struct entity *from,struct entity *to){
	if(from->x<to->x)from->x++;
	if(from->x>to->x)from->x--;
	if(from->y<to->y)from->y++;
	if(from->y>to->y)from->y--;
}
