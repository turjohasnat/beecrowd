//C Solution:
#include<stdio.h>

int main(){
    float avg, num, sum = 0.0;
    int tc, count = 0;
    for( tc = 1; tc <= 6; tc++){
        scanf("%f", &num);
        if ( num > 0 ){
            sum = sum + num;
            count++;
        }
        
    }
    avg = sum / count;
    printf("%d valores positivos\n%.1f\n", count, avg );


    return 0;
}
