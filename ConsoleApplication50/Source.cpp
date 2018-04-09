#include <locale.h>
#include <math.h>
#include <time.h>
#include <stdio.h>
#include<iostream>
#include"Header.h"
#include<stdlib.h>

char f;
void main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "rus");
	do {
		int N;
		printf("введите задание");
		scanf("%d", &N);
		switch (N)
		{
		case 1:
		{
			/*1.	Ввести вещественные числа. Создать массив из этих чисел, пока не встретится число 10. Вычислить сумму отрицательных элементов массива*/
			int *pt = NULL;
			pt = (int*)malloc(sizeof(int));
			int chet = 1;
			int chislo = 0;
			while (chislo != 10)
			{
				printf("Введите число");
				scanf("%d", (pt + chet - 1));
				chislo = *(pt + chet - 1);
				chet++;
				pt = (int*)realloc(pt, (sizeof(int)*chet));
			}
			PrintMassiv(pt, chet - 1);
			Men0(pt, chet - 1);
		}
		break;
		case 2:
		{
			/*2.	Ввести в StringGrid массив из 10 целых чисел. Создать два новых массива – из положительных и отрицательных элементов исходного массива. Определить суммы элементов каждого массива.*/
			int *pt = NULL;
			pt = (int*)malloc(sizeof(int) * 10);
			int *pt2 = NULL;
			pt2 = (int*)malloc(sizeof(int) * 10);
			int *pt3 = NULL;
			pt3 = (int*)malloc(sizeof(int) * 10);
			int chet = 1;
			int chet2 = 1;
			newMassiv(pt, 10);
			PrintMassiv(pt, 10);
			MassivOp(pt, 10, pt2, pt3, &chet, &chet2);
			PrintMassiv(pt2, chet - 1);
			PrintMassiv(pt3, chet2 - 1);
			summ(pt2, chet - 1);
			summ(pt3, chet2 - 1);

		}
		break;
		case 3:
		{
			/*3.	Ввести массив из 9 вещественных чисел. Создать новый массив из элементов исходного, которые по модулю больше 10. Вычислить среднее арифметическое элементов нового массива*/
			int *pt = NULL;
			pt = (int*)malloc(sizeof(int) * 9);
			newMassiv(pt, 9);
			PrintMassiv(pt, 9);
			int *pt2;
			pt2 = (int*)malloc(sizeof(int) * 9);
			int chet = 1;
			Mass10(pt, 9, pt2, &chet);
			PrintMassiv(pt2, chet - 1);
			sredd(pt2, chet - 1);
		}
		break;
		case 4:
		{
			/*4.	Ввести вещественные числа. Создать массив из положительных чисел. Определить, является ли массив упорядоченным по возрастанию.*/
			int *pt = NULL;
			pt = (int*)malloc(sizeof(int) * 9);
			newMassiv(pt, 9);
			PrintMassiv(pt, 9);
			int *pt2;
			pt2 = (int*)malloc(sizeof(int) * 9);
			int chet = 1;
			MassBol(pt, 9, pt2, &chet);
			PrintMassiv(pt2, chet - 1);
			VozPol(pt, chet - 1);
		}
		break;
		case 5:
		{
			/*5.	Ввести целые числа. Создать массив из этих чисел до первого отрицательного числа. Определить, является ли массив упорядоченным по убыванию.*/
			int *pt = NULL;
			pt = (int*)malloc(sizeof(int) * 9);
			newMassiv(pt, 9);
			PrintMassiv(pt, 9);
			int *pt2;
			pt2 = (int*)malloc(sizeof(int) * 9);
			int chet = 1;
			MassBol2(pt, 9, pt2, &chet);
			PrintMassiv(pt2, chet - 1);
			VozOtr(pt, chet - 1);
		}
		break;
		case 6:
		{
			/*6.	Ввести массив из 15 вещественных чисел. Создать новый массив из элементов исходного, в который не включать элементы, попадающие в промежуток (-3,7). Определить произведение отрицательных элементов нового массива*/
			int *pt = NULL;
			pt = (int*)malloc(sizeof(int) * 15);
			newMassiv(pt, 15);
			PrintMassiv(pt, 15);
			int *pt2;
			pt2 = (int*)malloc(sizeof(int) * 15);
			int chet = 1;
			Mass37(pt, 15, pt2, &chet);
			PrintMassiv(pt2, chet - 1);
			Pol(pt, chet - 1);
		}
		break;
		case 7:
		{
			/*7.	Ввести целые числа. Создать массив из чисел, которые не делятся на 5. Определить минимальный элемент массива.*/
			int *pt = NULL;
			pt = (int*)malloc(sizeof(int) * 15);
			newMassiv(pt, 15);
			PrintMassiv(pt, 15);
			int *pt2;
			pt2 = (int*)malloc(sizeof(int) * 15);
			int chet = 1;
			No5(pt, 15, pt2, &chet);
			PrintMassiv(pt2, chet - 1);
		}
		break;
		case 8:
		{
			/*8.	Ввести вещественные числа. Создать массив из этих чисел, пока не встретится число 33. Определить максимальный элемент массива*/
			int *pt = NULL;
			pt = (int*)malloc(sizeof(int) * 15);
			newMassiv(pt, 15);
			PrintMassiv(pt, 15);
			int *pt2;
			pt2 = (int*)malloc(sizeof(int) * 15);
			int chet = 1;
			No33(pt, 15, pt2, &chet);
			PrintMassiv(pt2, chet - 1);
		}
		break;
		case 9:
		{
			/*9.	Ввести массив из 9 вещественных чисел. Создать новый массив из элементов исходного, которые по модулю не больше 12. Поменять местами минимальный и максимальный элементы нового массива*/
			int *pt = NULL;
			pt = (int*)malloc(sizeof(int) * 9);
			newMassiv(pt, 9);
			PrintMassiv(pt, 9);
			int *pt2;
			pt2 = (int*)malloc(sizeof(int) * 9);
			int chet = 1;
			Modul12(pt, 9, pt2, &chet);
			PrintMassiv(pt2, chet - 1);
			menyashka(pt, chet - 1);

		}
		break;
		case 10:
		{
			/*10.	Ввести вещественные числа. Создать массив из чисел, которые попадают в интервал [2,13]. Определить, есть ли в массиве числа, большие 10.*/
			int *pt = NULL;
			pt = (int*)malloc(sizeof(int) * 9);
			newMassiv(pt, 9);
			PrintMassiv(pt, 9);
			int *pt2;
			pt2 = (int*)malloc(sizeof(int) * 9);
			int chet = 1;
			M213(pt, 9, pt2, &chet);
			PrintMassiv(pt2, chet - 1);
			Bol10(pt, chet - 1);
		}
		break;
		}
		printf("хотите продлжить y-da n-net");
		scanf("%c", &f);
	} while (f == 'y');

}