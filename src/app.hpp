// Does _APP_HPP_ exist?
#ifndef _APP_HPP_
#define _APP_HPP_ // Make it
#include <string>
#include "raylib.h"

class CenteredLabel{
    int textbox_width;
    std::string text;
    Font *font;
    int gui_text_spacing;
    int gui_text_size;
    int size_of_string;

  public:
    CenteredLabel(std::string text, int textbox_width, Font *font);
    void draw(int text_x, int text_y);
};

#endif
