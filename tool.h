#ifndef _TOOL_H_
#define _TOOL_H_
#include <string>
#include <sstream>
#include <ctime>
#include <ncurses.h>
using namespace std;

class TOOL
{
public:
    string int2str(int num);
    string getCurrentDate();
    WINDOW *create_newwin(int height, int width, int starty, int startx);
    void destory_win(WINDOW *local_win);
};

#endif