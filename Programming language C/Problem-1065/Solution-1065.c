//C Solution:
#include<stdio.h>

int main(){
    int tc, num, count = 0;
    for( tc = 1; tc < 6; tc++){
        scanf("%d", &num);
        if ( num % 2 == 0 ){
            count++;
        }
    }
    printf("%d valores pares\n", count);
    return 0;
}
