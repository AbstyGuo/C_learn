//
//  main.c
//  2--字符串作业2--传入歌词字符串,找出作者的名字
//
//  Created by YanTianFeng on 15-10-21.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>
#include <string.h>

//编写函数，传入歌词字符串，打印出作者的名字
//“[ar:zhoujielun][ti:shuangjiegun][al:fantexi]”
void printAuthorName(const char * str)
{
    char array[100] = {};
    strcpy(array, str);//拷贝str指向的字符串到array中去.
    char * p = strtok(array, "]");
    
    //分割"[ar:zhoujielun"
    p = strtok(p, ":");
    p = strtok(NULL, "");
    printf("%s\n",p);
    
}
int main(int argc, const char * argv[])
{

    char lrc[100] = "[ar:zhoujielun][ti:shuangjiegun][al:fantexi]";
    printAuthorName(lrc);
    
    return 0;
}







