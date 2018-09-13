//
//  point.c
//  start
//
//  Created by Xcodey on 2015/8/27.
//  Copyright © 2015年 Xcodey. All rights reserved.
//

#include <stdio.h>

int main(){
    int i, s = 1;
    printf("please enter:\n");
    scanf("%d",&i);
    for (; i>0; i--) {
        s = s*i;
    }
    printf("%d\n",s);
    
    //double d2 = 10000/3.0;
    //printf("%20.17f\n",d2);
    /*
    int var1,var2,result;
    printf("enter two numbers:\n");
    scanf("%d,%d",&var1,&var2);
    printf("%d,%d\n",(int)var1,(int)var2);
    result = var1 + var2;
    printf("They are %d and %d, the result is %d.\n",var1,var2,result);
    */
    return 0;
}
