#include "raylib.h"
#include "level1.h"
int main()
{	int a=0;
	int screenWidth=800;
	int screenHeight=500;
	InitWindow(screenWidth,screenHeight,"Corner");
	SetTargetFPS(60);
	int framecounter;
	while(!WindowShouldClose())
	{	ClearBackground(WHITE);
		BeginDrawing();
             framecounter++;
			 if(a==0 || a==2){
			 	if(a==2){
			 		framecounter=0;
			 	}
			 	a=level1(framecounter);      //this will load the level 1 
			 }
			 HideCursor();
		EndDrawing();
	}
	CloseWindow();
	return 0;
}
