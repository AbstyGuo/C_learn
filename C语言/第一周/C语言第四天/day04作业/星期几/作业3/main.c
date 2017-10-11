//
//  main.c
//  作业3
//
//  Created by qianfeng on 15/10/13.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
//    输入一个字母，判断这个字母表示星期几，如果一个字母不能表示，再输入一个字母，输出星期几。
//    
//    M   Monday
//    T		Tuesday
//    W	wednesday
//    T		Thursday
//    F	   Friday
//    S		saturday
//    S		sunday
    char a,b;
    //第一次输入
    scanf("%c",&a);/*此处输入T字符，实际输入进去的是T和\n，这两个字符都被输入到
                  输入缓冲区中。scanf从中读走一个字符，\n还留在缓冲区*/
    //scanf优先从输入缓冲区中读取数据。
    if (a>'Z') {
        a-=32;
    }
    switch (a) {
        case 'M':printf("Monday\n");break;
        case 'W':printf("Wednesday\n");break;
        case 'F':printf("Friday\n");break;
        case 'T':
        {
            printf("please input other number\n");
            //第二次输入
            scanf("\n%c",&b);
            switch (b){
                case 'u':
                case 'U':printf("Tuesday\n");break;
                case 'h':
                case 'H':printf("Thursday\n");break;
                default: printf("输入有误\n");break;
            }break;
        }
        
        case 'S':
        {
            printf("please input another number\n");
            //第二次输入
            scanf("\n%c",&b);
            switch (b){
                case 'a':
                case 'A':printf("Saturday\n");break;
                case 'u':
                case 'U':printf("Sunday\n");break;
                default:printf("输入有误\n");break;
            }break;
        }
        default:printf("输入有误\n");
            break;
    }

    return 0;
}
