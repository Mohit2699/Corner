int timeinair=2;
bool ground=false;
Vector2 center={200,300};
int temp,jumping;
void checkforcollision();
   

int level1(Camera2D *camera)
{	
	
	BeginMode2D(*camera);
    DrawText("Framecounter",100,100,10,BLACK);
	DrawRectangle(0,400,800,200,BLACK);
	DrawRectangle(300,300,100,10,BLACK);
	DrawRectangle(400,200,100,10,BLACK);
	DrawRectangle(500,100,100,10,BLACK);
	DrawCircle(center.x,center.y,15.0,BLACK);
	if(CheckCollisionCircleRec(center, 15.0, (Rectangle){0,400,800,200}))
	{
		ground=true;
		temp=1;
		jumping=center.y;
	}
	checkforcollision(300,300,100);
	checkforcollision(400,200,100);
	checkforcollision(500,100,100);
	if(ground==false && temp==0)
	{
		center.y+=5;
	}
	if(temp==1){
		center.y-=8;
		ground=false;
		if(jumping-center.y>150)
		{
			temp=0;
		}
	}

	if(IsKeyDown(KEY_D)) center.x+=10;
	if(IsKeyDown(KEY_A)) center.x-=10;
	camera->target=(Vector2){center.x+2, center.y+2};
	EndMode2D();
	return 0;
}


//functions 
void checkforcollision(int pos,int pos1,int width)
{
	if(CheckCollisionCircleRec(center, 15.0, (Rectangle){pos,pos1,width,10,BLACK}))
	{
		/*ground=true;
		temp=1;
		jumping=center.y;*/
		temp=0;
	}
	if(CheckCollisionCircleRec(center, 15.0, (Rectangle){pos,pos1,width,0,BLACK}))
	{
		ground=true;
		temp=1;
		jumping=center.y;
	}
}