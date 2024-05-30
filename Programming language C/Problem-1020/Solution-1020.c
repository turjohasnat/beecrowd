//C Solution:
#include<stdio.h>

int main(){
    int total_days;
    scanf("%d", &total_days);

    int years, months, days;

    years = total_days / 365;
    total_days = total_days % 365;

    months = total_days / 30;
    total_days = total_days % 30;

    days = total_days / 1;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", years, months, days);

    return 0;
}
