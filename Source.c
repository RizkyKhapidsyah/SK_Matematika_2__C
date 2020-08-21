#include <stdio.h>
#include <conio.h>

int main()
{
	float a;
    float b = 5.0;

	printf("Input a number: ");
	scanf_s("%f",&a);
	printf("%f / %f = %f\n",a,b,a/b);

	_getch();
	return(0);
}