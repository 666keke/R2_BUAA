#include <stdio.h>

int main(){
    int n, m, K, Q, lux, luy, rdx, rdy, x, y;
    int map[305][305] = {0}, last[305][305];
    scanf("%d%d%d%d",&n,&m,&K,&Q);
    for (int i = 0; i < K; ++i) {
        scanf("%d%d%d%d",&lux,&luy,&rdx,&rdy);
        for (int j = lux; j <= rdx; ++j) {
            for (int k = luy; k <= rdy; ++k) {
                map[j][k]++;
                last[j][k] = i+1;
            }
        }
    }
    for (int i = 0; i < Q; ++i) {
        scanf("%d%d",&x,&y);
        if(map[x][y]>0) printf("Y %d %d\n",map[x][y],last[x][y]);
        else printf("N\n");
    }
}