#include "stdafx.h"
#include "ChayGame.h"
#include "VeManHinh.h"
#include "KiemTra.h"
#include "Moi.h"
#include "BanPhim.h"
#include "ConRan.h"

void Diem(int diem)
{
	GoToXY(101, 10);
	TextColor(14);
	printf("DIEM  :  %d", diem);
}

void ThuaGame(int *kiemtra)
{
	GoToXY(50, 30);
	TextColor(4);
	printf("BAN DA THUA! BAM 'y' DE CHOI LAI");

	char phim = _getch();

	if (phim != 'y') *kiemtra = 3;

}

void ChayGame1(int chedo)
{
	
	int kiemtra = 2;
	while (kiemtra == 2)
	{
		int diem = 0;
		int toadox[100] = { 18,12,6 }, toadoy[100] = {4,4,4};
		int dodai = 3;
		int xmoi, ymoi;
		int n = 3;
		
		Ve();

		VeRan(toadox, toadoy, dodai);
		_getch();

		kiemtra = 1;

		while (kiemtra == 1)
		{
			MoiNe(&xmoi, &ymoi, toadox, toadoy, dodai);

			kiemtra = 0;
			
			Diem(diem);

			while (kiemtra==0)
			{
				Ran(toadox, toadoy, dodai,xmoi,ymoi);
				kiemtra = KiemTraLogic(toadox, toadoy, xmoi, ymoi, &dodai);
				ThayDoiToaDoRan(toadox, toadoy, dodai);
				DieuKhien(&n, &toadox[0], &toadoy[0],&kiemtra,chedo);
			
			}

			if (kiemtra == 1) diem++;
	
		}
		
		if(kiemtra==2) ThuaGame(&kiemtra);
		if (kiemtra == 6) kiemtra = 2;

	}
	


}