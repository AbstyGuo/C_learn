//
//  main.c
//  17--堆内存分配--demo
//
//  Created by YanTianFeng on 15-10-19.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[])
{

    //堆内存分配

    int * p = malloc(40);
    *p = 100;
    printf("%d\n",*p);
    
    *(p+1) = 200;
    printf("%d\n",*(p+1));
    
    *(p+2) = 300;
    printf("%d\n",*(p+2));
    
    for(int i = 0;i < 10;i++)
    {
        p[i] = rand()%33;
    }
    for(int i = 0;i < 10;i++)
    {
        printf("%d\n",i[p]);
    }
    //把40个字节的堆内存,当做40个单字节来使用
    for (int i = 0; i < 40; i++)
    {
        ((char *)p)[i] = rand()%26+'a';
    }
    
    for(int i = 0;i < 40;i++)
    {
        printf("%c ",((char *)p)[i]);
    }
    
    //堆内存释放
    
//    while (1) {
//        p = malloc(1024);
//        free(p);
//    }
    
    
    
    free(p);
//    free(p);//abort
    
    
    
    
    
    return 0;
}








