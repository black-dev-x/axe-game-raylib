#include "raylib.h"

int main()
{
  // window dimensions
  int width = 800;
  int height = 450;

  // circle
  int circleX = 200;
  int circleY = 200;
  int circleRadius = 25;
  int circleSpeed = 1;

  // rectangle
  int rectangleWidth = 50;
  int rectangleHeight = 50;
  int rectangleY = 0;
  int rectangleX = 300;
  int rectangleSpeed = 10;

  InitWindow(width, height, "Axe Game");
  
  SetTargetFPS(60);
  while(!WindowShouldClose()){
    BeginDrawing();
    ClearBackground(WHITE);
    DrawCircle(circleX, circleY, circleRadius, BLUE);
    DrawRectangle(rectangleX, rectangleY, rectangleWidth, rectangleHeight, RED);

    rectangleY += rectangleSpeed;
    if(rectangleY > height - rectangleHeight || rectangleY < 0)
    {
      rectangleSpeed *= -1;
    }
    if(IsKeyDown(KEY_D) && circleX < width - circleRadius)
    {
      circleX += circleSpeed;
    } 
    else if(IsKeyDown(KEY_A) && circleX > circleRadius)
    {
      circleX -= circleSpeed;
    }
    if(IsKeyDown(KEY_W) && circleY > circleRadius)
    {
      circleY -= circleSpeed;
    }
    else if(IsKeyDown(KEY_S) && circleY < height - circleRadius)
    {
      circleY += circleSpeed;
    }
    
    EndDrawing();
  }
}
