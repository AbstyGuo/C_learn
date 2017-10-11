//
//  main.c
//  8--输入缓冲区问题
//
//  Created by YanTianFeng on 15-10-14.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    //输入缓冲区
    
    char c,d;
    scanf("%c",&c);
    
    //清空输入缓冲区
    while((c = getchar()) != '\n');
    
    scanf("%c",&d);
    
    printf("c = %c,d = %c\n",c,d);
    
    return 0;
}








