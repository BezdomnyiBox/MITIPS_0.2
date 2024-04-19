#include "Form_3.h"
#include "Classes.h"
#include "Functions.h"
#include "mysql.h"


extern std::vector<Feature> Features;
extern std::vector<Сlinical> Сlinicals;
extern std::set<std::string> feature_names;
extern std::set<std::string> disease_names;

Сlinical C("",{});
std::set<Feature> Features_set;


System::Void AlekseevMITIPSv03::Form_3::Form_3_Load(System::Object^ sender, System::EventArgs^ e)
{
	listBox9->Items->Clear();
	
	for (auto i : Features) {
		String^ S;
		S = Convert_string_to_String(i.feature_name, S);
		listBox9->Items->Add(S);
	}



	return System::Void();
}

System::Void AlekseevMITIPSv03::Form_3::listBox8_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (listBox8->SelectedItem) {
		String^ selected = listBox8->SelectedItem->ToString();
		std::string s;
		s = Convert_String_to_string(selected, s);
		listBox2->Items->Clear();
		listBox2->Items->Add(selected);

		for (Feature i : Features_set) {
			std::string f;
			f = Convert_String_to_string(listBox1->SelectedItem->ToString(), f);
			if (f == i.feature_name) {
				i.current_value = s;
				//i.set_current_value(s);
				String^ S7;
				S7 = Convert_string_to_String(i.current_value, S7);
				MessageBox::Show(S7);
			}
		}
	}



	return System::Void();
}

System::Void AlekseevMITIPSv03::Form_3::listBox9_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
	String^ selected = listBox9->SelectedItem->ToString();
	bool q = false;
	if (!listBox1->Items->Contains(listBox9->SelectedItem)) {
		listBox1->Items->Add(selected);
		std::string s;
		Convert_String_to_string(listBox9->SelectedItem->ToString(), s);
		Feature F(s);
		Features_set.insert(F);
	}
	return System::Void();
}

System::Void AlekseevMITIPSv03::Form_3::listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
	listBox8->Items->Clear();
	listBox2->Items->Clear();
	for (Feature i : Features) {
		std::string f;
		f = Convert_String_to_string(listBox1->SelectedItem->ToString(), f);
		if (f == i.feature_name) {
			for (std::string ff : i.possible_values) {
				String^ S;
				S = Convert_string_to_String(ff, S);
				listBox8->Items->Add(S);
			}
		}
	}
	return System::Void();
}

System::Void AlekseevMITIPSv03::Form_3::listBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void AlekseevMITIPSv03::Form_3::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	bool q = false;
	for (Сlinical C : Сlinicals) {
		if (C.disease_features == Features_set) {
			String^ S;
			S = Convert_string_to_String(C.disease_name, S);
			MessageBox::Show("Предпологаемый диагноз " + S);
			q = true;
		}
		else {
			String^ S;
			S = Convert_string_to_String(C.disease_name, S);
			MessageBox::Show("Диагноз " + S + " не подходит");
		}
	}
	bool q1 = false;

	if (q) {
		MessageBox::Show("Объяснение");

		for (Сlinical C : Сlinicals) {
			String^ S2;
			S2 = Convert_string_to_String(C.disease_name, S2);
			if (C.disease_features == Features_set) {
				for (Feature F1 : C.disease_features) {
					String^ S;
					S = Convert_string_to_String(F1.feature_name, S);
					S = "Значение для заболевания признака " + S;
					for (std::string F2 : F1.disease_values) {

						String^ S1;
						S1 = Convert_string_to_String(F2, S1);
						S = S + " находится в значениях " + S1;
						MessageBox::Show(S);

					}
					
				}
			}

		}
	}



	return System::Void();
}
