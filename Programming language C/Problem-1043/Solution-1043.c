//C Solution:
#include<stdio.h>

int main(){
    float a, b, c, perimetro, area;
    scanf("%f %f %f", &a, &b, &c);

    perimetro = a + b + c;
    area =  ((a + b)/2) * c;

    if ( a+b>c && b+c>a && c+a>b ){
        printf("Perimetro = %.1f\n", perimetro);
    }
    else {
    printf("Area = %.1f\n", area);
    }
    return 0;
}
