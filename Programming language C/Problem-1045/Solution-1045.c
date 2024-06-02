//C Solution:
#include<stdio.h>
#include<math.h>

int main(){
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a >= (b + c) || b >= (a + c) || c >= (a + b)){
        printf("NAO FORMA TRIANGULO\n");

        if ( a == b && b == c && c == a ){
            printf("TRIANGULO EQUILATERO\n");
        }
        else if ( a == b || a ==c || b == c ){
        printf("TRIANGULO ISOSCELES\n");
        }
    }
    else if ( pow(a,2) == (pow (b,2) + pow(c,2)) || pow(b,2) == (pow (a,2) + pow(c,2)) || pow(c,2) == (pow (a,2) + pow(b,2))){
        printf("TRIANGULO RETANGULO\n");

        if ( a == b && b == c && c == a ){
            printf("TRIANGULO EQUILATERO\n");
        }
        else if ( a == b || a ==c || b == c ){
        printf("TRIANGULO ISOSCELES\n");
        }
    }
    else if ( pow(a,2) > ( pow (b,2) + pow(c,2)) || pow(b,2) > ( pow (a,2) + pow(c,2)) || pow(c,2) > ( pow (a,2) + pow(b,2))){
        printf("TRIANGULO OBTUSANGULO\n");

        if ( a == b && b == c && c == a ){
            printf("TRIANGULO EQUILATERO\n");
        }
        else if ( a == b || a ==c || b == c ){
        printf("TRIANGULO ISOSCELES\n");
        }
    }
    else if ( pow(a,2) < ( pow (b,2) + pow(c,2)) || pow(b,2) < ( pow (a,2) + pow(c,2)) || pow(c,2) < ( pow (a,2) + pow(b,2))){
        printf("TRIANGULO ACUTANGULO\n");

        if ( a == b && b == c && c == a ){
            printf("TRIANGULO EQUILATERO\n");
        }
        else if ( a == b || a ==c || b == c ){
        printf("TRIANGULO ISOSCELES\n");
        }
    }
    
    return 0;
}
