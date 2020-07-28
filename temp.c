#include <stdio.h>

int main()
{

    float celsius;
    printf("Enter The Temp In Celsius : ");
    scanf("%f", &celsius);
    float far = (celsius * 9 / 5) + 32;
    printf("This Temprature In Fahrenheits = %f", far);

    return 0;
}