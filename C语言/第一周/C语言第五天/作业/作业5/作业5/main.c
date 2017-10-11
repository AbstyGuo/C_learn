//
//  main.c
//  作业5
//
//  Created by qianfeng on 15/10/14.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // 分别使用while do while for 求 1 + 。。。 + 100的和
#if 0  //while
    int i=1,a=0;
    while (i<=100) {
        a+=i;
        i++;
    }
     printf("%d\n",a);
#elif 0
    int i=1,a=0;
    do{
        a+=i;
        i++;
    }while (i<=100);
    printf("%d\n",a);
#else
    int i=1,a=0;
    for (i=1; i<=100; i++) {
        a+=i;
    }
    printf("%d\n",a);
#endif
    return 0;
}
