//
//  hello.c
//  start
//
//  Created by Xcodey on 2015/8/27.
//  Copyright © 2015年 Xcodey. All rights reserved.
//

#include <stdio.h>

int main(){
    int i = 4;
    char j = 'A';
    int *p;
    p = &i;
    printf("*p is %d\n",*p);
    char * p2 = &j;
    printf("*p2 is %c\n",*p2);
    printf("\t%d%c\r",i,j);
    printf("12345678\n");
    printf("%ld\n",sizeof(float));
    return 0;
}
