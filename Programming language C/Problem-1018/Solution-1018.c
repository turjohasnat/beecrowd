//C Solution:
#include<stdio.h>

int main(){
    int total_money;
    scanf("%d", &total_money);
    printf("%d\n", total_money);

    int note100, note50, note20, note10, note5, note2, note1;

    note100 = total_money / 100;
    total_money =  total_money % 100;

    note50 = total_money / 50;
    total_money = total_money % 50;

    note20 = total_money / 20;
    total_money = total_money % 20;

    note10 = total_money / 10;
    total_money = total_money % 10;

    note5 = total_money / 5;
    total_money = total_money % 5;

    note2 = total_money / 2;
    total_money = total_money % 2;

    note1 = total_money / 1;

    printf("%d nota(s) de R$ 100,00\n", note100 );
    printf("%d nota(s) de R$ 50,00\n", note50 );
    printf("%d nota(s) de R$ 20,00\n", note20 );
    printf("%d nota(s) de R$ 10,00\n", note10 );
    printf("%d nota(s) de R$ 5,00\n", note5 );
    printf("%d nota(s) de R$ 2,00\n", note2 );
    printf("%d nota(s) de R$ 1,00\n", note1 );

    return 0;
}
