//C Solution:
#include<stdio.h>
int main(){
    int count_alcohol = 0, count_gasoline = 0, Count_diesel = 0;
    while ( 1 ){
        int n;
        scanf("%d", &n);
        if ( n == 4 ) break;
        if ( n == 1 ) count_alcohol++;
        else if ( n == 2 ) count_gasoline++;
        else if ( n == 3 ) Count_diesel++;
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", count_alcohol);
    printf("Gasolina: %d\n", count_gasoline);
    printf("Diesel: %d\n", Count_diesel);
    return 0;
}
