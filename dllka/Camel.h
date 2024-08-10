#pragma once
#include <iostream>
#include <string>
#include "Trans_Equip.h"
#include "Grouand_Object.h"
#include "chg08-24.h"

class Camel : public Grouand_Object
{
protected:
	double Cam_1st_Rest_Time = 5, Cam_2nd_Rest_Time = 8, Cam_Distance;
public:
	WOKRBCH_LIB_API Camel(double Distance_OUT) : Cam_Distance(Distance_OUT), Grouand_Object(30, "Верблюд", "Ground", 10) {};
	WOKRBCH_LIB_API double Total_time()override;
};