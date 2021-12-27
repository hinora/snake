#include "stdafx.h"
#include "VeManHinh.h"
#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#define TOADOX 90
#define TOADOY 1
#define DODAIX 30
#define DODAIY 57
#define MAU1 2
#define MAU2 4
#define KYTU 176

void GoToXY(int x, int y)
{
	COORD cor;
	cor.X = x;
	cor.Y = y;

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cor);
}
//================================================================
void TextColor(int x)//Xac dinh mau cua chu
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), x);
}
//================================================================
void NgangTren(int n, int x, int y)
{
	GoToXY(x, y);
	printf("%c", 218);
	for (int i = 2;i <= n - 1;i++) printf("%c", 196);
	printf("%c", 191);
}
//================================================================
void NgangDuoi(int n, int x, int y)
{
	GoToXY(x, y);
	printf("%c", 192);
	for (int i = 2;i <= n - 1;i++) printf("%c", 196);
	printf("%c", 217);
}
//================================================================
void NgangGiua(int n, int d, int x, int y)
{

	for (int i = 1;i <= d;i++)
	{
		GoToXY(x, y + i - 1);
		printf("%c", 179);
		for (int j = 2;j <= n - 1;j++)
		{
			printf(" ");
		}printf("%c", 179);
	}
}
//================================================================
void XoaMotO(int x, int y)
{
	TextColor(1);

	for (int i = 0;i < 4;i++)
	{
		GoToXY(x, y + i);
		for (int j = 1;j <= 6;j++)
		{
			printf(" ");
		}
	}
}
//================================================================
void VeMotO(int x, int y, int mau,char kytu)
{
	TextColor(mau);

	for (int i = 0;i < 4;i++)
	{
		GoToXY(x, y + i);
		for (int j = 1;j <= 6;j++)
		{
			printf("%c", kytu);
		}
	}
}
//================================================================
void VeKhungChoi()
{
	for (int i = 0;i < 15;i++)
	{
		VeMotO(i * 6, 0, MAU1, KYTU);
	}

	for (int i = 0;i < 15;i++)
	{
		VeMotO(0, i*4, MAU1, KYTU);
	}

	for (int i = 0;i < 15;i++)
	{
		VeMotO(84, i * 4, MAU1, KYTU);
	}

	for (int i = 0;i < 15;i++)
	{
		VeMotO(i * 6, 56, MAU1, KYTU);
	}

	

}
//================================================================
void VeKhung(int dodaix,int dodaiy,int toadox,int toadoy,int mau)
{
	TextColor(mau);
	NgangTren(dodaix, toadox, toadoy);
	NgangGiua(dodaix, dodaiy, toadox, toadoy + 1);
	NgangDuoi(dodaix, toadox, toadoy + dodaiy);
}
//================================================================
void Ve()
{
	system("cls");
	VeKhungChoi();
	VeKhung(DODAIX, DODAIY, TOADOX, TOADOY,MAU2);
	VePhanGioiThieu();
}
//================================================================
void Nocursortype()
{
	CONSOLE_CURSOR_INFO Info;
	Info.bVisible = FALSE;
	Info.dwSize = 20;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &Info);
}
//================================================================
void VePhanGioiThieu()
{
	int i = 45;
	int x = 95;

	TextColor(7);

	GoToXY(x,i);
	printf("LEN  :  'W'");

	GoToXY(x, i+1);
	printf("XUONG  :  'S'");

	GoToXY(x, i+2);
	printf("SANG TRAI  :  'A'");

	GoToXY(x, i+3);
	printf("SANG PHAI  :  'D'");

	GoToXY(x, i+4);
	printf("ESC  : THOAT");

	GoToXY(x, i+5);
	printf("F2  :  CHOI LAI");

	GoToXY(x, i+6);
	printf("P  :  TAM DUNG");

	TextColor(7);
	GoToXY(93, 57);
	printf("SNAKE  --  PHIEN BAN 1.1");

	TextColor(14);
	GoToXY(102, 2);
	printf("SNAKE");
}