#include "app.hpp"
#include <raylib.h>
#include <raygui.h>

CenteredLabel::CenteredLabel(int x, int y, std::string text) {
    this->x = x;
    this-> y = y;
    this-> text = text;
}