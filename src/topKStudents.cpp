/*
OVERVIEW:  You are given scores for students of a class in alphabetical order. Write a function that returns the names and scores of top K students.
Input is array of structures of type student (each student has name and score).
E.g.: If input is [ { "stud1", 20 }, { "stud2", 30 }, { "stud3", 40 } ] (three students with marks 20, 30 , 40) and K value is 2.
return top 2 students [ { "stud2", 30 }, { "stud3", 40 } ]

INPUTS: array of structures of type student, length of the array, integer K.

OUTPUT: Return top K students from array. Output need not be in decreasing order of scores.

ERROR CASES: Return NULL for invalid inputs.

NOTES:
*/

#include <iostream>
#include <malloc.h>

struct student {
	char *name;
	int score;
};

struct student ** topKStudents(struct student *students, int len, int K) {
	
	int index1, index2, temp;
	struct student *top;

	
	top = (struct student*)calloc(K, sizeof(student));
	if(students == NULL || len <= 0||K<=0)
		return NULL;

	printf("dfd");

	for (index1 = 0; index1 <len; index1++)
	{
		for (index2 = index1; index2 < len; index2++)
		{
			if (students[index1].score < students[index2].score)
			{
				temp = students[index1].score;
				students[index1].score = students[index2].score;
				students[index2].score = temp;
			}
		}
		
	}
	for (index1 = 0; index1 < K; index1++)
	{
		
		top[index1].name = students[index1].name;
		top[index1].score = students[index1].score;
	}
	
	return &students;
}