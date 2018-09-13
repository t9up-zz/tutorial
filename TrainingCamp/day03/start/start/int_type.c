//
//  int_type.c
//  start
//
//  Created by Xcodey on 2015/8/26.
//  Copyright © 2015年 Xcodey. All rights reserved.
//

#include<stdio.h>

int main()
{
    int var1, var2;
    var1 = var2 = 3;
    printf("var1 = %d, var2 = %d\n",var1,var2);
    printf("%ld,%ld,%ld,%ld,%ld\n", sizeof(long long), sizeof(long), sizeof(int), sizeof(unsigned int), sizeof(short));  //8,8,4,4,2
    printf("%ld,%ld, %ld\n", sizeof(long double), sizeof(double), sizeof(float));  //16,8,4
    //printf("%ld\n", sizeof(long long double));//报错
    printf("%ld\n", sizeof(char));  //1
    printf("\a\a\a\a\a\n");
    printf("%d,%d,%d\n",'a', 'A', '0');  //97,65,48
    return 0;
}
