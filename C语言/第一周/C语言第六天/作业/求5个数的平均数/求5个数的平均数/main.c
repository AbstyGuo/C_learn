//
//  main.c
//  求5个数的平均数
//
//  Created by qianfeng on 15/10/15.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a[5]={},b=0;
    for (int i=0; i<5; i++) {
        scanf("%d",&a[i]);
        b+=a[i];
    }
    b/=5;
    printf("%d\n",b);
    return 0;
}
