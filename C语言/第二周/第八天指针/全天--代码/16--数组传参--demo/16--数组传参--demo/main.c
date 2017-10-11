//
//  main.c
//  16--数组传参--demo
//
//  Created by YanTianFeng on 15-10-19.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
void func(int *p)
{
    for(int i = 0;i < 10;i++)
    {
        printf("%d ",p[i]);
//        printf("%d ",*(p+i));
    }
    printf("\n");
}

void func2(int p[],int length)//此处的p退化为指针.
{
    //如果数组传参,用数组来接收,数组名会退化为指针.
//    for(int i = 0;i < sizeof(p)/sizeof(p[0]);i++)
    for(int i = 0;i < length;i++)
    {
        printf("%d ",p[i]);
        //        printf("%d ",*(p+i));
    }
    printf("\n");
}
int main(int argc, const char * argv[])
{

    //编写自定义函数func,在func函数中打印main函数中数组array的每个元素的值.
    
    int array[10]= {};
    for(int i = 0;i < 10;i++)
    {
        i[array] = rand()%10;
    }
    
    func(array);
    func2(array,10);
    
    return 0;
}









