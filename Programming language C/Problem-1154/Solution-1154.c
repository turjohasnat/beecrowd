//C Solution:
#include<stdio.h>
int main(){
    float n, avg;
    int sum = 0, count = 0;
    while ( 1 ){
        scanf("%f", &n);
        if ( n <= 0 ) break;
        sum += n;
        count++;
    }
    avg =(float) sum / count;
    printf("%.2f\n", avg);
    return 0;
}
