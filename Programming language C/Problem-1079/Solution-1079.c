//C Solution:
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    for ( int tc = 1; tc <= n; tc++){
        float num1, num2, num3;
        scanf("%f %f %f", &num1, &num2, &num3);
        float sum = ( num1 * 2 ) + ( num2 * 3 ) + ( num3 * 5 );
        float avg = sum / 10;
        printf("%.1f\n", avg);
    }

    return 0;

}
