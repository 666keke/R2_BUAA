#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int a, b, c, d, op;
    while (~scanf("%d/%d %d/%d %d", &a, &b, &c, &d, &op)) {
        int fz, fm;
        switch (op) {
            case 1:
                fz = a * d + c * b, fm = b * d;
                break;
            case 2:
                fz = a * d - c * b, fm = b * d;
                break;
            case 3:
                fz = a * c, fm = b * d;
                break;
            case 4:
                fz = a * d, fm = b * c;
                break;
        }
        int bs = 0;
        if (fz < 0)
            bs = 1, fz = -fz;
        if (bs)
            printf("-");
        if (fz % fm == 0)
            printf("%d\n", fz / fm);
        else
            printf("%d/%d\n", fz / gcd(fz, fm), fm / gcd(fz, fm));
    }
    return 0;
}