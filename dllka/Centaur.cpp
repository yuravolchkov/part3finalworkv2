#include "iostream"
#include "string"
#include "Trans_Equip.h"
#include "Grouand_Object.h"
#include "Centaur.h"

		double Centaur::Total_time() 
	{
		double Tt = 0;
		int Qty_Stps = int(((Cent_Distance / TE_Speed) - int(Cent_Distance / TE_Speed) % int(Time_To_Rest)) / Time_To_Rest);
		
		if (Cent_Distance / TE_Speed == Time_To_Rest || int(Cent_Distance / TE_Speed) % int(Time_To_Rest) == 0)
		{
			Qty_Stps = Qty_Stps - 1;
		}
				
		if (Qty_Stps < 1)
		{
			Tt = Cent_Distance / TE_Speed;
		}
		else
		{
			Tt = Cent_Distance / TE_Speed + Cent_1st_Rest_Time * Qty_Stps;
		}
		return Tt;
	}