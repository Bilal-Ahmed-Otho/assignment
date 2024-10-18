#include<stdio.h>

int main() {
    float fahrenheit;
	float celsius;
	
	// Temperature in fahrenheist
	
    printf("Enter temperature in fahrenheit: ");
    scanf("%f", &fahrenheit);
    
    // Fahrenheit convert into Celcius
    
	celsius = (fahrenheit - 32) * 5/9;
    
	printf("% f fahrenheit = % f celsius", fahrenheit , celsius);
    
	return 0;
}