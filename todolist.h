#ifndef _TODOLIST_H_
#define _TODOLIST_H_
#include <ncurses.h>
#include "tool.h"
#include <string>
#include <cstring>
using namespace std;

class TODOLIST
{
public:
    TODOLIST();
    ~TODOLIST();
    void display();

    TOOL tool;
    WINDOW *title_win, *todo_win, *done_win, *info_win;
    
    int title_win_h, title_win_w, title_win_y, title_win_x;
    int todo_win_h, todo_win_w, todo_win_y, todo_win_x;
    int done_win_h, done_win_w, done_win_y, done_win_x;
    int info_win_h, info_win_w, info_win_y, info_win_x;
};
#endif