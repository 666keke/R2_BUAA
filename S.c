#include <stdio.h>
#include <string.h>
int main(){
    int loc;
    char ch[100005] = {}, ch1[10005] = {};
    gets(ch);
    while(~scanf("%s",ch1)){
        scanf("%d",&loc);
        memcpy(&ch[loc],ch1,strlen(ch1)+1);
    }
    puts(ch);
}