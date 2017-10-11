//
//  main.c
//  三个函数
//
//  Created by student on 15-10-20.
//  Copyright (c) 2015年 student. All rights reserved.
//

#include <stdio.h>
void scanArray(int * arr, int n)
{
    for (int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    return;
}
void sortArray(int * arr, int n)
{
    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            if (arr[i]<arr[j]) {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    return;
}
void printArray(int * arr, int n)
{
    for (int i=0; i<n; i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main(int argc, const char * argv[])
{
    int a[10];
    scanArray(a, 10);
    sortArray(a, 10);
    printArray(a, 10);
    
    return 0;
}

