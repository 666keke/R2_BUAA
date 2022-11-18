#include <stdio.h>

int main(){
    long long k, kMax = 0;
    int c[1020] = {};
    while(~scanf("%lld",&k)){
        if (k>kMax) kMax = k;
        c[k]++;
        for (int i = 0; i <= kMax; ++i) {
            while(c[i] > 1){
                c[i] -= 2;
                c[i+1]++;
                if (i+1>kMax) kMax = i+1;
            }
        }
        printf("%lld\n",kMax);
    }
    for (int i = 0; i <= kMax; ++i) {
        if(c[kMax-i]!=0) printf("%lld ",kMax-i);
    }
}