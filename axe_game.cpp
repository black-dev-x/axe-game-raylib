#include "raylib.h"

int main()
{
  // window dimensions
  int width = 350;
  int height = 200;

  // c
  int circleX = 0;
  int circleY = 0;
  int speed = 1;

  InitWindow(width, height, "oh well");
  
  SetTargetFPS(60);
  while(!WindowShouldClose()){
    BeginDrawing();
    ClearBackground(WHITE);
    if(IsKeyDown(KEY_D))
    {
      circleX += speed;
    } 
    else if(IsKeyDown(KEY_A))
    {
      circleX -= speed;
    }
    if(IsKeyDown(KEY_W))
    {
      circleY -= speed;
    }
    else if(IsKeyDown(KEY_S))
    {
      circleY += speed;
    }
    DrawCircle(circleX, circleY, 50, BLUE);
    EndDrawing();
  }
}
