//
//  main.c
//  7--if语句--练习
//
//  Created by YanTianFeng on 15-10-13.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
#if 0
//  1.输入一个数，判断是否是偶数
    
    int x;
    scanf("%d",&x);
    //判断是否是偶数,偶数的特点:可以被2整除
    //if(!(x % 2))
    if(x % 2 == 0)
    {
        printf("是\n");
    }
    else
    {
        printf("不是\n");
    }
#elif  0
//	2.输入一个字符，如果是小写字母，转成大写字母，如果不是小写字母，原样输出。
    
    char c;
    scanf("%c",&c);
    //判断是否是小写字母
    if(c >= 'a' && c <= 'z')
    {
        //小写转大写输出
        printf("大写字母:%c",c-32);
    }
    else
    {
        //原样输出
        printf("原字符为:%c\n",c);
    }
    //或者
    
    printf("%c\n",(c >= 'a' && c <= 'z')?(c-32):c);
    
//	3.输入一个字符，判断是否是字母，是输出"是"，不是输出"不是"
    
#elif 0
    
    char c;
    scanf("%c",&c);
    //判断是否是字母(小写||大写)
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        printf("是\n");
    }
    else
    {
        printf("不是\n");
    }
    
#elif  1
//	4.输入一个年份，判断是否是闰年（能被4整除且不能被100整除，或者能直接被400整除）是输出"是"，不是输出"不是"
    
    int year;
    scanf("%d",&year);
//    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    if((!(year % 4) && year % 100) || !(year % 400))
    {
        printf("是\n");
    }
    else
    {
        printf("不是\n");
    }
    
    
//    int x = 2;
//    if(碰到卖西瓜的)
//    {
//        x = 1;
//    }
//    
//    买回来的是面包
    
    
    
#endif
    return 0;
}








