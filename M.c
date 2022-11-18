#include <stdio.h>
#include <stdlib.h>

int main(){
    char a[105][1005] ={};
    int n,m;
    int count, countMin = 2147483647;
    scanf("%d%d\n",&n,&m);
    for (int i = 0; i < m; ++i) {
        gets(a[i]);
    }
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < i; ++j) {
            count = 0;
            for (int k = 0; k < n; ++k) {
                count += abs(a[i][k] - a[j][k]);
            }
            if (count<countMin) countMin = count;
        }
    }
    printf("%d",countMin);
}