// Does _APP_HPP_ exist?
#ifndef _APP_HPP_
#define _APP_HPP_ // Make it
#include <string>

class CenteredLabel{
    public:
        int textbox_width;
        std::string text;
        Font *font;
    CenteredLabel(std::string text, int textbox_width, Font *font);
    void draw(int text_x, int text_y);
};

#endif
