//C Solution:
#include<stdio.h>
#include<math.h>

int main(){

    float A,B,C;
    double pi,TRIANGULO,CIRCULO,TRAPEZIO,QUADRADO,RETANGULO;

    scanf("%f",&A);
    scanf("%f",&B);
    scanf("%f",&C);

    pi = 3.14159;
    
    TRIANGULO = 0.5*A*C;
    CIRCULO = pi*pow(C,2);
    TRAPEZIO = ((A+B)/2)*C;
    QUADRADO = pow(B,2);
    RETANGULO = A*B;
    
    printf("TRIANGULO: %.3lf\n",TRIANGULO);
    printf("CIRCULO: %.3lf\n",CIRCULO);
    printf("TRAPEZIO: %.3lf\n",TRAPEZIO);
    printf("QUADRADO: %.3lf\n",QUADRADO);
    printf("RETANGULO: %.3lf\n",RETANGULO);
    
    return 0;
}
