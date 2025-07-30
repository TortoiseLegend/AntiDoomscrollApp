#include <raylib.h>
#define RAYGUI_IMPLEMENTATION
#include <raygui.h>

#include <iostream>
#include "app.hpp"

int main(){
  int font_size = 25;
  int font_spacing = 1;
  const int screen_width = 800;
  const int screen_height = 600;
  const char *window_title = "Anti-Doomscroll Notification App";
  const char *label_title = "Don't Doomscroll Nerd";
  

  InitWindow(screen_width, screen_height, window_title);
  SetTargetFPS(60);

  // Load the 'Arial' font
  Font font = LoadFontEx("C:\\Windows\\Fonts\\arial.ttf", font_size, 0, 0);
  GuiSetFont(font);
  GuiSetStyle(GuiControl::DEFAULT, GuiDefaultProperty::TEXT_SIZE, font_size);
  GuiSetStyle(GuiControl::DEFAULT, GuiDefaultProperty::TEXT_SPACING, font_spacing);

  //Initialize Centered Text Class
  CenteredLabel centered_title(label_title, screen_width-25, &font);

  while(!WindowShouldClose()){
    BeginDrawing();
    ClearBackground(Color{255, 255, 255}); //Sets backgorund window color

    // Updates

    //Centered Label
    DrawRectangleLinesEx(
      Rectangle { 15, 15, screen_width - 20, (float) font_size + 15 },
      3,
      Color{255,255,255}
    ); 
    // centered_title.draw(15,20);
    DrawTextEx(font, "Hello", Vector2 {10.0, 10.0}, font_size, font_spacing, Color {0, 0, 0});

    // Render/Draw
    GuiLabel(Rectangle{100,100, 50, 20},"Hi, I'm a label... Or am I?");
    
    EndDrawing();
  }
  
  CloseWindow();
  return 0;
}
