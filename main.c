#include "raylib.h"
#include "level1.h"
int main()
{	int a=0;
	int screenWidth=800;
	int screenHeight=500;
	InitWindow(screenWidth,screenHeight,"Corner");
	SetTargetFPS(60);
	int framecounter;
		 Camera2D camera;
    
    camera.target = (Vector2){ center.x + 20, center.y + 20 };
    camera.offset = (Vector2){ 0, 0 };
    camera.rotation = 0.0f;
    camera.zoom = 1.0f;
	while(!WindowShouldClose())
	{	ClearBackground(WHITE);
		BeginDrawing();
		

             framecounter++;
			 if(a==0 ){
			 	a=level1(&camera);      //this will load the level 1 
			 }
			 HideCursor();.
			 EndMode2D();
		EndDrawing();
	}
	CloseWindow();
	return 0;
}
