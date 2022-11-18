#include <stdio.h>
#include <stdlib.h>
long long gcd(long long a, long long b){
    if(b==0) return a;
    return gcd(b,a%b);
}
int main(){
    long long a, b, c, d, x, y, gcd0;
    int op;
    while(~scanf("%lld/%lld%lld/%lld%d",&a,&b,&c,&d,&op)){
        gcd0 = gcd(llabs(a),llabs(b)); a /= gcd0; b/= gcd0;
        gcd0 = gcd(llabs(c),llabs(d)); c /= gcd0; d/= gcd0;
        if(op==1) {
            y = b * d / gcd(llabs(b),llabs(d));
            x = a * (y / b) + c * (y / d);
        }
        if(op==2) {
            y = b * d / gcd(llabs(b), llabs(d));
            x = a * (y / b) - c * (y / d);
        }
        if(op==3) {
            y = b * d;
            x = a * c;
            gcd0 = gcd(llabs(x), llabs(y));
            y = y / gcd0;
            x = x / gcd0;
        }
        if(op==4) {
            y = b * c;
            x = a * d;
            gcd0 = gcd(llabs(x), llabs(y));
            y = y / gcd0;
            x = x / gcd0;
        }
        if(x%y == 0) printf("%lld\n",x/y);
        else if (y<0) printf("%lld/%lld\n",(-x/gcd(llabs(x),llabs(y))),(-y/gcd(llabs(x),llabs(y))));
        else printf("%lld/%lld\n",(x/gcd(llabs(x),llabs(y))),(y/gcd(llabs(x),llabs(y))));
    }
}