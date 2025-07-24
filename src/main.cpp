#include <raylib.h>
#define RAYGUI_IMPLEMENTATION
#include <raygui.h>

int main(){
  int font_size = 24;
  int font_spacing = 1;

  InitWindow(800, 600, "Hello Anti-Doomscroll");
  SetTargetFPS(60);

  // Load the 'Arial' font
  Font font = LoadFontEx("C:\\Windows\\Fonts\\arial.ttf", font_size, 0, 0);
  GuiSetFont(font);
  GuiSetStyle(GuiControl::DEFAULT, GuiDefaultProperty::TEXT_SIZE, font_size);
  GuiSetStyle(GuiControl::DEFAULT, GuiDefaultProperty::TEXT_SPACING, font_spacing);

  while(!WindowShouldClose()){
    BeginDrawing();
    ClearBackground(Color{255, 255, 255});

    // Updates

    // Render/Draw
    GuiLabel(Rectangle{100,100, 50, 20},"Hi, I'm a label... Or am I?");
    
    EndDrawing();
  }
  
  CloseWindow();
  return 0;
}