//
//  main.c
//  10--const关键字
//
//  Created by YanTianFeng on 15-10-20.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

//    const  int * p;
//    int const * p;
    
    int array[10] = {1,2};
    //*前const
    const int *p = array;//const修饰的是 *p,但是p可以修改
    
    //*p = 10;//错
    p++;
    p = (const int *)0x111111;
    
    //*后const
    int * const p1 = array;//p1只读,但是*p可以修改
    
    //p1++;错
    *p1 = 10;
    printf("%d\n",array[0]);
    return 0;

}









