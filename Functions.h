#pragma once
#include <iostream>
#include <string>
#include "Trans_Equip.h"
#include "Grouand_Object.h"
#include "Camel.h"
#include "Sup_Camel.h"
#include "Centaur.h"
#include "Shoes.h"
#include "Air_Object.h"
#include "Carpet_Plane.h"
#include "Eagle.h"
#include "Broom.h"

//������� �������� ������ ���� �����
int check_race_type();

//������� �������� ��������� �����
int check_distance();

// ������� ����������� ��� ������ �����
int reg_or_begin_func(int* Uniq_ID_in);

// ������� �������� ��������� ����������� ������������� ��������
bool check_duplicate_ts(int TS_reg_bool, int* Uniq_ID_bool);

// ����� ����������� 
void Print_results(Trans_Equip* cars_racing, int i);

// ����� ���������� ������������������� ��
void show_prev_reg_ts(int switcher, std::string* TS_name_in, int Car_Qty);

// ���� ����� ������ ��� ����������� ��
void messages_for_ts_reg(int Race_Style_in, int s, std::string* TS_name_in, int Car_Qty);

//�������� ������������ ��������� ������ � ������������ ��
int check_duplicate_v2(int* Uniq_ID_bool, std::string* TS_name_in, int Car_Qty, int show_reg_ts_after_reg, int Race_Style, int s);