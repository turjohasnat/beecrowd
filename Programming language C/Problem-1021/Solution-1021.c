//C Solution:
#include<stdio.h>

int main(){
    double n;
    scanf("%lf", &n);

    int note100, note50, note20, note10, note5, note2, coin1, coin0_50, coin0_25, coin0_10, coin0_05, coin0_01,total_money;

    total_money = n * 100;
    note100 = total_money / 10000;
    total_money =  total_money % 10000;

    note50 = total_money / 5000;
    total_money = total_money % 5000;

    note20 = total_money / 2000;
    total_money = total_money % 2000;

    note10 = total_money / 1000;
    total_money = total_money % 1000;

    note5 = total_money / 500;
    total_money = total_money % 500;

    note2 = total_money / 200;
    total_money = total_money % 200;

    coin1 = total_money / 100;
    total_money = total_money % 100;

    coin0_50 = total_money / 50;
    total_money = total_money % 50;

    coin0_25 = total_money / 25;
    total_money = total_money % 25;

    coin0_10 = total_money / 10;
    total_money = total_money % 10;

    coin0_05 = total_money / 5;
    total_money = total_money % 5;

    coin0_01 = total_money / 1;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", note100 );
    printf("%d nota(s) de R$ 50.00\n", note50 );
    printf("%d nota(s) de R$ 20.00\n", note20 );
    printf("%d nota(s) de R$ 10.00\n", note10 );
    printf("%d nota(s) de R$ 5.00\n", note5 );
    printf("%d nota(s) de R$ 2.00\n", note2 );
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", coin1 );
    printf("%d moeda(s) de R$ 0.50\n", coin0_50 );
    printf("%d moeda(s) de R$ 0.25\n", coin0_25 );
    printf("%d moeda(s) de R$ 0.10\n", coin0_10 );
    printf("%d moeda(s) de R$ 0.05\n", coin0_05 );
    printf("%d moeda(s) de R$ 0.01\n", coin0_01 );

    return 0;
}
