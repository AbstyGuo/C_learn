//
//  main.c
//  4--函数作业4--使用递归求    10！
//
//  Created by YanTianFeng on 15-10-19.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>
//使用递归求    10！

int jiecheng(int a);

int main(int argc, const char * argv[])
{
    printf("%d\n",jiecheng(1));
    
    return 0;
}
/**
    功能:传入一个整型数,返回这个整型是的阶乘结果
 */
int jiecheng(int a)
{
    if(a == 1 || a == 0)
    {
        return 1;
    }
    return jiecheng(a-1)*a;
}






