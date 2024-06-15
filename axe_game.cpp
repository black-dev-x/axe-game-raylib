#include "raylib.h"

int main()
{
  // window dimensions
  int width = 350;
  int height = 200;

  // c
  int circleX = 100;
  int circleY = 100;
  int circleRadius = 50;
  int speed = 1;

  InitWindow(width, height, "oh well");
  
  SetTargetFPS(60);
  while(!WindowShouldClose()){
    BeginDrawing();
    ClearBackground(WHITE);
    if(IsKeyDown(KEY_D) && circleX < width - circleRadius)
    {
      circleX += speed;
    } 
    else if(IsKeyDown(KEY_A) && circleX > circleRadius)
    {
      circleX -= speed;
    }
    if(IsKeyDown(KEY_W) && circleY > circleRadius)
    {
      circleY -= speed;
    }
    else if(IsKeyDown(KEY_S) && circleY < height - circleRadius)
    {
      circleY += speed;
    }
    DrawCircle(circleX, circleY, circleRadius, BLUE);
    EndDrawing();
  }
}
