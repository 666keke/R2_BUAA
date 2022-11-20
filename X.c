#include <stdio.h>

int main(){
    unsigned long long C[105][105] = {};
    int n,A,B;
    C[0][0] = 1; C[1][1] = 1; C[1][0] = 1;
    scanf("%d",&n);
    for (int i = 2; i <= 100; ++i) {
        C[i][i] = 1;
        for (int j = 0; j < i; ++j) {
            if(j == 0) C[i][j] = 1;
            else C[i][j] = C[i-1][j-1] + C[i-1][j];
        }
    }
    for (int i = 0; i < n; ++i) {
        scanf("%d%d",&A,&B);
        if(A>=B) printf("%llu\n",C[A][B]);
        else printf("You're kidding me!\n");
    }
}