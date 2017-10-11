//
//  main.c
//  8--强制类型转换运算符--demo
//
//  Created by YanTianFeng on 15-10-12.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    //强制类型转换运算符
    
    printf("%d\n",(int)3.0);
    printf("%d\n",(int)2.0%3);
    
//    printf("%d\n",(int)(2.0%3));
    printf("%d\n",(int)sizeof(int));
    
    int a = 10;
    unsigned int b = -10;
    
    if((int)a > (int)b)
    {
        printf("a > b\n");
    }
    
    return 0;
}






