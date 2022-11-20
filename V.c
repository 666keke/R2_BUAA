#include<stdio.h>

int main(){
    int n, m, pieces[10005] = {},sum[10005] = {},ans = 0;
    scanf("%d%d",&n,&m);
    for (int i = 0; i < n; ++i) {
        scanf("%d",&pieces[i]);
        sum[i]=(sum[i-1]+pieces[i])%m;
        if(!sum[i]) ans = i;
    }
    for(int i=1; i<=n; i++) {
        for(int j=i; j<=n; j++) {
            if(sum[i]==sum[j]) {
                if(j-i>ans) {
                    ans=j-i;
                }
            }
        }
    }
    printf("%d",ans);
}