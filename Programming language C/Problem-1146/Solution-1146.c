//C Solution:
#include<stdio.h>
int main(){
    while (1){
        int x;
        scanf("%d", &x);
        if ( x == 0 ) break;
        else {
            for ( int i = 1; i <= x; i++ ){
                printf("%d", i );
                if ( i % x == 0 ) printf("\n");
                else printf(" ");
            }
        }
    }
    return 0;
}
