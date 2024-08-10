#include "iostream"
#include "string"
#include "Trans_Equip.h"
#include "Grouand_Object.h"
#include "Camel.h"

double Camel::Total_time()
	{
		double Tt=0;
		int Qty_Stps= int(((Cam_Distance / TE_Speed) - int(Cam_Distance / TE_Speed)%int(Time_To_Rest)) / Time_To_Rest);
		if (Cam_Distance / TE_Speed == Time_To_Rest || int(Cam_Distance / TE_Speed) % int(Time_To_Rest) == 0)
		{
			Qty_Stps = Qty_Stps - 1;
		}
		if (Qty_Stps < 1)
		{
			Tt = Cam_Distance / TE_Speed;
		}
		else if(Qty_Stps ==1 )
		{
			Tt = Cam_Distance / TE_Speed + Cam_1st_Rest_Time;
		}
		else
		{
			Tt = Cam_Distance / TE_Speed + Cam_1st_Rest_Time + Cam_2nd_Rest_Time*(Qty_Stps-1);
		}
		return Tt;
	}