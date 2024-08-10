#pragma once
#include <iostream>
#include <string>
#include "Trans_Equip.h"
#include "Air_Object.h"
#include "chg08-24.h"

class Carpet_Plane : public Air_Object
{
protected:
	double CP_1st_coef = 1, CP_2nd_coef = 0.97, CP_3rt_coef = 0.9, CP_4th_coef = 0.95, CP_Distance;
public:
	WOKRBCH_LIB_API Carpet_Plane(double Distance_OUT) : CP_Distance(Distance_OUT), Air_Object(1, "Ковёр - самолёт", "Air", 10) {};
	WOKRBCH_LIB_API double Total_time() override;
};