//C Solution:
#include<stdio.h>

int main(){
    float num, tc;
    int count = 0;
    for ( tc = 1; tc <= 6; tc++){
        scanf("%f", &num);
        if ( num > 0){
            count++;
        }
    }
    printf("%d valores positivos\n", count);
    return 0;
}
