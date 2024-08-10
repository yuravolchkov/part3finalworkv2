#include "iostream"
#include "string"
#include "Trans_Equip.h"
#include "Air_Object.h"
#include "Carpet_Plane.h"

	double Carpet_Plane::Total_time()
	{
		double Tt;
		if (CP_Distance < 1000)
		{
			Tt = CP_Distance / TE_Speed;
		}
		else if (CP_Distance >= 1000 && CP_Distance < 5000)
		{
			Tt = CP_Distance * CP_2nd_coef / TE_Speed;
		}
		else if (CP_Distance >= 5000 && CP_Distance < 10000)
		{
			Tt = CP_Distance * CP_3rt_coef / TE_Speed;
		}
		else if (CP_Distance >= 10000)
		{
			Tt = CP_Distance * CP_4th_coef / TE_Speed;
		}
		return Tt;
	}