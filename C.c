#include <stdio.h>

int main(){
    int n = 0,grade,sum = 0;
    while(~scanf("%d",&grade)){
        sum += grade;
        n++;
    }
    printf("%.2lf",(double)sum/n);
}