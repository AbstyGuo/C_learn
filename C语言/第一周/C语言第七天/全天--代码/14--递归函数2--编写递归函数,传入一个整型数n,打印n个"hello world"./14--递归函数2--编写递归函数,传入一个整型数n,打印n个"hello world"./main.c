//
//  main.c
//  14--递归函数2--编写递归函数,传入一个整型数n,打印n个"hello world".
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

//编写递归函数,传入一个整型数n,打印n个"hello world".

/**
    功能:传入一个整型数n,打印n个"hello world"
 */
void printNHelloWorld(int n)
{
    static int a = 0;
    //临界条件(特殊情况)
    if(n == 1)
    {
        printf("%dhello world\n",++a);
        return ;
    }
    printNHelloWorld(n-1);
    printf("%dhello world\n",++a);
}

int main(int argc, const char * argv[])
{
    printNHelloWorld(1000);
    
    return 0;
}








