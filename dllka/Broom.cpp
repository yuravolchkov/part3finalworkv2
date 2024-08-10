#include "iostream"
#include "string"
#include "Trans_Equip.h"
#include "Air_Object.h"
#include "Broom.h"

	
	double Broom::Total_time() 
	{
		int Broom_Coef = int(Broom_Distance/1000);
		return (Broom_Distance-(Broom_Distance*(Broom_Coef*Broom_1st_coef)))/TE_Speed;
	}