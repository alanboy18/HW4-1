#include <stdio.h>
#include <stdlib.h>
#define STUDENTS 3
#define EXAMS 4

int minimun(const int grades[][EXAMS],int pupils,int tests);
int maximun(const int grades[][EXAMS], int pupils, int tests);
double average(const int setofGrades[],int tests);
void printArray(const int grades[][EXAMS], int pupils, int tests);

int main(void)
{
	int student;
	const int studentGrades[STUDENTS][EXAMS]=
	{
		{77,68,86,73},
		{96,87,89,78},
		{70,90,86,81}
	};

	printf("The array is¡G\n");
	printArray(studentGrades,STUDENTS,EXAMS);

	printf("\n\nLowest grade: %d\nHisest grade¡G %d\n",
		minimun(studentGrades,STUDENTS,EXAMS),
		maximun(studentGrades,STUDENTS,EXAMS));

	for (student = 0; student < STUDENTS; student++)
	{
		printf("The average grades for student %d is %.2f\n",
			student,average(studentGrades[student],EXAMS));
	}
	system("pause");
	return 0;
}

void printArray(const int grades[][EXAMS], int pupils, int tests)
{
	int i, j;

	printf("\t             [0]  [1]  [2]");
	
	for (i = 0; i < pupils; i++)
	{
		printf("\nstudentGrades[%d]",i);
		for (j = 0; j < tests; j++)
			printf("%-5d",grades[i][j]);
	}
}

int minimun(const int grades[][EXAMS], int pupils, int tests)
{
	int i, j, LowGrade = 100;

	for (i = 0; i < pupils; i++)
	{
		for (j = 0; j < tests; j++)
		{
			if (grades[i][j] < LowGrade)
			{
				LowGrade = grades[i][j];
			}
		}
	}
	return LowGrade;
}

int maximun(const int grades[][EXAMS], int pupils, int tests)
{
	int i, j, HighGrade = 0;

	for (i = 0; i < pupils; i++)
	{
		for (j = 0; j < tests; j++)
		{
			if (grades[i][j] > HighGrade)
			{
				HighGrade = grades[i][j];
			}
		}
	}
	return HighGrade;
}

double average(const int setofGrades[], int tests)
{
	int i, total=0;

	for (i = 0; i < tests; i++)
	{
		total += setofGrades[i];
	}
	return (double)total / tests;
}
