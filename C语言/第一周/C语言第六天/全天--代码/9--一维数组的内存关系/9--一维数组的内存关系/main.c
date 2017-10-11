//
//  main.c
//  9--一维数组的内存关系
//
//  Created by YanTianFeng on 15-10-15.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    //一维数组的内存关系
    
    int array1[3];
    int array2[3];
    
    //array2 = array1;
    
    //变量所占内存大小 是根据变量的类型而定的.
    //数组的类型是 盖住数组名,剩下的部分.
    
    printf("%ld\n",sizeof(array1)); //12
    printf("%ld\n",sizeof(int [3]));//12
    printf("%ld\n",sizeof(array1[0]));//4
    
    printf("%ld\n",sizeof(array1)/sizeof(array1[0]));
    
    
    
    return 0;
}








