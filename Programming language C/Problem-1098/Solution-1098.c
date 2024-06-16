//C Solution:
#include<stdio.h>

int main(){
    for ( float i = 0; i < 2.1; i+=0.2 ){
        for ( float j = 1; j < 4; j++){
            if ( (i > 0 && i < 1) || ( i > 1 && i <= 2) ){
            printf("I=%.1f J=%.1f\n", i, j+i );
            }
            else{
                printf("I=%d J=%d\n", (int)i, (int)j+(int)i );
            }
        }
    }
}
