#include<stdio.h>

int main(){

    int u1, u2;
    int v = 3;
    int *pv;

    u1 = 2 * (v+5); // 2(3+5)
    pv = &v; //3
    u2 = 2 * (*pv+5);// 2(3*5)
    printf("\nu1 = %d    u2 = %d\n\n", u1, u2);    

    return 0;
}