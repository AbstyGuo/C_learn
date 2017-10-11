//
//  main.c
//  斗地主发牌程序
//
//  Created by qianfeng on 15-10-22.
//  Copyright (c) 2015年 student. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//思路一，先产生54张牌（顺序的），然后洗牌（乱序的），其中的51张发给3个人，剩下的3张作为底牌。
//思路二，先产生54张牌（乱序的），直接发牌。
//思路三，直接发牌（随机给三个人发17张牌）。
int color[4]={1,2,3,4};
char Number[13]={'A','2','3','4','5','6','7','8','9','X','J','Q','K'};
typedef struct poker
{
    int color;
    char Number;
}Poker;
//定义全局牌
Poker pokers[54];
//第一步，创建牌
void create_Poker(void)
{
    for (int i=0; i<4; i++)
    {
        for (int j=0; j<13; j++)
        {
            pokers[i*13+j].color=color[i];
            pokers[i*13+j].Number=Number[j];
        }
    }
    pokers[52].color=color[0];
    pokers[52].Number='$';
    pokers[53].Number='$';
    pokers[53].color=color[1];
    return;
    //按花色顺序创建52张牌+2个王；
}
//第二步，洗牌
void xi_Poker(void)
{
    srand(time((long)0));
    //循环100次，每次随机取两张牌进行交换
    for (int i=0; i<100; i++) {
        int index1=rand()%54;
        int index2=rand()%54;
        Poker temp=pokers[index1];
        pokers[index1]=pokers[index2];
        pokers[index2]=temp;
    }
}
//第三步，发牌
void fa_Poker(void)
{//循环给3个人发17张牌
    printf("第一个人的牌：\n");
    for (int i=0; i<17; i++)
    {
        printf("(%d,%c)",pokers[i].color,pokers[i].Number);
    }
    printf("\n");
    printf("第二个人的牌：\n");
    for (int i=17; i<34; i++)
    {
        printf("(%d,%c)",pokers[i].color,pokers[i].Number);
    }
    printf("\n");
    printf("第三个人的牌：\n");
    for (int i=34; i<51; i++) {
        printf("(%d,%c)",pokers[i].color,pokers[i].Number);}
    printf("\n");
    printf("底牌：\n");
    for (int i=51; i<54; i++) {
        printf("(%d,%c)",pokers[i].color,pokers[i].Number);}
    printf("\n");
    
}
int main(int argc, const char * argv[])
{
    create_Poker();
    xi_Poker();
    fa_Poker();
    return 0;
}

