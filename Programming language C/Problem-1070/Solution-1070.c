//C Solution:
#include<stdio.h>

int main(){
    int num;
    scanf("%d", &num);
    int tc = 1;
    while ( tc < 7 ){
        if ( num % 2 != 0 ){
            printf("%d\n", num);
            tc++;
        }
        num++;
    }

    return 0;

}
