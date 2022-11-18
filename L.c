#include <stdio.h>
#include <stdlib.h>
int m;
int compare (const void * a, const void * b)
{
    if(abs(*(int*)a-m)<abs(*(int*)b-m)) return -1;
    if(abs(*(int*)a-m)>abs(*(int*)b-m)) return 1;
    if(*(int*)a<*(int*)b) return -1;
    if(*(int*)a>*(int*)b) return 1;
    return 0;
}

int main(){
    int n, a[1005];
    scanf("%d%d",&n,&m);
    for (int i = 0; i < n; ++i) {
        scanf("%d",&a[i]);
    }
    qsort(a,n,sizeof(int),compare);
    for (int i = 0; i < n; ++i) {
        printf("%d\n",a[i]);
    }
}