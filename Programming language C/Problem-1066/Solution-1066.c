//C Solution:
#include<stdio.h>

int main(){
    int negative = 0, positive = 0, even = 0, odd = 0;
    int tc = 1;
    while ( tc < 6 ){
        int num;
        scanf("%d", &num);

        if ( num < 0 ){
            negative++;
        }
        if ( num > 0 ){
            positive++;
        }
        if ( num % 2 == 0 ){
            even++;
        }
        if ( num % 2 != 0 ){
            odd++;
        }
        tc++;
    }
    
    printf("%d valor(es) par(es)\n", even);
    printf("%d valor(es) impar(es)\n", odd);
    printf("%d valor(es) positivo(s)\n", positive);
    printf("%d valor(es) negativo(s)\n", negative);
    
    return 0;
}
