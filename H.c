#include <stdio.h>

int toTime(int hr, int min, char op, int lag) {
    int time = hr * 60 + min;
    lag = lag % 100 + (lag / 100) * 60;
    if (op == '+') time -= lag;
    else time += lag;
    if (time > 1440) time -= 1440;
    if (time < 0) time += 1440;
    return time;
}

int main() {
    int hr, min, lag, time1, time2;
    char op;
    scanf("%d:%d %c%d", &hr, &min, &op, &lag);
    time1 = toTime(hr, min, op, lag);
    scanf("%d:%d %c%d", &hr, &min, &op, &lag);
    time2 = toTime(hr, min, op, lag);
    if (time1 > time2) printf("1");
    else if (time1 == time2) printf("Same Time");
    else printf("2");
}