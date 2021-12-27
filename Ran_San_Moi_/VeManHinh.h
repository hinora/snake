#pragma once
#include "stdafx.h"
#include "VeManHinh.h"
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
#define MAU1 4
#define MAU2 5
#define KYTU 219

void GoToXY(int x, int y);
void TextColor(int x);
void NgangTren(int n, int x, int y);
void NgangDuoi(int n, int x, int y);
void NgangGiua(int n, int d, int x, int y);
void VeMotO(int x, int y, int mau, char kytu);
void XoaMotO(int x, int y);
void VeKhungChoi();
void VeKhung(int dodaix, int dodaiy, int toadox, int toadoy,int mau);
void Ve();
void Nocursortype();
void VePhanGioiThieu();