//
//  main.c
//  最大公约数
//
//  Created by qianfeng on 15/10/16.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>
int maxyue(int a,int b);
int maxyue(int a,int b)
{
    // int min=a<b?a:b;
    int i,min;
    if (a>b)
        min=b;
    else
        min=a;
    for (i=min; i>=1; i--)
    {
        if (a%i==0&&b%i==0) {
            break;
        }
    }
        return i;
}

int main(int argc, const char * argv[])
    {
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d\n",maxyue(a, b));
    return 0;
    }
