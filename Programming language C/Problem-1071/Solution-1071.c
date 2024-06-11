//C Solution:
#include<stdio.h>

int main(){
    int sum = 0;
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    int max, min;
    if ( num1 < num2 ){
        max = num2;
        min = num1;
    }
    else {
        max = num1;
        min = num2;
    }

    for ( int tc = ( min + 1); tc < max; ++tc){
        if ( tc % 2 != 0 ){
            sum+= tc;
        }
    }
    printf("%d\n",sum);

    return 0;
}
