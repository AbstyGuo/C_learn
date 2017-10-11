//
//  main.c
//  选作8
//
//  Created by qianfeng on 15/10/14.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // 输入两个数，求两个数的最小公倍数（****）
    int a,b,i,temp;
    scanf("%d%d",&a,&b);
    if (a>b) {
        temp=a;
        a=b;
        b=temp;
    }
    for (i=a; i>=1; i--) {
        if(a%i==0&&b%i==0)
        {
            printf("最小公倍数是%d\n",a*b/i);
            break;
        }
    }
    return 0;
}
