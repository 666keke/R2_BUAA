#include <stdio.h>

int main() {
    long long current = 0, n, price, price0 = 0;
    scanf("%lld", &n);
    scanf("%lld", &price0);
    for (long long i = 1; i < n; ++i) {
        scanf("%lld", &price);
        if (price > price0){
            current += (price-price0);
        }
        price0 = price;
    }
    printf("%lld", current);
}