//C Solution:
#include<stdio.h>
#include<math.h>

int main(){
    int num, result;
    scanf("%d", &num);

    for ( int tc = 2; tc <= num; tc+=2 ){
        result = pow(tc,2);
        printf("%d^2 = %d\n", tc, result);
    }

    return 0;

}
