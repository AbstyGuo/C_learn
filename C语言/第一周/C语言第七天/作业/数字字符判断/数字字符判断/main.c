//
//  main.c
//  数字字符判断
//
//  Created by qianfeng on 15/10/16.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
////如果是返回1，不是，返回0

#include <stdio.h>
int isDIGITAL(int c);
int isDIGITAL(int c)
{
    if (c>='0'&&c<='9') {
        return 1;
    }
    else
        return 0;
}
int main(int argc, const char * argv[]) {
    char a;
    scanf("%c",&a);
    printf("%d\n",isDIGITAL(a));
    return 0;
}
