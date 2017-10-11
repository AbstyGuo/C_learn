//
//  main.c
//  19--整型变量在内存中的存储模式
//
//  Created by YanTianFeng on 15-10-19.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    //低字节数据存储在低地址区,小端模式.绝对大部分的intelCpu都是采用小段模式来存储数据.
    //低字节数据存储在高地址区,大端模式.
    
    int a = 0x11223344;
    //低第一字节:0x44
    //低第二字节:0x33
    //低第三字节:0x22
    //低第四字节:0x11
    char * pc = (char *)&a;
    printf("%x\n",*pc);
    printf("%x\n",*(pc+1));
    printf("%x\n",*(pc+2));
    printf("%x\n",*(pc+3));
    
    printf("%x\n",a);
    
    return 0;
}







