#include <locale.h>
#include <math.h>
#include <time.h>
#include <stdio.h>
#include<iostream>
#include<stdlib.h>


void newMassiv(int *pt, int len)
{
	for (int i = 0; i < len; i++)
	{
		*(pt + i) = -50 + rand() % 100;
	}
}
void PrintMassiv(int *pt, int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%d\t", *(pt + i));
	}
	printf("\n");
}
void Men0(int *pt, int len)
{
	int summ = 0;
	for (int i = 0; i < len; i++)
	{
		if (*(pt + i) < 0);
		summ += *(pt + i);
	}
	printf("%d\n", summ);
}
void MassivOp(int *pt, int len, int *pt2, int *pt3, int *chet, int *chet2)
{
	for (int i = 0; i < len; i++)
	{
		if (*(pt + i) < 0)
		{
			*(pt2 + *chet - 1) = *(pt + i);
			*chet += 1;
			pt2 = (int*)realloc(pt2, (sizeof(int)**chet));
		}
		if (*(pt + i) > 0)
		{
			*(pt3 + *chet2 - 1) = *(pt + i);
			*chet2 += 1;
			pt3 = (int*)realloc(pt3, (sizeof(int)**chet2));
		}
	}
}

void summ(int *pt, int len)
{
	int summ = 0;
	for (int i = 0; i < len; i++)
	{
		summ += *(pt + i);
	}
	printf("%d\n", summ);
}

void Mass10(int *pt, int len, int *pt2, int *chet)
{
	for (int i = 0; i < len; i++)
	{
		if (abs(*(pt + i)) > 10)
		{
			*(pt2 + *chet - 1) = *(pt + i);
			*chet += 1;
			pt2 = (int*)realloc(pt2, (sizeof(int)**chet));
		}

	}
}
void sredd(int *pt, int len)
{
	int summ = 0;
	for (int i = 0; i < len; i++)
	{
		summ += *(pt + i);
	}
	printf("%d\n", summ / len);
}
void MassBol(int *pt, int len, int *pt2, int *chet)
{
	for (int i = 0; i < len; i++)
	{
		if (*(pt + i) > 0)
		{
			*(pt2 + *chet - 1) = *(pt + i);
			*chet += 1;
		}

	}
}

void VozPol(int *pt, int len)
{
	int summ = 0;
	for (int i = 0; i < len; i++)
	{
		if (*(pt + i) < *(pt + i + 1))
		{
			summ = 1;
			break;
		}


	}
	if (summ == 0)
		printf("Возрастающе положительное\n");

	else
		printf("Не возрастающее\n");
}
void MassBol2(int *pt, int len, int *pt2, int *chet)
{
	for (int i = 0; i < len; i++)
	{
		if (*(pt + i) > 0)
		{
			*(pt2 + *chet - 1) = *(pt + i);
			*chet += 1;
		}
		else
		{
			break;
		}

	}
}

void VozOtr(int *pt, int len)
{
	int summ = 0;
	for (int i = 0; i < len; i++)
	{
		if (*(pt + i) > *(pt + i + 1))
		{
			summ = 1;
			break;
		}


	}
	if (summ == 0)
		printf("Нет\n");

	else
		printf("Да\n");
}
void Mass37(int *pt, int len, int *pt2, int *chet)
{
	for (int i = 0; i < len; i++)
	{
		if (*(pt + i) <-3 && *(pt + i)>7)
		{
			*(pt2 + *chet - 1) = *(pt + i);
			*chet += 1;
		}
	}
}
void Pol(int *pt, int len)
{
	int summ = 0;
	for (int i = 0; i < len; i++)
	{
		if (*(pt + i) < 0)
		{
			summ *= *(pt + i);
			break;
		}


	}
	printf("%d\n", summ);
}
void No5(int *pt, int len, int *pt2, int *chet)
{
	for (int i = 0; i < len; i++)
	{
		if (*(pt + i) % 5 != 0)
		{
			*(pt2 + *chet - 1) = *(pt + i);
			*chet += 1;
		}
	}
}
void No33(int *pt, int len, int *pt2, int *chet)
{
	for (int i = 0; i < len; i++)
	{
		if (*(pt + i) != 33)
		{
			*(pt2 + *chet - 1) = *(pt + i);
			*chet += 1;
		}
		else {
			break;
		}
	}
}
void Modul12(int *pt, int len, int *pt2, int *chet)
{
	for (int i = 0; i < len; i++)
	{
		if (abs(*(pt + i))>12)
		{
			*(pt2 + *chet - 1) = *(pt + i);
			*chet += 1;
		}
	}
}
void menyashka(int *pt, int len)
{
	int temp = *(pt);
	*(pt) = *(pt + len);
	*(pt + len) = temp;
}
void M213(int *pt, int len, int *pt2, int *chet)
{
	for (int i = 0; i < len; i++)
	{
		if (abs(*(pt + i))>2 && abs(*(pt + i))<13)
		{
			*(pt2 + *chet - 1) = *(pt + i);
			*chet += 1;
		}
	}
}
void Bol10(int *pt, int len)
{
	int max = *(pt);
	for (int i = 0; i < len; i++)
	{
		if (max < *(pt + i))
			max = *(pt + i);
	}
	printf("%d", max);
}