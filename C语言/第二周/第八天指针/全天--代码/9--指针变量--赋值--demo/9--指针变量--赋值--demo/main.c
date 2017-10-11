//
//  main.c
//  9--指针变量--赋值--demo
//
//  Created by YanTianFeng on 15-10-19.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>

void swap(int *a,int *b)
{
    //交换两个数
    int temp = *a;
    *a = *b;
    *b = temp;
    
}

int main(int argc, const char * argv[])
{

    //指针变量赋值
    int a = 10;
    int * pi = &a;//pi指向了a
    
    int b = 20;
    pi = &b;//赋值,把 变量b的首地址赋值给指针变量pi
    //pi指向了b
    printf("%d\n",*pi);
    
    swap(&a,&b);//&a,&b是地址传递
    swap(a,b);  //a,b值传递
    printf("a = %d,b = %d\n",a,b);
    
    char * pc;
    double * pd;
    printf("%ld\n",sizeof(pi));//8
    printf("%ld\n",sizeof(pc));//8
    printf("%ld\n",sizeof(pd));//8
    
    
    return 0;
}







