#include "tool.h"

string TOOL::int2str(int num)
{
    stringstream stream;
    stream<<num;
    return stream.str();
}

string TOOL::getCurrentDate()
{
    time_t rawtime;
    struct tm *ptminfo;

    time(&rawtime);
    ptminfo = localtime(&rawtime);

    string ss="时间："+int2str(ptminfo->tm_year+1900)+"年"+int2str(ptminfo->tm_mon+1)+"月"
            +int2str(ptminfo->tm_mday)+"日";
    return ss;
}

WINDOW *TOOL::create_newwin(int height, int width, int starty, int startx)
{
    WINDOW *local_win;
    local_win = newwin(height, width, starty, startx);
    box(local_win,0,0);
    wrefresh(local_win);
    return local_win;
}

void TOOL::destory_win(WINDOW *local_win)
{
    wborder(local_win, ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ');
    wrefresh(local_win);
    delwin(local_win);
}