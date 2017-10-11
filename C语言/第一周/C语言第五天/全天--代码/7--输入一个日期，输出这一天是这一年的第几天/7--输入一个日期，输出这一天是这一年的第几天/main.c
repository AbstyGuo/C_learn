//
//  main.c
//  7--输入一个日期，输出这一天是这一年的第几天
//
//  Created by YanTianFeng on 15-10-14.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

//    4.输入一个日期，输出这一天是这一年的第几天(需要考虑平年闰年)
//    (日期:  年-月-日)
    
    int year,month,day;
    int days;//保存第几天
    scanf("%d%d%d",&year,&month,&day);
    
    //先加 整月份的天数
    
    switch(month-1)
    {
        case 11:days+=30;
        case 10:days+=31;
        case 9:days+=30;
        case 8:days+=31;
        case 7:days+=31;
        case 6:days+=30;
        case 5:days+=31;
        case 4:days+=30;
        case 3:days+=31;
        case 2:days+=28;
        case 1:days+=31;
    }
    //闰年,大于2月才需要多加一天
    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        if(month > 2)
        days++;
    }
    
    //再加 零散的天数
    //2015-12-31
    days += day;
    
    //打印总天数
    printf("%d-%d-%d这一天是这一年的第%d天!\n",year,month,day,days);
    
    
    return 0;
}







