//
//  main.c
//  10--枚举--demo
//
//  Created by YanTianFeng on 15-10-21.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>

//定义枚举

enum Color
{
    RED,
    GREEN,
    BLUE
};
//枚举成员一般用大写表示
//第一个枚举成员默认的值为 0,其后的其他成员依次加1

enum HuaSe{HEART = 0,LEAF = 5,SQUARE = 10,CLUB};
char number[13] = {'A','2','3','4','5','6','7','8','9','a','J','Q','K'};

int main(int argc, const char * argv[])
{
    printf("%d,%d,%d\n",RED,GREEN,BLUE);
    printf("%d,%d,%d,%d\n",HEART,LEAF,SQUARE,CLUB);
    
    enum Color e;
    e = RED;
    e = 10;
    
    return 0;
}





