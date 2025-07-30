#include "app.hpp"
#include <raylib.h>
#include <raygui.h>

CenteredLabel::CenteredLabel(std::string text, int textbox_width, Font *font) {
    this->text = text;
    this-> textbox_width = textbox_width;
    this-> font = font;

    //Possible Error from this
    gui_text_size = GuiGetStyle(GuiControl::DEFAULT, GuiDefaultProperty::TEXT_SIZE);
    gui_text_spacing = GuiGetStyle(GuiControl::DEFAULT, GuiDefaultProperty::TEXT_SPACING);
    
    //Finds out how big our string is
    size_of_string = MeasureTextEx(*font, text.c_str(), gui_text_size, gui_text_spacing).x;
}

void CenteredLabel::draw(int text_x, int text_y){
    int left_edge_of_textbox = (textbox_width/2) - (size_of_string/2) + text_x; //Works bcz want middle, therefore divide by 2. Width/2 is middle, go left by size of the string/2 to center text, go right by amount specified
    DrawTextEx(*font, 
        text.c_str(), 
        Vector2 {(float) left_edge_of_textbox, (float) text_y}, 
        gui_text_size, 
        gui_text_spacing, 
        Color{0, 0, 0});
}
