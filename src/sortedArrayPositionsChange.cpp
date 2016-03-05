/*
OVERVIEW: In a given ascending sorted array, two numbers are changed their position, please fix those two numbers.
E.g.: In [10, 40, 30, 20, 50] 20 and 40 are swapped, so final output will be [10, 20, 30, 40, 50]

INPUTS: Ascending sorted array with two positions swapped, length of the array.

OUTPUT: Update sorted array by fixing swapped numbers.

ERROR CASES: Return NULL for invalid Inputs.

NOTES:
*/

#include <stdio.h>

void * sortedArrayPositionsChange(int *Arr, int len)
{

		int index, p1, temp;
		int p2=0;

		if (Arr == NULL || len <= 0)
			return NULL;
		
		for (index = 0; index < len; index++)
		{
			if (Arr[index] > Arr[index + 1])
			{
				p1 = index;
				temp = index;
				break;
			}

		}
		for (index = (temp + 1); index < len; index++)
		{
			if (Arr[index]>Arr[index + 1])
			{
				p2 = index + 1;
				break;
			}
		}
		temp = Arr[p1];
		Arr[p1] = Arr[p2];
		Arr[p2] = temp;
		
		return Arr;
	

}