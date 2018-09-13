//
//  test.c
//  start
//
//  Created by Xcodey on 2015/8/27.
//  Copyright © 2015年 Xcodey. All rights reserved.
//

#include <stdio.h>

//100~200之间的质数个数: 质数定义为在大于1的自然数中，除了1和它本身以外不再有其他因数
int main(){
    int k = 0;
    for (int i = 100; i<200; i++) {
        for (int j = 2; j < i; j++) {
            if ((i%j) == 0) {
                break;
            } else {
                if ((i-j) == 1) {
                    k++;
                    printf("%d是质数\n",i);
                }
            }
        }
    }
    printf("100~200之间的质数个数为:%d\n",k);
    return 0;
}
