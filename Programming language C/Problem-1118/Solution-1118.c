//C Solution:
#include<stdio.h>
int main(){
    double num, avg, sum = 0.0;
    int count = 0;
    while ( 1 ){
        scanf("%lf", &num);
        if ( num < 0.0 || num > 10.0 ){
            printf("nota invalida\n");
        }
        else {
            sum += num;
            count++;
            if ( count == 2 ){
                avg = sum/2.0;
                printf("media = %.2lf\n", avg);
                int x;
                do {
                    printf("novo calculo (1-sim 2-nao)\n");
                    scanf("%d", &x);
                }while ( x != 1 && x != 2 );
                if ( x == 2 ) break;
                sum = 0.0;
                count = 0;
            }
        }
    }
    return 0;
}
