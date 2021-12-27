#include "stdafx.h"
#include "KiemTra.h"
#include "VeManHinh.h"

bool KiemTraSongChet(int *toadox, int *toadoy,int dodai)
{
	if (toadox[0] < 6 || toadox[0]>78) return true;

	if (toadoy[0] < 4 || toadoy[0]>52) return true;

	for (int i = 1;i < dodai;i++)
	{
		if (toadox[0] == toadox[i] && toadoy[0] == toadoy[i]) return true;
	}

	return false;
}

bool KiemTraAnMoi(int toadox, int toadoy, int xmoi, int ymoi)
{
	if (toadox == xmoi&&toadoy == ymoi)
	{
		return true;
	}
	return false;
}

int KiemTraLogic(int *toadox, int *toadoy, int xmoi, int ymoi, int *dodai)
{
	if (KiemTraSongChet(toadox, toadoy, *dodai)) return 2;
	if (KiemTraAnMoi(toadox[0], toadoy[0], xmoi, ymoi))
	{
		*dodai=*dodai+1;
		return 1;
	}
	return 0;
}