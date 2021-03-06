/*
OVERVIEW:  given an array that has duplicate values remove all duplicate values.
E.g.: input: [1, 1, 2, 2, 3, 3], output [1, 2, 3]

Ex 2: [4,4,2,2,1,5] output : [4,2,1,5]

INPUTS: Integer array and length of the array .

OUTPUT: Update input array by removing duplicate values and return the final array length

ERROR CASES: Return -1 for invalid inputs.

NOTES: Don't create new array, try to change the input array.
*/

#include <stdio.h>


int removeArrayDuplicates(int *Arr, int len)
{
	int index1, index2, index3;

	if (Arr == NULL || len <= -1)
		return -1;

	for (index1 = 0; index1 < len; index1++)
	{
		for (index2 = (index1 + 1); index2 < len; index2++)
		{
			if (Arr[index1] == Arr[index2])
			{
				for (index3 = index2; index3 < len; index3++)
					Arr[index3] = Arr[index3 + 1];
				len--;
			}
		}
	}
	return len;
}