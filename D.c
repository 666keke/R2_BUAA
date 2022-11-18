#include <stdio.h>

int main() {
    unsigned int n, i = 1, mul,result;
    while(scanf("%u",&n)!=EOF){
        if(n%2!=0) printf("%u\n",n%2);
        n/=2;
        i = 1;
        while(n){
            mul = 1;
            for (int j = 0; j < i; ++j) {
                mul*=2;
            }
            if((result = n%2*mul)!=0) printf("%u\n",result);
            n/=2;
            i++;
        }
    }
    return 0;
}