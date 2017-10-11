//
//  main.c
//  作业4
//
//  Created by qianfeng on 15/10/14.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    // 找出所有的水仙花数，三位数，各位立方和等于该数本身
    int a,b,c,i,s;
    for (i=0; i<1000; i++) {
        a=i/100;
        b=i/10%10;
        c=i%10;
        s=pow(a, 3)+pow(b, 3)+pow(c, 3);
        if (i==s) {
            printf("%d\n",s);
        }
    }
    return 0;
}
