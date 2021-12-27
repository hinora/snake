#include "stdafx.h"
#include <iostream>
#include "MenuMoGame.h"
#include "VeManHinh.h"
#include "ChayGame.h"


#define TOADOXKHUNGCHUA 35
#define TOADOYKHUNGCHUA 15
#define DODAIXKHUNGCHUA 50
#define DODAIYKHUNGCHUA 35
#define MAUKHUNGCHUA 15

#define DODAIKHUNGCHUX 20
#define DODAIKHUNGCHUY 2

#define X 50
#define Y 20
#define MAUBANDAU 10

#define MAULUACHON 12
void VeKhungChua()
{
	VeKhung(DODAIXKHUNGCHUA, DODAIYKHUNGCHUA, TOADOXKHUNGCHUA, TOADOYKHUNGCHUA, MAUKHUNGCHUA);
}

void VeChuBatDau(int x, int y,int mau)
{
	VeKhung(DODAIKHUNGCHUX, DODAIKHUNGCHUY, x, y, mau);
	GoToXY(x + 6, y + 1);
	printf("BAT DAU");
}

void VeChuTroGiup(int x, int y, int mau)
{
	VeKhung(DODAIKHUNGCHUX, DODAIKHUNGCHUY, x, y, mau);
	GoToXY(x + 6, y + 1);
	printf("TRO GIUP"); 
}

void VeChuXuyenTuong(int x, int y, int mau)
{
	VeKhung(DODAIKHUNGCHUX, DODAIKHUNGCHUY, x, y, mau);
	GoToXY(x + 3, y + 1);
	printf("CD XUYEN TUONG");
}

void VeChuBinhThuong(int x, int y, int mau)
{
	VeKhung(DODAIKHUNGCHUX, DODAIKHUNGCHUY, x, y, mau);
	GoToXY(x + 3, y + 1);
	printf("CD BINH THUONG");
}

void VeMenuLuaChonCheDo()
{
	VeChuSnake(40, 3);
	VeKhungChua();
	VeChuBinhThuong(X, Y, MAUBANDAU);
	VeChuXuyenTuong(X, Y + 5, MAUBANDAU);
	
}

void VeChuThoat(int x, int y, int mau)
{
	VeKhung(DODAIKHUNGCHUX, DODAIKHUNGCHUY, x, y, mau);
	GoToXY(x + 5, y + 1);
	printf("THOAT GAME");
}

void VeChuSnake(int x, int y)
{
	TextColor(14);

	GoToXY(x, y);
	std::cout <<"  %%%%   %%  %%   %%%%   %%  %%  %%%%%% ";

	GoToXY(x, y + 1);
	std::cout << " %%      %%% %%  %%  %%  %% %%   %%     ";

	GoToXY(x, y + 2);
	std::cout << "  %%%%   %% %%%  %%%%%%  %%%%    %%%%   ";

	GoToXY(x, y + 3);
	std::cout << "     %%  %%  %%  %%  %%  %% %%   %%     ";

	GoToXY(x, y + 4);
	std::cout << "  %%%%   %%  %%  %%  %%  %%  %%  %%%%%% ";


}

void VeMenuRa()
{
	VeChuSnake(40,3);
	VeKhungChua();
	VeChuBatDau(X,Y,MAUBANDAU);
	VeChuTroGiup(X,Y+5,MAUBANDAU);
	VeChuThoat(X,Y+10,MAUBANDAU);
}

void PhanTroGiup()
{
	VeKhungChua();
	
	GoToXY(36, 20);

	TextColor(3);
	printf("                   GAME SNAKE");

	GoToXY(36, 22);
	TextColor(6);
	printf("(*)Game snake. De di chuyen ban su dung cac phim");

	GoToXY(45, 24);
	printf("LEN  :  'W'");

	GoToXY(45, 25);
	printf("XUONG  :  'S'");

	GoToXY(45, 26);
	printf("SANG TRAI  :  'A'");

	GoToXY(45, 27);
	printf("SANG PHAI  :  'D'");

	GoToXY(45, 28);
	printf("ESC  : THOAT");

	GoToXY(45, 29);
	printf("F2  :  CHOI LAI");

	GoToXY(36, 31);
	printf("       (*) CHUC BAN CHOI GAME VUI VE! (*)");

	TextColor(9);
	GoToXY(36, 46);
	printf("    Author : MAI DANG HUU  --  Phien Ban 1.1");
	
}

void LuaChonTrongMenu()
{
	Nocursortype();
	system("cls");
	VeMenuRa();
	
	int luachon = 1;

	char c = 'k';

	int saoluachon = 1;
	while (true)
	{
		switch (saoluachon)
		{
		case 1:
			VeChuBatDau(X, Y,MAUBANDAU);
			break;
		case 2:
			VeChuTroGiup(X, Y + 5,MAUBANDAU);
			break;
		case 3:
			VeChuThoat(X, Y + 10,MAUBANDAU);
			break;
		default:
			break;
		}

		switch (luachon)
		{
		case 1:
			VeChuBatDau(X, Y,MAULUACHON);
			break;
		case 2:
			VeChuTroGiup(X, Y + 5,MAULUACHON);
			break;
		case 3:
			VeChuThoat(X, Y + 10,MAULUACHON);
			break;
		default:
			break;
		}

		c = _getch();
		switch (c)
		{
		case 's':
			if (luachon < 3)
			{
				saoluachon = luachon;
				luachon++;
			}
			break;
		case 'w':
			if (luachon > 1)
			{
				saoluachon = luachon;
				luachon--;
			}
			break;
		case 'j':
			if (luachon == 1)
			{
				MenuLuaChonCheDo();
				system("cls");
				VeMenuRa();
			}
			else if (luachon == 2)
			{
				PhanTroGiup();
				_getch();
				system("cls");
				VeMenuRa();
			}
			else if (luachon == 3)
			{
				exit(0);
			}
			break;
		default:
			break;
		}
	}
}

void MenuLuaChonCheDo()
{
	system("cls");
	VeMenuLuaChonCheDo();

	int luachon = 1;

	char c = 'k';

	int saoluachon = 1;

	bool thoat = true;
	while (thoat)
	{
		switch (saoluachon)
		{
		case 1:
			VeChuBinhThuong(X, Y, MAUBANDAU);
			break;
		case 2:
			VeChuXuyenTuong(X, Y + 5, MAUBANDAU);
			break;
		default:
			break;
		}

		switch (luachon)
		{
		case 1:
			VeChuBinhThuong(X, Y, MAULUACHON);
			break;
		case 2:
			VeChuXuyenTuong(X, Y + 5, MAULUACHON);
			break;
		default:
			break;
		}

		c = _getch();
		switch (c)
		{
		case 's':
			if (luachon < 2)
			{
				saoluachon = luachon;
				luachon++;
			}
			break;
		case 'w':
			if (luachon > 1)
			{
				saoluachon = luachon;
				luachon--;
			}
			break;
		case 'j':
			if (luachon == 1)
			{
				ChayGame1(1);
				system("cls");
				thoat = false;
			}
			else if (luachon == 2)
			{
				ChayGame1(2);
				system("cls");
				thoat = false;
			}
			
			break;
		default:
			break;
		}
	}
}
