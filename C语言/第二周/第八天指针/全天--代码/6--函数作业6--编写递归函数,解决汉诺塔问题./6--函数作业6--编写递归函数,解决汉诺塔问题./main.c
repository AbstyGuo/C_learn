//
//  main.c
//  6--函数作业6--编写递归函数,解决汉诺塔问题.
//
//  Created by YanTianFeng on 15-10-19.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>
//编写递归函数,解决汉诺塔问题.

/**
    功能:把A柱上的n个盘子,借助B柱,移动到C柱上.
 */
void hanoo(int n,char a,char b,char c);

int main(int argc, const char * argv[])
{

    hanoo(20, 'A', 'B', 'C');
    return 0;
}

void hanoo(int n,char a,char b,char c)
{
    static int count = 0;
    if(n == 1)
    {
        printf("%d--%c---->%c\n",++count,a,c);
        return;
    }
    hanoo(n-1, a, c, b);
    hanoo(1, a, b, c);
    hanoo(n-1, b, a, c);
}





