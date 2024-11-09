#include<stdio.h>

int main(void)

{
	int i;
	float numbers[] = { 3.3, 4.4, 5.2, 2.3, 4.5, 6.8, 9.8, 8.2, 7.5, 9.2 };   // initialized an array numbers[].
	float biggerNumbers[10];               // biggerNumbers[] array.
	float* source = numbers;               // pointer source pointing to first element of array numbers[].
	float* copy = biggerNumbers;           // pointer copy pointing to first element of arrat biggerNumbers[].

	for (i = 0; i < 10; i++)
	{
		*copy = *source; // deferencing source and copying to dereference copy.
		copy++; //pointer increment by 1*4(float) = 4, means next index after 0.
		source++;
	}

	// float* biggerEnd = numbers;
	float* biggerStart = biggerNumbers;
	float* middle1;
	middle1 = biggerStart + 4;
	float* middle2 = middle1 + 1;

	for (middle1; middle1 >= biggerStart; middle1--, middle2++)
	{
		printf("%0.1f\n", *middle1);
		printf("%0.1f\n", *middle2);
	}
	return 0;
}