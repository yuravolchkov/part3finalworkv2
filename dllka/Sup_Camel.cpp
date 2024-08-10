#include "iostream"
#include "string"
#include "Trans_Equip.h"
#include "Grouand_Object.h"
#include "Sup_Camel.h"


double Sup_Camel::Total_time()
	{
		double Tt = 0;
		int Qty_Stps = int(((Sup_Cam_Distance / TE_Speed) - int(Sup_Cam_Distance / TE_Speed) % int(Time_To_Rest)) / Time_To_Rest);
		
		if (Sup_Cam_Distance / TE_Speed == Time_To_Rest || int(Sup_Cam_Distance / TE_Speed) % int(Time_To_Rest) == 0)
		{
			Qty_Stps = Qty_Stps - 1;
		}
		
		if (Qty_Stps < 1)
		{
			Tt = Sup_Cam_Distance / TE_Speed;
		}
		else if (Qty_Stps == 1)
		{
			Tt = Sup_Cam_Distance / TE_Speed + Sup_Cam_1st_Rest_Time;
		}
		else if (Qty_Stps == 2)
		{
			Tt = Sup_Cam_Distance / TE_Speed + Sup_Cam_1st_Rest_Time + Sup_Cam_2nd_Rest_Time;
		}
		else
		{
			Tt = Sup_Cam_Distance / TE_Speed + Sup_Cam_1st_Rest_Time + Sup_Cam_2nd_Rest_Time + Sup_Cam_3rd_Rest_Time * (Qty_Stps - 2);
		}
		return Tt;
	}