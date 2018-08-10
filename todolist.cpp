#include "todolist.h"

TODOLIST::TODOLIST()
{
    title_win_h = 3;
    
    title_win_y = 0;
    title_win_x = 0;

    todo_win_h = 20;
    todo_win_w = 40;
    todo_win_y = title_win_y + title_win_h + 1;
    todo_win_x = 0;

    done_win_h = todo_win_h;
    done_win_w = todo_win_w;
    done_win_y = todo_win_y;
    done_win_x = todo_win_x + todo_win_w + 1;

    info_win_h = 3;
    
    info_win_y = todo_win_y + todo_win_h + 1;
    info_win_x = 0;

    title_win_w = todo_win_w + done_win_w + 1;
    info_win_w = title_win_w;
}

void TODOLIST::display()
{
//显示标题窗口
    title_win = tool.create_newwin(title_win_h,title_win_w,title_win_y,title_win_x);
    char currdate[128];
    string title;
    title = tool.getCurrentDate() + "          " + "ToDoList 1.0         by 大蓝鲸";
    strcpy(currdate,title.c_str());

    mvwprintw(title_win,1,1, currdate);
    wrefresh(title_win);

//待办事项窗口
    todo_win = tool.create_newwin(todo_win_h,todo_win_w,todo_win_y,todo_win_x);
    mvwprintw(todo_win, 0, 2, "未完成事项");
    wrefresh(todo_win);

//已完成事项窗口
    done_win = tool.create_newwin(done_win_h,done_win_w,done_win_y,done_win_x);
    mvwprintw(done_win, 0, 2, "已完成事项");
    wrefresh(done_win);

//信息提示窗口
    info_win = tool.create_newwin(info_win_h,info_win_w,info_win_y,info_win_x);    
    mvwprintw(info_win, 0, 2, "提示");
    wrefresh(info_win);
}

TODOLIST::~TODOLIST()
{
    
}

