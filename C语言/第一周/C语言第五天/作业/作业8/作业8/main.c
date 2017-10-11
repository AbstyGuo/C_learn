//
//  main.c
//  作业8
//
//  Created by qianfeng on 15/10/14.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // 输入一个数，判断是否是质数（****）
    int a,i;
    scanf("%d",&a);
    for (i=2; i<a; i++) {
        if (a%i==0) {
            break;
        }
    }
    if (i==a) {
        printf("是\n");
    }
    else
        printf("不是\n");
    return 0;
}
