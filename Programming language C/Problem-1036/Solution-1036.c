//C Solution:
#include<stdio.h>
#include<math.h>

int main(){
    double a, b, c, r1, r2;
    scanf("%lf %lf %lf", &a, &b, &c);

    r1 = (-b + sqrt(pow(b,2)-(4*a*c))) / (2*a);
    r2 = (-b - sqrt(pow(b,2)-(4*a*c))) / (2*a);

    if ( r1 > 0 || r1 < 0 && r2 > 0 || r2 < 0 && a!=0){
        printf("R1 = %.5lf\nR2 = %.5lf\n", r1, r2);
    }
    else{
        printf("Impossivel calcular\n");
    }

    return 0;
}
