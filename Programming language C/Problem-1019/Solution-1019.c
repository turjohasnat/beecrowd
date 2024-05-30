//C Solution:
#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int hours, minutes, seconds;

    hours = n / 3600;
    n = n % 3600;
    minutes = n / 60;
    n = n % 60;
    seconds = n / 1;

    printf("%d:%d:%d\n", hours, minutes, seconds);

    return 0;

}
