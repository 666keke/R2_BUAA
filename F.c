#include <stdio.h>

int main(){
    unsigned int i, j;
    unsigned int b;
    unsigned int r;
    while(~scanf("%d%d%d",&b,&i,&j)){
        unsigned int x = ((b >> i) ^ (b >> j)) & ((1U << 1) - 1);
        r = b ^ ((x << i) | (x << j));
        printf("%d\n",r);
    }
}
