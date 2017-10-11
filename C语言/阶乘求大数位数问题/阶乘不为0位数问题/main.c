//
//  main.c
//  阶乘不为0位数问题
//
//  Created by student on 15-11-9.
//  Copyright (c) 2015年 student. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int i,n,y=1;
    scanf("%d",&n);
    for (i=1; i<=n; i++) {
        int j=0,x=i;
        while (x%5==0) {
            x/=5;
            j++;
        }
    }
    return 0;
}

