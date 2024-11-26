#include <stdio.h>
#include<ctype.h>

int main()
{
    char unit;
    float temp;

    printf("\nIs the temperature in (F) or (C)? ");
    scanf("%c", &unit);

    unit = toupper(unit);

    if (unit == 'F'){
        printf("\nEnter temperature in Farenheit: ");
        scanf("%f",&temp);
        temp = ((temp-32)*5)/9;
        printf("Temperature in Celsius will be %.1f",temp);
    }
    else if (unit == 'C'){
        printf("\nEnter temperature in Celsius: ");
        scanf("%f",&temp);
        temp = (temp * 9/5) + 32;
        printf("Temperature in Farenheit will be %.1f",temp);
    }
    else {
        printf("%c is not a valid unit of measurement!");
    } 
}
