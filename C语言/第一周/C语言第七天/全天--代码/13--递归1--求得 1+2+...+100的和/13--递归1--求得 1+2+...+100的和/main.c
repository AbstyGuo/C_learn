//
//  main.c
//  13--递归1--求得 1+2+...+100的和
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

//[需求-1]编写递归函数,传入一个100,求得1+2+...+100的和,并返回.
/**
    功能:传入一个整型数n,返回1到n的和
 */
int sum(int n)
{
    //临界条件(特殊情况)
    if(n == 1)
    {
        return 1;
    }
    return sum(n-1)+n;
}
int main(int argc, const char * argv[])
{
    printf("sum = %d\n",sum(1000));
    return 0;
}

