//
//  main.c
//  15--递归函数3--传入一个整型数n,返回斐波那契数列 的第n项的值
//
//  Created by YanTianFeng on 15-10-16.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>
/**
编写步骤:
<1>明确这个函数的功能;
<2>找出函数的退出条件(临界条件)   ,往往要使用if语句
<3>假设这个函数的功能已经实现. 然后调用这个函数本身就可以完成相应的功能.
 */
//编写递归函数,传入一个整型数n,返回斐波那契数列 的第n项的值

/**
    功能:传入一个整型数n,返回斐波那契数列 的第n项的值
    1  1  2  3  5  8  13  21 ...
 */

int feibonaqi(int n)
{
    //临界条件(特殊情况)
    if(n == 1 || n == 2)
    {
        return 1;
    }
    return feibonaqi(n-1)+feibonaqi(n-2);
}
int main(int argc, const char * argv[])
{
    printf("第%d项的值为:%d\n",7,feibonaqi(7));
    
    return 0;
}









