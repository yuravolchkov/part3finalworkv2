#pragma once
#include <iostream>
#include <string>
#include "Trans_Equip.h"
#include "Grouand_Object.h"
#include "chg08-24.h"

class Sup_Camel : public Grouand_Object
{
protected:
	double Sup_Cam_1st_Rest_Time = 5, Sup_Cam_2nd_Rest_Time = 6.5, Sup_Cam_3rd_Rest_Time = 8, Sup_Cam_Distance;
public:
	WOKRBCH_LIB_API Sup_Camel(double Distance_OUT) : Sup_Cam_Distance(Distance_OUT), Grouand_Object(10, "Верблюд - быстроход", "Ground", 40) {};
	WOKRBCH_LIB_API double Total_time() override;
};