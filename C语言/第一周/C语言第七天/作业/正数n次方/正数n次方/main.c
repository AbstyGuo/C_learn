//
//  main.c
//  正数n次方
//
//  Created by qianfeng on 15/10/16.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>
int pw(int x,int n);
int pw(int x,int n)
{
    int j=1;
    for (int i=0; i<n; i++) {
        j*=x;
    }
    return j;
}
int main(int argc, const char * argv[]) {
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d\n",pw(a, b));
    return 0;
}
