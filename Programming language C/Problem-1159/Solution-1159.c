//C Solution:
#include<stdio.h>
int main(){
    int x;
    while ( 1 ){
        scanf("%d", &x);
        if ( x == 0 ) break;
        int sum;
        if ( x % 2 == 0 ){
            sum = 0;
            for ( int i = 1; i <= 5; i++){
                sum += x;
                x += 2;
            }
            printf("%d\n", sum);
        }
        else {
            sum = 0;
            x++;
            for ( int i = 1; i <= 5; i++ ){
                sum += x;
                x += 2;
            }
            printf("%d\n", sum);
        }
    }
    return 0;
}
