//
//  main.c
//  选作3
//
//  Created by qianfeng on 15/10/14.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // 通过do while，找出1000以内所有的7的倍数
    int i=1;
    do{
        if (i%7==0)
            printf("%d\n",i);
        i++;
    }while (i<1000);
    return 0;
}
