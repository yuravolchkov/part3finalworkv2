#pragma once
#include <iostream>
#include <string>
#include "Trans_Equip.h"
#include "Air_Object.h"
#include "chg08-24.h"

class Broom : public Air_Object
{
protected:
	double Broom_1st_coef = 0.01, Broom_Distance;
public:
	WOKRBCH_LIB_API Broom(double Distance_OUT) : Broom_Distance(Distance_OUT), Air_Object(1, "Метла", "Air", 20) {};
	WOKRBCH_LIB_API double Total_time() override;
};