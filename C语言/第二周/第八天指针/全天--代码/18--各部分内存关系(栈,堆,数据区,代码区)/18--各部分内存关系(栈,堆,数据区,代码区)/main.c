//
//  main.c
//  18--各部分内存关系(栈,堆,数据区,代码区)
//
//  Created by YanTianFeng on 15-10-19.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
int global_a;
int main(int argc, const char * argv[])
{

    int local_a;
    int * p = malloc(1);
    printf("栈:%p\n",&local_a);
    printf("堆:%p\n",p);
    printf("数据区:%p\n",&global_a);
    printf("代码区:%p\n",main);
    
    
    return 0;
}








