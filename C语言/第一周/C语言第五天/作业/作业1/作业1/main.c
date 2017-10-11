//
//  main.c
//  作业1
//
//  Created by qianfeng on 15/10/14.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // 找出1——100中,  所有是7的倍数和带7的数。
    int i,a,b;
    for (i=1; i<=100; i++) {
        a=i/10%10;
        b=i%10;
        if (a==7||b==7||!(i%7)) {
            printf("%d\n",i);
        }
    }
    return 0;
}
