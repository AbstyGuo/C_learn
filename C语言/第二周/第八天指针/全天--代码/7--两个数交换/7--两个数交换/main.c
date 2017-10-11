//
//  main.c
//  7--两个数交换
//
//  Created by YanTianFeng on 15-10-19.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>
void swap(int a,int b)
{
    //两个数交换
    int temp = a;
    a = b;
    b = temp;
}
int main(int argc, const char * argv[])
{
    int a = 10,b = 20;
    swap(a,b);
    printf("a = %d,b = %d\n",a,b);
    
    return 0;
}







