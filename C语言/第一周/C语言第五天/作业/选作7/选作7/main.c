//
//  main.c
//  选作7
//
//  Created by qianfeng on 15/10/14.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // 输入两个数，求两个数的最大公约数
#if 0
    int a,b,c = 0;
    scanf("%d%d",&a,&b);
    while (a%b) {
        c=a-a/b*b;
        a=b;
        b=c;
    }
    if (a%b==1) {
        printf("最大公约数是%d\n",1);
    }else
        printf("最大公约数是%d\n",c);
#else
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
            printf("最大公约数是%d\n",i);
            break;
        }
    }
#endif
    return 0;
}
