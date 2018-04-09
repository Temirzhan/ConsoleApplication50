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
		printf("������� �������");
		scanf("%d", &N);
		switch (N)
		{
		case 1:
		{
			/*1.	������ ������������ �����. ������� ������ �� ���� �����, ���� �� ���������� ����� 10. ��������� ����� ������������� ��������� �������*/
			int *pt = NULL;
			pt = (int*)malloc(sizeof(int));
			int chet = 1;
			int chislo = 0;
			while (chislo != 10)
			{
				printf("������� �����");
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
			/*2.	������ � StringGrid ������ �� 10 ����� �����. ������� ��� ����� ������� � �� ������������� � ������������� ��������� ��������� �������. ���������� ����� ��������� ������� �������.*/
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
			/*3.	������ ������ �� 9 ������������ �����. ������� ����� ������ �� ��������� ���������, ������� �� ������ ������ 10. ��������� ������� �������������� ��������� ������ �������*/
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
			/*4.	������ ������������ �����. ������� ������ �� ������������� �����. ����������, �������� �� ������ ������������� �� �����������.*/
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
			/*5.	������ ����� �����. ������� ������ �� ���� ����� �� ������� �������������� �����. ����������, �������� �� ������ ������������� �� ��������.*/
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
			/*6.	������ ������ �� 15 ������������ �����. ������� ����� ������ �� ��������� ���������, � ������� �� �������� ��������, ���������� � ���������� (-3,7). ���������� ������������ ������������� ��������� ������ �������*/
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
			/*7.	������ ����� �����. ������� ������ �� �����, ������� �� ������� �� 5. ���������� ����������� ������� �������.*/
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
			/*8.	������ ������������ �����. ������� ������ �� ���� �����, ���� �� ���������� ����� 33. ���������� ������������ ������� �������*/
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
			/*9.	������ ������ �� 9 ������������ �����. ������� ����� ������ �� ��������� ���������, ������� �� ������ �� ������ 12. �������� ������� ����������� � ������������ �������� ������ �������*/
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
			/*10.	������ ������������ �����. ������� ������ �� �����, ������� �������� � �������� [2,13]. ����������, ���� �� � ������� �����, ������� 10.*/
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
		printf("������ ��������� y-da n-net");
		scanf("%c", &f);
	} while (f == 'y');

}