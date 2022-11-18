#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int n, m, K, Q, time, num, j;
    scanf("%d%d%d%d", &n, &m, &K, &Q);
    int a[25], b[25], c[25], d[25], M[25], N[25];
    for (int i = 0; i < K; i++) scanf("%d%d%d%d", &a[i], &b[i], &c[i], &d[i]);
    for (int i = 0; i < Q; i++) {
        time = 0;
        scanf("%d%d", &M[i], &N[i]);
        for (int i = 0; i < K; i++) {
            if (M[i] >= a[i] && M[i] <= c[i] && N[i] >= b[i] && N[i] <= d[i]) time++;
        }
        if (time != 0) {
            for (j = K - 1; j >= 0; j--) {
                if (M[j] >= a[j] && M[j] <= c[j] && N[j] >= b[j] && N[j] <= d[j]) {
                    num = j + 1;
                    break;
                }
            }
        }
        if (time == 0) printf("N\n");
        else printf("Y %d %d\n", time, num);
    }
    return 0;
}