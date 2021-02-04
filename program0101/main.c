//
//  main.c
//  program0101
//
//  Created by 田中美幸 on 2021/01/30.
//

#include <stdio.h>


int main(void) {
    // insert code here...
    int i;
    int tem;
    int a[5] = {0,1,2,3,4};
    int b[5] = {5,6,7,8,9};
    
    for (i = 0; i < 5; i ++) {
        //tmpに値を避難
        tem = a[i];
        a[i] = b[i];
        b[i] = tem;
    }
    for (i = 0; i < 5; i ++) {
        printf("a[%d]の値は%dです\n" , i , a[i]);
    }
    for (i = 0; i < 5; i ++) {
        printf("b[%d]の値は%dです\n" , i , b[i]);
    }
}
