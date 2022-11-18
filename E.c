#include <stdio.h>

int main(){
    unsigned long long n;
    while(~scanf("%llu",&n)){
        int digit[70] = {0};
        for (int i = 0; i < 64; ++i) {
            digit[63-i] = n%2;
            n/=2;
        }
        for (int i = 0; i < 64; ++i) {
            printf("%d",digit[i]);
        }
        putchar('\n');
    }
}