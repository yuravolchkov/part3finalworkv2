#include "iostream"
#include "string"
#include "Trans_Equip.h"
#include "Grouand_Object.h"
#include "Shoes.h"

	
	double Shoes::Total_time()
	{
		double Tt = 0;
		int Qty_Stps = int(((Shoes_Distance / TE_Speed) - int(Shoes_Distance / TE_Speed) % int(Time_To_Rest)) / Time_To_Rest);
		
		if (Shoes_Distance / TE_Speed == Time_To_Rest || int(Shoes_Distance / TE_Speed) % int(Time_To_Rest) == 0)
		{
			Qty_Stps = Qty_Stps - 1;
		}
		
		if (Qty_Stps < 1)
		{
			Tt = Shoes_Distance / TE_Speed;
		}
		else if (Qty_Stps == 1)
		{
			Tt = Shoes_Distance / TE_Speed + Shoes_1st_Rest_Time;
		}
		else
		{
			Tt = Shoes_Distance / TE_Speed + Shoes_1st_Rest_Time + Shoes_2nd_Rest_Time * (Qty_Stps - 1);
		}
		return Tt;
	}