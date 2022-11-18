#include <stdio.h>

int main(){
    int nbsi[15] = {}, check, sum = 0;
    nbsi[0] = getchar()-48;
    sum += nbsi[0] * 1;
    getchar();
    for (int i = 1; i < 4; ++i) {
        nbsi[i] = getchar()-48;
        sum += nbsi[i] * (i+1);
    }
    getchar();
    for (int i = 4; i < 9; ++i) {
        nbsi[i] = getchar()-48;
        sum += nbsi[i] * (i+1);
    }
    getchar();
    check = getchar();
    if(sum%11==check-48 || sum%11==10&&check=='X') printf("Right");
    else{
        printf("%d",nbsi[0]);
        putchar('-');
        for (int i = 1; i < 4; ++i) {
            printf("%d",nbsi[i]);
        }
        putchar('-');
        for (int i = 4; i < 9; ++i) {
            printf("%d",nbsi[i]);
        }
        putchar('-');
        if(sum%11==10) putchar('X');
        else printf("%d",sum%11);
    }

}