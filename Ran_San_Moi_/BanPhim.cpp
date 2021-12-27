#include "stdafx.h"
#include "VeManHinh.h"
#include "BanPhim.h"
#include "ConRan.h"

void BatPhim(int *n,int *kiemtra)
{
	char Phim = _getch();

	switch (Phim)
	{
	case 'a':
		if (*n != 3) *n = 1;
		break;
	case 'w':
		if (*n != 4) *n = 2;
		break;
	case 'd':
		if (*n != 1) *n = 3;
		break;
	case 's': 
		if (*n != 2) *n = 4;
		break;
	case 'p':
		_getch();
		break;
	case 27:
		*kiemtra = 4;
		break;
	case 0:
		Phim = _getch();
		if (Phim = 113) *kiemtra = 6;
		break;
	default:
		break;
	}
}

void ChinhHuongXuyenTuong(int *n, int *x, int *y)
{
	switch (*n)
	{
	case 1:
		*x -= 6;
		if (*x < 6) *x = 78;
		break;
	case 2:
		*y -= 4;
		if (*y < 4) *y = 52;
		break;
	case 3:
		*x += 6;
		if (*x > 78) *x = 6;
		break;
	case 4:
		*y += 4;
		if (*y>52) *y = 4;
		break;
	default:
		break;
	}
}

void ChinhHuongBinhThuong(int *n, int *x, int *y)
{
	switch (*n)
	{
	case 1:
		*x -= 6;
		break;
	case 2:
		*y -= 4;
		break;
	case 3:
		*x += 6;
		break;
	case 4:
		*y += 4;
		break;
	default:
		break;
	}
}

void DieuKhien(int *n, int *x, int *y,int *kiemtra,int chedo)
{
	if(_kbhit()!=0) BatPhim(n,kiemtra);
	if (chedo == 1)
	{
		ChinhHuongBinhThuong(n, x, y);
	}
	else ChinhHuongXuyenTuong(n, x, y);
	
}