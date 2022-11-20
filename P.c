#include <stdio.h>

int main(){
    int n, a[15] = {}, b[15] = {};
    long long MatA[15][15] = {}, MatB[15][15] = {};
    scanf("%d",&n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d%d",&a[i],&b[i]);
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= a[i]; ++j) {
            for (int k = i; k <= b[i]; ++k) {
                scanf("%lld",&MatA[j][k]);

            }
        }
    }

}