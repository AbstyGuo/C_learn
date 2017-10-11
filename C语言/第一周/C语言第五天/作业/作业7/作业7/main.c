//
//  main.c
//  作业7
//
//  Created by qianfeng on 15/10/14.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // 输入任意两个数，如果第一个数小，从第一个数打印到第二个数，如果第二个数小，从第二个数打印到第一个数。
    int a,b,c;
    scanf("%d%d",&a,&b);
    if (a>b) {
        c=a;
        a=b;
        b=c;
    }
    printf("%d %d\n",a,b);
    return 0;
}
