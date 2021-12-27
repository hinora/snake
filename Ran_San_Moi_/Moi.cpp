#include "stdafx.h"
#include "VeManHinh.h"
#include "Moi.h"
#define MAUMOI 5
#define KYTUMOI 219

void TaoMoi(int *xmoi, int *ymoi, int *toadox, int *toadoy,int dodai)
{
	bool kiemtra = true;
	do
	{
		*xmoi = (rand() % 10 + 2) * 6;
		*ymoi = (rand() % 10 + 2) * 4;
		kiemtra = false;
		for (int i = 0;i < dodai;i++)
		{
			if (toadox[i] == *xmoi&&toadoy[i] == *ymoi)
			{
				kiemtra = true;
			}
		}
	} while (kiemtra);
}

void InMoi(int xmoi, int ymoi)
{
	TextColor(13);
	VeMotO(xmoi, ymoi, MAUMOI, KYTUMOI);
}


void MoiNe(int *xmoi, int *ymoi, int *toadox, int *toadoy, int dodai)
{
	TaoMoi(xmoi, ymoi, toadox, toadoy, dodai);
	InMoi(*xmoi, *ymoi);
}