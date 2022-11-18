#include <stdio.h>

int find(int x[], int key, int n) {
    int j;
    for (j = 0; j < n; j++)
        if (x[j] == key)
            return j;
    return -1;
}

int main() {
    int a[1001], i = 1, temp, result, h = 0, result1, temp1;
    scanf("%d", &a[0]);
    while (~scanf("%d", &a[i])) {
        if (a[i] > a[i - 1])
            temp = a[i];
        else
            temp = a[i - 1];
        result = find(a, a[i], i);
        if (result == -1) {
            h = 0;
            printf("%d\n", temp);
        } else {
            h = 1;
            temp1 = 2 * a[i];
            for (int k = 0; k < i; k++) {
                result1 = find(a, temp1, i);
                if (result1 == -1) {
                    temp += a[i];
                    printf("%d\n", temp);
                } else {
                    temp += temp1;
                    temp1 *= 2;
                    printf("%d\n", temp);
                }
            }
        }
        i++;
    }
    if (h == 0) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", a[j]);
        }
    }
    if (h == 1) {
        printf("%d", temp);
    }
    return 0;

}

//#include<stdio.h>
//int main()
//{
//    int hour1,hour2,min1,min2,uhour1,uhour2,umin1,umin2,sum1,sum2,utc1,utc2;
//    char u1,u2;
//    scanf("%d:%d %c%d",&hour1,&min1,&u1,&utc1);
//    scanf("%d:%d %c%d",&hour2,&min2,&u2,&utc2);
//    uhour1=utc1/100;
//    uhour2=utc2/100;
//    umin1=utc1%100;
//    umin2=utc2%100;
//    if(u1=='+')
//    {
//        sum1=hour1*60+min1-uhour1*60-umin1;
//        if(sum1<0)
//        {
//            sum1=24*60+sum1;
//        }
//    }
//    else if(u1=='-')
//    {
//        sum1=hour1*60+min1+uhour1*60+umin1;
//        if(sum1>=24*60)
//        {
//            sum1=sum1-24*60;
//        }
//    }
//    else if(u1==' ')
//    {
//        sum1=hour1*60+min1+uhour1*60+umin1;
//    }
//    if(u2=='+')
//    {
//        sum2=hour2*60+min2-uhour2*60-umin2;
//        if(sum2<0)
//        {
//            sum2=24*60+sum2;
//        }
//    }
//    else if(u2=='-')
//    {
//        sum2=hour2*60+min2+uhour2*60+umin2;
//        if(sum2>=24*60)
//        {
//            sum2=sum2-24*60;
//        }
//    }
//    else if(u2==' ')
//    {
//        sum2=hour2*60+min2-uhour2*60-umin2;
//    }
//    if(sum1>sum2)
//        printf("1");
//    else if(sum1<sum2)
//        printf("2");
//    else
//        printf("Same Time");
//    return 0;
//}