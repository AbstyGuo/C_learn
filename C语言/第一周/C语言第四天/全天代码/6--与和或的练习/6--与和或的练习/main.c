//
//  main.c
//  6--与和或的练习
//
//  Created by YanTianFeng on 15-10-13.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    //
    int a = 1;
    int b = 1;
    int c = 1;
    
    ((a++)&&(++b))||(--c);
    //[注] 或运算符具有短路特性.
    
    printf("a = %d,b = %d,c = %d\n",a,b,c);
    
    
    a = 1;
    b = 1;
    c = 1;
    
    --a||--b&&c++;
    //[注] 或运算符具有短路特性.
    //[注] 与运算符具有短路特性.
    
    printf("a = %d,b = %d,c = %d\n",a,b,c);
    
    a = 1;
    b = 1;
    c = 1;
    
    a != b?a++:c--;
    //[注] 三目运算符也具有短路特性.
    printf("a = %d,b = %d,c = %d\n",a,b,c);

    
    
    return 0;
}






