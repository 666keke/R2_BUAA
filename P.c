#include <stdio.h>

void mult(int A[][15], int B[][15], int C[][15], int r, int c){
    for (int i = 0; i < r; i++){
        for (int j = 0; j < r; j++){
            C[i][j] = 0;
            for (int k = 0; k < c; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
    }
}

int main(){
    int n;
    int a[20] = {}, b[20] ={}, MATa[15][15] = {}, MATb[15][15] = {};
    scanf("%d",&n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d%d",&a[i],&b[i]);
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= a[i]; ++j) {
            for (int k  = 1; k <= b[i]; ++k) {
                scanf("%d",&MATa[i][k]);
            }
        }

    }

}