//
//  main.c
//  2--斗地主
//
//  Created by YanTianFeng on 15-10-22.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>

//编写一个发牌程序,三个人斗地主(共54张牌,1人发17张,剩余3张作为底牌)

//要求: 发出去的每张牌不能重复.
//每张牌必须带有一个花色,一个数字.

//思路一,先产生54张牌(顺序的),然后洗牌(乱序的),其中的51张发给三个人,剩下的3张作为底牌.

//思路二,先产生54张牌(乱序的),直接发牌(其中的51张发给三个人,剩下的3张作为底牌).

//思路三,直接发牌(随机给三个人发17张牌).

//思路一的实现

int Color[4] = {1,2,3,4};
char Number[13] = {'A','2','3','4','5','6','7','8','9','X','J','Q','K'};

typedef struct poker
{
    int color;
    char number;
}Poker;

//定义全局牌
Poker pokers[54];

//第一步,创建牌
void create_Poker(void)
{
    for(int i = 0;i < 4;i++)
    {
        for(int j = 0;j < 13;j++)
        {
            pokers[i*13+j].color = Color[i];
            pokers[i*13+j].number = Number[j];
        }
    }
    pokers[52].color = Color[0];
    pokers[52].number = '$';
    pokers[53].color = Color[1];
    pokers[53].number = '$';
    
}
//第二部,洗牌
void xi_Poker(void)
{
    //循环100次,每次随机取两张牌进行交换
    for(int i = 0;i < 100;i++)
    {
        int index1 = rand()%54;
        int index2 = rand()%54;
        Poker temp = pokers[index1];
        pokers[index1] = pokers[index2];
        pokers[index2] = temp;
    }
}
//第三步,发牌
void fa_Poker(void)
{
    //第一个人的17张牌
    printf("第一个人的牌:\n");
    for(int i = 0;i < 17;i++)
    {
        printf("(%d,%c)",pokers[i].color,pokers[i].number);
    }
    printf("\n");
    
    //第二个人的17张牌
    printf("第二个人的牌:\n");
    for(int i = 17;i < 34;i++)
    {
        printf("(%d,%c)",pokers[i].color,pokers[i].number);
    }
    printf("\n");
    
    //第三个人的17张牌
    printf("第三个人的牌:\n");
    for(int i = 34;i < 51;i++)
    {
        printf("(%d,%c)",pokers[i].color,pokers[i].number);
    }
    printf("\n");
    
    //底牌
    printf("底牌:\n");
    for(int i = 51;i < 54;i++)
    {
        printf("(%d,%c)",pokers[i].color,pokers[i].number);
    }
    printf("\n");
}


int main(int argc, const char * argv[])
{

    //创建牌
    create_Poker();
    
    //洗牌
    xi_Poker();
    
    //发牌
    fa_Poker();
    
    return 0;
}







