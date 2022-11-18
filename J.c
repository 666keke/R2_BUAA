#include <stdio.h>

int main(){
    int n;
    long long a[55] = {1,1};
    scanf("%d",&n);
    for (int i = 2; i < n+1; ++i) {
        a[i] = a[i-1] + a[i-2];
    }
    printf("%lld %lld",a[n],a[n-1]);
}