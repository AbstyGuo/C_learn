//
//  main.c
//  5--逗号运算符--demo
//
//  Created by YanTianFeng on 15-10-12.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    //逗号运算符
    
    int a = 10;
    a,a+10,a-10;
    a = (1,2,3,4);
    printf("a = %d\n",a);
    
    
    
    return 0;
}









