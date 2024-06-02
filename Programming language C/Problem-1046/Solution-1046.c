//C Solution:
#include<stdio.h>

int main(){
    int start, end, duration;
    scanf("%d %d", &start, &end);

    if ( start > end ){
        duration = (24 + end) - start;
        printf("O JOGO DUROU %d HORA(S)\n", duration);
    }
    else if ( start < end ){
        duration = end - start;
        printf("O JOGO DUROU %d HORA(S)\n", duration);
    }
    else {
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    
    return 0;
}
