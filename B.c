#include <stdio.h>

int main(){
    int n;
    double a, b, c, p;
    scanf("%d",&n);
    while(n--){
        scanf("%lf%lf%lf",&a,&b,&c);
        p = 0.5*(a+b+c);
        printf("%.1lf\n",p*(p-a)*(p-b)*(p-c));
    }
}