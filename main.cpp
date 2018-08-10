#include <iostream>
#include <ncurses.h>
#include <locale.h>
#include "tool.h"
#include "todolist.h"
using namespace std;


int main()
{
    setlocale(LC_ALL,"");
    initscr();
    cbreak();
    noecho();
    curs_set(0);
    keypad(stdscr,TRUE);

    refresh();

    TODOLIST *tt = new TODOLIST();
    tt->display();


    getch();
    endwin();
    return 0;    

}