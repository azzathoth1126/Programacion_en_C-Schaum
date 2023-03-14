#include<stdio.h>

int main(){

    int u = 3, v;
    int *pu, *pv;

    pu = &u;
    v = *pu;
    pv = &v;

    printf("\n u=%d \t &u=%x \t pu=%x \t *pu=%d", u, &u, pu, *pu);
    printf("\n v=%d \t &v=%x \t pv=%x \t *pv=%d", v, &v, pv, *pv);

    printf("\n\n");

    return 0;
}