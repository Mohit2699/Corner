int timeinair=2;
bool ground=false;
Vector2 center={200,300};
int temp,jumping;

int level1(int framcounter)
{	

    DrawText("Framecounter",100,100,10,BLACK);
	DrawRectangle(0,400,800,200,BLACK);
	DrawCircle(center.x,center.y,15.0,BLACK);
	if(CheckCollisionCircleRec(center, 15.0, (Rectangle){0,400,800,200}))
	{
		ground=true;
		temp=1;
		jumping=center.y;
	}
	if(ground==false && temp==0)
	{
		center.y+=5;
	}
	if(temp==1){
		center.y-=10;
		ground=false;
		if(jumping-center.y==150)
		{
			temp=0;
		}
	}

	if(IsKeyDown(KEY_D)) center.x+=10;
	if(IsKeyDown(KEY_A)) center.x-=10;
	return 0;
}