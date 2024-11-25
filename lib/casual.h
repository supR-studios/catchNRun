
#include "imports.h"

void casual(){
			//setup
	SetTargetFPS(60);
    srand(time(NULL)); 
    bool chase=true;
	entity player,crunch,cop,tp;
    double sizeX=800,sizeY=600;
    InitWindow(800, 450, "first game");
	player.x=100;
	player.y=100;
	player.size=10;
	player.speed=5;
	crunch.x=300;
	crunch.y=200;
	int banana;


    while ((!WindowShouldClose()))
{
	if(banana>0)banana--;
	if((crunch.x>player.x-player.size)&&(crunch.x<player.x+player.size)){
		if((crunch.y>player.y-player.size)&&(crunch.y<player.y+player.size)){
			player.size+=5;
			crunch.x=GetRandomValue(20,800);
			crunch.y=GetRandomValue(20,450);
			banana=60;
	}
	}
	
	if((cop.x>player.x-player.size)&&(cop.x<player.x+player.size)){
		if((cop.y>player.y-player.size)&&(cop.y<player.y+player.size)){
			player.size-=15;
			player.x=GetRandomValue(20,800);
			player.y=GetRandomValue(20,450);
			banana=60;
	}
	}

    if (IsKeyDown(KEY_RIGHT)&&player.x<800) player.x+=player.speed;
    if (IsKeyDown(KEY_LEFT)&&player.x>0) player.x-=player.speed;
    if (IsKeyDown(KEY_UP)&&player.y>0) player.y-=player.speed;
    if (IsKeyDown(KEY_DOWN)&&player.y<450) player.y+=player.speed;
	if(IsKeyPressed(KEY_SPACE)){
		tp.x=player.x;
		tp.y=player.y;
	}
	if(IsKeyPressed(KEY_ENTER)){
		player.x=tp.x;
		player.y=tp.y;
	}
	moveTorwards(&cop,&player);
    BeginDrawing();
    ClearBackground(GRAY);
	DrawFPS(20,20);
	DrawCircle(player.x,player.y,player.size,BLACK);
	DrawCircle(crunch.x,crunch.y,5,YELLOW);
	DrawCircle(cop.x,cop.y,10,WHITE);
	DrawCircle(tp.x,tp.y,5,BLUE);
	if(banana)DrawText("banana",500,20,30,YELLOW);
	if(player.size>1000) DrawText("you win",100,100,100,WHITE);
	if(player.size<=0) DrawText("you loose",100,100,100,WHITE);
    EndDrawing();
	if(player.size>1500)exit(0);
   }
    CloseWindow();
}

