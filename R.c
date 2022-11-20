#include <stdio.h>

int main(){
    int n,maxBuy, maxSell;
    long long price[10005] = {}, profit, profit0 = 0;
    while(~scanf("%d",&n)){
        profit0 = 0;
        for (int i = 0; i < n; ++i) {
            scanf("%lld",&price[i]);
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < i; ++j) {
                profit = price[i] - price[j];
                if(profit > profit0){
                    profit0 = profit;
                    maxBuy = j; maxSell = i;
                }
             }
        }
        if(profit0 == 0) printf("No profit!\n");
        else printf("%lld %d %d\n",profit0,maxBuy+1,maxSell+1);
    }
}