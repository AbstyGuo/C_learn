//
//  main.c
//  3--输入一个字母,输出表示星期几
//
//  Created by YanTianFeng on 15-10-14.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

//    3.输入一个字母，判断这个字母表示星期几，如果一个字母不能表示，再输入一个字母，输出星期几。
//    
//    M     Monday
//    T		Tuesday
//    W     wednesday
//    T		Thursday
//    F     Friday
//    S		saturday
//    S		sunday
    
    char c;
    //第一次输入
    scanf("%c",&c);//此处,输入 t 字符,实际输入进去的是t\n 这两个字符都被输入到输入缓冲区中.scanf从中读走一个字符
    //scanf优先从输入缓冲区中,读取数据.
    
    //把输入的大写字母转为小写
    if(c >= 'A' && c <= 'Z')
    {
        c += 32;
    }
    switch(c)
    {
        default:printf("输入有误!\n");break;
        case 'm':printf("星期一\n");break;
        case 'w':printf("星期三\n");break;
        case 'f':printf("星期五\n");break;
        case 't':
        {
            //第二次输入
            scanf("%c",&c);
            if(c >= 'A' && c <= 'Z')
            {
                c += 32;
            }
            switch(c)
            {
                case 'u':printf("星期二\n");break;
                case 'h':printf("星期四\n");break;
                default:printf("输入有误!\n");break;
            }break;
        }
        case 's':
        {
            //第二次输入
            scanf("\n%c",&c);
            if(c >= 'A' && c <= 'Z')
            {
                c += 32;
            }
            switch(c)
            {
                case 'a':printf("星期六\n");break;
                case 'u':printf("星期日\n");break;
                default:printf("输入有误!\n");break;
            }
            break;
        }
    }
    
    
    
    return 0;
}









