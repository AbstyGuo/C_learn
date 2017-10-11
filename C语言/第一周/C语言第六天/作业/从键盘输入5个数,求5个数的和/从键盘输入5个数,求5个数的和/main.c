//
//  main.c
//  从键盘输入5个数,求5个数的和
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
    printf("%d\n",b);
    return 0;
}
