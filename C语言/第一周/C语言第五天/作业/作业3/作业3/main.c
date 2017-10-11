//
//  main.c
//  作业3
//
//  Created by qianfeng on 15/10/14.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int main(int argc, const char * argv[]) {
    // 编程 ,用for循环 ,求  3 + 33 + 333 + 3333  的结果(***)
    int i,a=0,b,c;
    for (i=0; i<4; i++) {
        b=3*pow(10, i)+a;
        a=b;
        c+=b;
        }
    printf("%d\n",c);
    return 0;
}


