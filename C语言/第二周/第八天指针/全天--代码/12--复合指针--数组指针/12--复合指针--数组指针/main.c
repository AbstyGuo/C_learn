//
//  main.c
//  12--复合指针--数组指针
//
//  Created by YanTianFeng on 15-10-19.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    //复合指针--数组指针
    
    int (*p)[5];
    
    printf("%d\n",p);
    printf("%d\n",*p);
    
    int array[5];
    p = &array;//&array是数组的首地址,array是数组首元素的地址
    
    printf("%p\n",p);
    printf("%p\n",array);
    printf("%p\n",&array);
    printf("%p\n",array+1);
    printf("%p\n",p+1);//数组指针加1,加了整个数组的大小.
    
    
    return 0;
}







