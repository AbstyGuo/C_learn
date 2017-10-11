//
//  main.c
//  n个hello world
//
//  Created by qianfeng on 15/10/17.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>
void nh(int n);
void nh(int n)
{
    if (n==1) {
        printf("hello world\n");
        return;
    }
    nh(n-1);
    printf("hello world\n");
}
int main(int argc, const char * argv[]) {
    
    nh(8);
    return 0;
}
