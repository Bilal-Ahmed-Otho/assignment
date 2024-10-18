#include<stdio.h>

int main() {
    float celsius;
	float fahrenheit;
	
	// Temperature in Celsius

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    
    //Convert Celsius into Fahrenheit

    fahrenheit = (celsius * 9/5) + 32;

    printf("% f Celsius = % f Fahrenheit\n", celsius, fahrenheit);

    return 0;
}