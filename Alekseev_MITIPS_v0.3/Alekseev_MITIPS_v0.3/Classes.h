#pragma once
#include <iostream>
#include <set>
#include <list>
#include <vector>
#include "Functions.h"

//struct value {
//	int I;
//	float R;
//	std::string N;
//};
inline std::set<std::string> feature_names = {
	"�������� ����� �����",
	"�������� ����� ��������� ����",
	"������� ������� ��������",
	"������� ������������ �����������",
	"������� ������������ ��� ������������� �������",
	"���������� � ������������ �����������������",
	"������� ������������ �������� � �������"
};
inline std::set<std::string> disease_names = {
	"������",
	"����������� ���������",
	"������������ ���������",
	"������������� ���������",
	"���������� ���������",
	"������������� ���������"
};

class Feature {
public:
	std::string feature_name;
	std::string current_value;

	std::set<std::string> possible_values;
	std::set<std::string> normal_values;
	std::set<std::string> disease_values;

	//Feature(std::string feature_name, std::string current_value)
	//{
	//	this->feature_name = feature_name;
	//	this->current_value = current_value;
	//	this->possible_values.insert(current_value);
	//}
	Feature(std::string feature_name, std::set<std::string> values, std::set<std::string> normal_values, std::set<std::string> diseas_values)
	{
		this->feature_name = feature_name;
		this->possible_values = values;
		this->normal_values = normal_values;
		this->disease_values = diseas_values;
	}


	Feature(std::string feature_name, std::set<std::string> values)
	{
		this->feature_name = feature_name;
		this->possible_values = values;
	}

	Feature(std::string feature_name)
	{
		this->feature_name = feature_name;
	}

	bool operator < (const Feature& counter) const
	{
		return this->feature_name < counter.feature_name;
	}

	bool operator == (const Feature& counter) const
	{
		return this->feature_name == counter.feature_name;
	}

	inline void set_current_value(std::string a) {
		if (this->possible_values.count(a)) {
			this->current_value = a;
			String^ S;
			Convert_string_to_String(a, S);
			MessageBox::Show("������� ��������: " + S, "������", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			MessageBox::Show("�������� �� ����������!", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	inline void delete_current_value(std::string a) {
		if (this->current_value == a) {
			this->current_value = "";
		}
		else {
			MessageBox::Show("�������� �� ����������!", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	inline void set_feature_name(std::string a) {
		if (feature_names.count(a)) {
			this->feature_name = a;
		}
		else {
			MessageBox::Show("�������� �� ����������!", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	inline void add_value(std::string a) {
		this->possible_values.insert(a);
	}

	inline void add_diseas_value(std::string a) {
		if (this->possible_values.count(a)) {
			if (!this->normal_values.count(a)) {
				this->disease_values.insert(a);
			}
			else {
				MessageBox::Show("�������� � ���������� ���������!", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		else {
			MessageBox::Show("����������� �������� ����������� � ��������� ���������", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	inline void add_normal_value(std::string a) {
		if (this->possible_values.count(a)) {
			if (!this->normal_values.count(a)){
				this->normal_values.insert(a);
				}
			else {
				MessageBox::Show("���������� �������� ��� ���������", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		else {
			MessageBox::Show("����������� ���������� �������� ����������� � ��������� ���������", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	inline void delete_value(std::string a) {
		if (this->possible_values.count(a)) {
			this->possible_values.erase(a);
			this->normal_values.erase(a);
			this->disease_values.erase(a);
			MessageBox::Show("�������� �������", "�����", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			MessageBox::Show("��������� �������� ����������� � ���������", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	inline void delete_normal_value(std::string a) {
		if (this->normal_values.count(a)) {
			this->normal_values.erase(a);
			MessageBox::Show("���������� �������� �������", "�����", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			MessageBox::Show("��������� ���������� �������� ����������� � ���������� ���������", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	inline void delete_diseas_value(std::string a) {
		if (this->disease_values.count(a)) {
			this->disease_values.erase(a);
			MessageBox::Show("�������� ��� ����������� �������", "�����", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			MessageBox::Show("��������� �������� ��� ����������� ����������� � ���������� ���������", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	//inline void add_disease_value(std::string a) {
	//	if (this->possible_values.count(a)) {
	//		if (!this->normal_values.count(a)) {
	//			this->disease_values.insert(a);
	//		}
	//		else {
	//			MessageBox::Show("����������� �������� ��� ����������� ������ � ���������� �������� ��� ��������", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
	//		}
	//	}
	//	else {
	//		MessageBox::Show("����������� ���������� �������� ����������� � ��������� ���������", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
	//	}
	//}
};


class �linical {
public:
	std::string disease_name;
	std::set<Feature> disease_features;

	�linical(std::string disease_name)
	{
		this->disease_name = disease_name;
	}

	�linical(std::string disease_name, std::set<Feature> disease_features)
	{
		this->disease_name = disease_name;
		this->disease_features = disease_features;
	}

	inline void set_disease_name(std::string a) {
		if (disease_names.count(a)) {
			this->disease_name = a;
		}
		else {
			MessageBox::Show("����������� �� ����������!", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	inline void add_feature(Feature a) {
		if (!this->disease_features.count(a)) {
			this->disease_features.insert(a);
		}
		else {
			MessageBox::Show("������� ��� ��������!", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	inline void delete_feature(Feature a) {
		if (this->disease_features.count(a)) {
			this->disease_features.erase(a);
		}
		else {
			MessageBox::Show("������� �� �������� � ����������� �������!", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	inline void add_disease_value(Feature a, std::string b){
		if (this->disease_features.count(a)) {
			a.add_diseas_value(b);
			a.current_value = b;
		}
		else {
			MessageBox::Show("������� �� ��������!", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
};




