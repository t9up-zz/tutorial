//
//  jiou.c
//  start
//
//  Created by Xcodey on 2015/8/27.
//  Copyright © 2015年 Xcodey. All rights reserved.
//

#include <stdio.h>

int main(){
    int i = 1, s = 0;
    
//    while (i<100) {
//        s = s + i;
//        i++;
//    }
    
//    do {
//        s = s + i;
//        i++;
//    } while (i<100);
    
    for (; i<100; i++) {
        s = s + i;
    }
    printf("1~99 sum = %d\n",s);
    return 0;
}
