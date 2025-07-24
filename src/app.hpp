// Does _APP_HPP_ exist?
#ifndef _APP_HPP_
#define _APP_HPP_ // Make it
#include <string>

class CenteredLabel{
    public:
        int x;
        int y;
        std::string text;

    CenteredLabel(int x, int y, std::string text);
};

#endif