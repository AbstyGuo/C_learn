//
//  main.c
//  自减运算符--demo
//
//  Created by YanTianFeng on 15-10-13.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    //自增运算符 ++
    
    int a = 10;
    //后++
    printf("%d\n",a++);
    printf("a = %d\n",a);
    //当前的a为11
    
    //前++
    printf("%d\n",++a);
    printf("a = %d\n",a);
    //当前的a为12
    
    //后--
    printf("%d\n",a--);
    printf("a = %d\n",a);
    //当前的a的值为11
    
    //前--
    
    printf("%d\n",--a);
    printf("a = %d\n",a);
    
    
    a = 9;//a == 9
    int b = a++;//a == 10,b == 9
    int c = --b+a++;//a == 11 ,b == 8,c == 18
    
    printf("a = %d,b = %d,c = %d\n",a,b,c);
    
//    (3+a)++;
    a++;
    
    return 0;
}









