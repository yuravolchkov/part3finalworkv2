#pragma once
#include <iostream>
#include <string>
#include "Trans_Equip.h"
#include "Grouand_Object.h"
#include "chg08-24.h"

class Centaur : public Grouand_Object
{
protected:
	double Cent_1st_Rest_Time = 2, Cent_Distance;
public:
	WOKRBCH_LIB_API Centaur(double Distance_OUT) : Cent_Distance(Distance_OUT), Grouand_Object(8, "Кентавр", "Ground", 15) {};
	WOKRBCH_LIB_API double Total_time() override;
};	