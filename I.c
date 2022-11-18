#include <stdio.h>

void move(int i, char x, char y){
    printf("move %d from %c to %c\n",i,x,y);
}
void hanoi(int n, char a, char b, char c){
    if(n==1){
        move(n,a,c); return;
    }
    hanoi(n-1,a,c,b);
    move(n,a,c);
    hanoi(n-1,b,a,c);
}

int main(){
    int num;
    char a,b,c;
    scanf("%d %c %c %c",&num,&a,&b,&c);
    hanoi(num,a,b,c);
    return 0;
}