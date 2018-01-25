//
//  BubbleSort.c
//  algorithm
//
//  Created by dolia on 2018/1/25.
//  Copyright © 2018年 dolia. All rights reserved.
//

#include <stdio.h>

void PrintArr(int a[10]){
    
    printf("{");
    
    for (int i=0;i<=9;i++){
        
        printf("%i ",a[i]);
    }
    
    printf("}\n");
}

void BubbleSort(int a[10]){
    for(int k=0;k<9;k++){
        for(int i=0;i<9;i++){
            if (a[i]>a[i+1]){
                int tmp=0;
                tmp = a[i];
                a[i]=a[i+1];
                a[i+1] = tmp;
            }
        }
    }
    PrintArr(a);
    
}

int main(int argc, const char * argv[]){
    
    int a[10] = {123,31,4223,734535,52403,12345,34,222,1231402,123499595};
    
    PrintArr(a);
    
    BubbleSort(a);
    
    
    return 0;
}
