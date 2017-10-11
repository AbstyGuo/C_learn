//
//  main.c
//  2--输入一个时间，输出这个时间之后一秒的时间
//
//  Created by YanTianFeng on 15-10-14.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
#include <unistd.h>

int main(int argc, const char * argv[])
{

//    输入一个时间，输出这个时间之后一秒的时间
//    (时间:    时:分:秒)
#if 0
    int hour,minute,second;
    scanf("%d%d%d",&hour,&minute,&second);
    //second为59时
    if(second+1 == 60)
    {
        second = 0;
        minute++;
        if(minute == 60)
        {
            minute = 0;
            hour++;
            if(hour == 24)
            {
                hour = 0;
            }
        }
    }
    else
    {
        second++;
    }
    
    printf("%02d:%02d:%02d\n",hour,minute,second);
 
#else
    
    /**
        时钟程序
     */
    int hour = 23,minute = 59,second = 50;
//    scanf("%d%d%d",&hour,&minute,&second);
    //second为59时
TIME:
    if(second+1 == 60)
    {
        second = 0;
        minute++;
        if(minute == 60)
        {
            minute = 0;
            hour++;
            if(hour == 24)
            {
                hour = 0;
            }
        }
    }
    else
    {
        second++;
    }
    
    printf("%02d:%02d:%02d\r",hour,minute,second);
    fflush(stdout);//手动刷新输出缓冲区
    sleep(1);//程序睡眠一秒
    goto TIME;
    
#endif
    return 0;
}









