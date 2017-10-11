//
//  main.c
//  11--指针和数组的关系
//
//  Created by YanTianFeng on 15-10-19.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    //指针和数组的关系
    
    int array[10] = {1,2,3,4,5,6,7,8,9,10};
    int * p;//野指针
//    printf("%d\n",p);
//    printf("%d\n",*p);
    //数组名,代表数组首元素的地址
    p = array;//p指向了数组array,从此刻开始数组名array和指针变量p可以通用了.
    
    printf("%p\n",array);
    printf("%p\n",p);
    
    printf("%p\n",array+1);
    printf("%p\n",p+1);
    
    printf("%d\n",array[0]);
    printf("%d\n",p[0]);
    
    printf("%d\n",*(p+0));//*(0+p)
    printf("%d\n",*(array+0));//*(0+array)
    
    printf("%d\n",0[p]);
    printf("%d\n",0[array]);
    
    long a = p;
    printf("%d\n",((int *)a)[0]);
    
    for(int i = 0;i < 10;i++)
    {
        printf("%d\n",array[i]);
        printf("%d\n",p[i]);
        printf("%d\n",i[p]);
        printf("%d\n",i[array]);
    }
    
    
    return 0;
}











