#include "stdafx.h"
#include "ConRan.h"
#include "VeManHinh.h"

#define KYTURAN 219
#define MAURAN 1
#define MAUDAURAN 9
void VeRan(int *toadox, int *toadoy, int dodai)
{
	for (int i = 0;i < dodai;i++)
	{
		VeMotO(toadox[i], toadoy[i], MAURAN, KYTURAN);
	}
}

void XoaRan(int *toadox, int *toadoy, int dodai)
{
	for (int i = 0;i < dodai;i++)
	{
		XoaMotO(toadox[i], toadoy[i]);
	}
}

void ThayDoiToaDoRan(int *toadox, int *toadoy, int dodai)
{
	for (int i = dodai - 1;i > 0;i--)
	{
		toadox[i] = toadox[i - 1];
		toadoy[i] = toadoy[i - 1];
	}
}

void Ran(int *toadox, int *toadoy, int dodai,int xmoi,int ymoi)
{
	
	VeMotO(xmoi, ymoi,8,4);
	VeMotO(toadox[0], toadoy[0], MAUDAURAN, KYTURAN);
	VeMotO(toadox[1], toadoy[1], MAURAN, KYTURAN);
	Sleep(100);

	VeMotO(xmoi, ymoi, 8, 219);
	Sleep(100);

	XoaMotO(toadox[dodai - 1], toadoy[dodai - 1]);
	
}