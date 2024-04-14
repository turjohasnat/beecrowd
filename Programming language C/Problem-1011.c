#include<stdio.h>
#include<math.h>

int main(){
    int R;
    double result;
    double pi = 3.14159;
    scanf("%d",&R);
    result = (4.0/3)*pi*pow(R,3);
    printf("VOLUME = %.3lf\n",result);
    return 0;
}
