//
//  main.c
//  作业6
//
//  Created by qianfeng on 15/10/14.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // 打印出100以下的所有偶数
    int i;
    for (i=0; i<100; i++) {
        if (!(i%2)) {
            printf("%-3d",i);
        }
    }printf("\n");
    
    return 0;
}
