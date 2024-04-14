#include<stdio.h>

int main(){
    int total_distance;
    scanf("%d",&total_distance);

    float total_fuel,average_consumption;
    scanf("%f",&total_fuel);

    average_consumption = total_distance/total_fuel;

    printf("%.3f km/l\n",average_consumption);
    
    return 0;
}
