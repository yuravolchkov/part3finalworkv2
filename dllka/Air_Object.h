#pragma once
#include <iostream>
#include <string>
#include "Trans_Equip.h"
#include "chg08-24.h"

class Air_Object : public Trans_Equip
{
protected:
	double Distance_Dec;
public:
	WOKRBCH_LIB_API Air_Object(double Distance_Dec_OUT, std::string TE_Name_OUT2, std::string TE_Type_OUT2, double TE_Speed_OUT2) : Trans_Equip(TE_Name_OUT2, TE_Type_OUT2, TE_Speed_OUT2), Distance_Dec(Distance_Dec_OUT) {};
};