//
//  main.c
//  传歌词字符串找出作者名字
//“[ar:zhoujielun][ti:shuangjiegun][al:fantexi]”
//  Created by student on 15-10-20.
//  Copyright (c) 2015年 student. All rights reserved.
//

#include <stdio.h>
#include<string.h>
void printAuthorName(const char * str)
{
    char array[100]={};
    strcpy(array, str);//拷贝str指向的字符串到array中去。
    char *p=strtok(array, "]");
    //分割“[ar:zhoujielun”
    strtok(p, ":");
    //以“:”分割p，得到zhoujielun
    p=strtok(NULL, " ");
    printf("%s\n",p);
    return;
}
int main(int argc, const char * argv[])
{
    char lrc[100]="[ar:zhoujielun][ti:shuangjiegun][al:fantexi]";
    printAuthorName(lrc);
    return 0;
}

