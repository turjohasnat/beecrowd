//C Solution:
#include<stdio.h>
int main(){
    double avg, num;
    double sum = 0.0;;
    int count = 0;
    while ( 1 ){
        if ( count == 2 )break;
        scanf("%lf", &num);
        if ( num >= 0.0 && num <= 10.0 ){
            count++;
            sum += num;
        }
        else printf("nota invalida\n");
    }
    avg = sum/2.0;
    printf("media = %.2lf\n", avg);
    return 0;
}
