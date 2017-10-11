//
//  main.c
//  作业2
//
//  Created by qianfeng on 15/10/14.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // 编程,打印 1+2+3+…+ 98 + 99 + 100的结果
    int i,a;
    for (i=1; i<=100; i++) {
        a+=i;
    }
    printf("%d\n",a);
    return 0;
}
