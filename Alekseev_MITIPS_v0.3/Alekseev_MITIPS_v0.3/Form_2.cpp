#include "Form_2.h"
#include "Classes.h"
#include "Functions.h"
#include "mysql.h"


using namespace System;
using namespace System::Windows::Forms;
using namespace System::IO;
using namespace Data;
using namespace MySql::Data::MySqlClient;


extern std::vector<Feature> Features;
extern std::vector<�linical> �linicals;
extern std::set<std::string> feature_names;
extern std::set<std::string> disease_names;

Feature f1("�������� ����� �����",
    {
        "[20,49]",
        "[50,80]"
    },
	{
		"[20,49]"
	},
	{
		"[50,80]"
	});
Feature f2("�������� ����� ��������� ����",
    {
        "[0,13]",
        "[13,63]"
    },
	{
		"[0,13]"
	},
	{
		"[13,63]"
	});
Feature f3("������� ������� ��������",
    {
        "�������� ������� �������� �����������",
        "�� �������� ������� �������� �����������"
	},
	{
		 "�� �������� ������� �������� �����������"
	},
	{
		"�������� ������� �������� �����������"
	});

Feature f4("���������� � ������������ �����������������",
    {
        "����������",
        "����������",
        "����������������",
        "�����������"
    },
	{
		"�����������"
	},
	{
		"����������",
		"����������",
		"����������������"
	});
Feature f5("������� ������������ �����������",
    {
        "������������",
        "�����������"
    },
	{
		"�����������"
	},
	{
		"������������"
	});
Feature f6("������� ������������ ��� ������������� �������",
    {
        "������������",
        "�����������"
    },
	{
		"�����������"
	},
	{
		"������������"
	});
Feature f7("������� ������������ �������� � �������",
    {
        "������ �������",
        "�����������"
    },
	{
		"�����������"
	},
	{
		"������ �������"
	});

�linical c1("������", {});
�linical c2("����������� ���������",
	{f1,f2,f4,f7});
�linical c3("C����������� ���������",
	{ f1,f2,f5 });
�linical c4("������������� ���������",
	{ f1,f2,f3 });
�linical c5("���������� ���������",
	{ f1,f2 });
�linical c6("������������� ���������",
	{ f1,f2,f6 });



//[STAThreadAttribute]
//void Form_2(array<String^>^ args) {
//    Application::EnableVisualStyles();
//    Application::SetCompatibleTextRenderingDefault(false);
//
//    AlekseevMITIPSv03::Form_2 form2;
//    Application::Run(% form2);
//}

System::Void AlekseevMITIPSv03::Form_2::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
    
    tabControl1->SelectedTab = tabPage2;
    return System::Void();
}

System::Void AlekseevMITIPSv03::Form_2::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
    tabControl1->SelectedTab = tabPage3;
    return System::Void();
}

System::Void AlekseevMITIPSv03::Form_2::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	comboBox1->Items->Clear();
	for (auto i : Features) {
		String^ Feature_names;
		Feature_names = Convert_string_to_String(i.feature_name, Feature_names);
		comboBox1->Items->Add(Feature_names);
	}
    tabControl1->SelectedTab = tabPage4;

    return System::Void();
}

System::Void AlekseevMITIPSv03::Form_2::button4_Click(System::Object^ sender, System::EventArgs^ e)
{
	comboBox2->Items->Clear();
	for (auto i : Features) {
		String^ Feature_names;
		Feature_names = Convert_string_to_String(i.feature_name, Feature_names);
		comboBox2->Items->Add(Feature_names);
	}

    tabControl1->SelectedTab = tabPage5;
    return System::Void();
}

System::Void AlekseevMITIPSv03::Form_2::button5_Click(System::Object^ sender, System::EventArgs^ e)
{
    tabControl1->SelectedTab = tabPage6;

	comboBox3->Items->Clear();
	for (auto i : �linicals) {
		String^ �linical_name;
		�linical_name = Convert_string_to_String(i.disease_name, �linical_name);
		comboBox3->Items->Add(�linical_name);
	}
	listBox7->Items->Clear();
	for (auto i : Features) {
		String^ Feature_name;
		Feature_name = Convert_string_to_String(i.feature_name, Feature_name);
		listBox7->Items->Add(Feature_name);
	}

    return System::Void();
}

System::Void AlekseevMITIPSv03::Form_2::button6_Click(System::Object^ sender, System::EventArgs^ e)
{
    tabControl1->SelectedTab = tabPage7;
	comboBox4->Items->Clear();
	for (auto i : �linicals) {
		String^ �linical_name;
		�linical_name = Convert_string_to_String(i.disease_name, �linical_name);
		comboBox4->Items->Add(�linical_name);
	}
    return System::Void();
}

System::Void AlekseevMITIPSv03::Form_2::button7_Click(System::Object^ sender, System::EventArgs^ e)
{
    tabControl1->SelectedTab = tabPage8;
    return System::Void();
}

System::Void AlekseevMITIPSv03::Form_2::comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
	String^ selected = comboBox1->SelectedItem->ToString();
	MessageBox::Show(selected);

	for (auto i : Features) {
		String^ Feature_names;
		Feature_names = Convert_string_to_String(i.feature_name, Feature_names);
		if (comboBox1->SelectedItem->ToString() == Feature_names) {
			listBox3->Items->Clear();
			for (std::string ss : i.possible_values) {
				String^ Possible_values;
				Possible_values = Convert_string_to_String(ss, Possible_values);
				listBox3->Items->Add(Possible_values);
			}
		}
	}


	//for (Feature F : Features) {
	//	if (F.feature_name == s) {
	//		for (std::string ss : F.possible_values) {
	//			String^ Possible_values;
	//			Possible_values = Convert_string_to_String(ss, Possible_values);
	//			listBox3->Items->Add(Possible_values);
	//		}
	//	}
	//}


	return System::Void();
}

System::Void AlekseevMITIPSv03::Form_2::button12_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (listBox5->SelectedItem) {
		std::string s;
		Convert_String_to_string(listBox5->SelectedItem->ToString(), s);
		String^ selected = listBox5->SelectedItem->ToString();
		MessageBox::Show(selected);	
		for (int i = 0; i < Features.size(); i++) {
			String^ Feature_name;
			Feature_name = Convert_string_to_String(Features[i].feature_name, Feature_name);
			if (Feature_name == comboBox2->SelectedItem->ToString()) {
				Features[i].delete_normal_value(s);
				listBox5->Items->Remove(listBox5->SelectedItem);
			}
		}

	}
	else {
		MessageBox::Show("�� ������� ���������� ��������!", "����������", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	

	return System::Void();
}

System::Void AlekseevMITIPSv03::Form_2::Form_2_Load(System::Object^ sender, System::EventArgs^ e)
{
    //Features.push_back(Feature("�������� ����� �����"));
    //Features.push_back(Feature("�������� ����� ��������� ����"));
    //Features.push_back(Feature("������� ������� ��������"));
    //Features.push_back(Feature("������� ������������ �����������"));
    //Features.push_back(Feature("������� ������������ ��� ������������� �������"));
    //Features.push_back(Feature("���������� � ������������ �����������������"));
    //Features.push_back(Feature("������� ������������ �������� � �������"));
    Features.push_back(f1);
    Features.push_back(f2);
    Features.push_back(f3);
    Features.push_back(f4);
    Features.push_back(f5);
    Features.push_back(f6);
    Features.push_back(f7);

    �linicals.push_back(c1);
	�linicals.push_back(c2);
	�linicals.push_back(c3);
	�linicals.push_back(c4);
	�linicals.push_back(c5);
	�linicals.push_back(c6);


    //�linicals.push_back(�linical("������"));
    //�linicals.push_back(�linical("����������� ���������"));
    //�linicals.push_back(�linical("������������ ���������"));
    //�linicals.push_back(�linical("������������� ���������"));
    //�linicals.push_back(�linical("���������� ���������"));
    //�linicals.push_back(�linical("������������� ���������"));

    listBox1->Items->Clear();
    for (auto i : �linicals) {
        String^ �linical_names;
        �linical_names = Convert_string_to_String(i.disease_name, �linical_names);
        listBox1->Items->Add(�linical_names);
    }

    listBox2->Items->Clear();
    for (auto i : Features) {
        String^ Feature_names;
        Feature_names = Convert_string_to_String(i.feature_name, Feature_names);
        listBox2->Items->Add(Feature_names);
    }






         //   sqlConn->ConnectionString = "datasource = localhost; port=3306; username=root; \
	     //   password = 1111; database = db_ontology";
         //   sqlConn->Open();
         //   sqlCmd->Connection = sqlConn;
         //   sqlCmd->CommandText = "Select disease_name from diseases";
         //   sqlRd = sqlCmd->ExecuteReader();
         //   sqlDt1->Load(sqlRd);
         //   sqlRd->Close();
         //   sqlConn->Close();
         //   listBox2->DataSource = sqlDt1;
   
    return System::Void();
}

System::Void AlekseevMITIPSv03::Form_2::button8_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (textBox1->Text != "")
	{
		if (!listBox1->Items->Contains(textBox1->Text))
		{
			MessageBox::Show(textBox1->Text);
			std::string clinical_name;
			Convert_String_to_string(textBox1->Text, clinical_name);
			disease_names.insert(clinical_name);
			�linical c_tmp = (clinical_name);
			�linicals.push_back(c_tmp);
			listBox1->Items->Clear();
			for (auto i : �linicals) {
				String^ �linical_names;
				�linical_names = Convert_string_to_String(i.disease_name, �linical_names);
				listBox1->Items->Add(�linical_names);
			}
		}
		else
		{
			MessageBox::Show("����������� ��� ����������!", "����������", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}

	}
	else
	{
		MessageBox::Show("���� �������� ����������� ������!", "����������", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	return System::Void();
}

System::Void AlekseevMITIPSv03::Form_2::button9_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (textBox2->Text != "")
	{
		if (!listBox2->Items->Contains(textBox2->Text))
		{
			MessageBox::Show(textBox2->Text);
			std::string feature_name;
			Convert_String_to_string(textBox2->Text, feature_name);
			feature_names.insert(feature_name);
			Feature c_tmp = (feature_name);
			Features.push_back(c_tmp);
			listBox2->Items->Clear();
			for (auto i : Features) {
				String^ Feature_names;
				Feature_names = Convert_string_to_String(i.feature_name, Feature_names);
				listBox2->Items->Add(Feature_names);
			}
		}
		else
		{
			MessageBox::Show("������� ��� ����������!", "����������", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}

	}
	else
	{
		MessageBox::Show("���� �������� �������� ������!", "����������", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	return System::Void();
}

System::Void AlekseevMITIPSv03::Form_2::button11_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (textBox4->Text->ToString() != "")
	{
		if (!listBox3->Items->Contains(textBox4->Text->ToString()))
		{
			MessageBox::Show(textBox4->Text);
			std::string value;
			Convert_String_to_string(textBox4->Text->ToString(), value);

			for (int i = 0; i < Features.size(); i++) {
				String^ Feature_name;
				Feature_name = Convert_string_to_String(Features[i].feature_name, Feature_name);
				if (Feature_name == comboBox1->Text->ToString()) {
					Features[i].add_value(value);
					listBox3->Items->Clear();
					//Features[1].possible_values = { " 123123", "55", "dss" };
					for (std::string s : Features[i].possible_values) {
						String^ Possible_value;
						Possible_value = Convert_string_to_String(s, Possible_value);
						listBox3->Items->Add(Possible_value);
					}
				}
			}
		}
		else
		{
			MessageBox::Show("�������� �������� ��� ����������!", "����������", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
	else
	{
		MessageBox::Show("���� �������� �������� ������!", "����������", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	return System::Void();
}

System::Void AlekseevMITIPSv03::Form_2::comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
	String^ selected = comboBox2->SelectedItem->ToString();
	MessageBox::Show(selected);

	for (auto i : Features) {
		String^ Feature_names;
		Feature_names = Convert_string_to_String(i.feature_name, Feature_names);
		if (comboBox2->SelectedItem->ToString() == Feature_names) {
			listBox4->Items->Clear();
			for (std::string ss : i.possible_values) {
				String^ Possible_values;
				Possible_values = Convert_string_to_String(ss, Possible_values);
				listBox4->Items->Add(Possible_values);
			}
		}
	}

	for (auto i : Features) {
		String^ Feature_names;
		Feature_names = Convert_string_to_String(i.feature_name, Feature_names);
		if (comboBox2->SelectedItem->ToString() == Feature_names) {
			listBox5->Items->Clear();
			for (std::string ss : i.normal_values) {
				String^ Normal_values;
				Normal_values = Convert_string_to_String(ss, Normal_values);
				listBox5->Items->Add(Normal_values);
			}
		}
	}

	return System::Void();
}

System::Void AlekseevMITIPSv03::Form_2::button10_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (listBox4->SelectedItem) {
		if (!listBox5->Items->Contains(listBox4->SelectedItem)) {
			std::string s;
			Convert_String_to_string(listBox4->SelectedItem->ToString(), s);
			String^ selected = listBox4->SelectedItem->ToString();
			for (int i = 0; i < Features.size(); i++) {
				String^ Feature_name;
				Feature_name = Convert_string_to_String(Features[i].feature_name, Feature_name);
				if (Feature_name == comboBox2->SelectedItem->ToString()) {
					MessageBox::Show(listBox4->SelectedItem->ToString());
					Features[i].add_normal_value(s);
					listBox5->Items->Add(listBox4->SelectedItem);
				}
			}
		}
		else {
			MessageBox::Show("��������� �������� ��� ��������� � ���������� ��������!", "����������", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
	else {
		MessageBox::Show("�� ������� ��������� ��������!", "����������", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

	return System::Void();
}

System::Void AlekseevMITIPSv03::Form_2::comboBox3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
	listBox6->Items->Clear();
	for (auto i : �linicals) {
		String^ �linical_name;
		�linical_name = Convert_string_to_String(i.disease_name, �linical_name);
		if (comboBox3->SelectedItem->ToString() == �linical_name) {
			for (auto ii : i.disease_features) {
				String^ Disease_feature_name;
				Disease_feature_name = Convert_string_to_String(ii.feature_name, Disease_feature_name);
				listBox6->Items->Add(Disease_feature_name);
			}
		}
	}
	return System::Void();
}

System::Void AlekseevMITIPSv03::Form_2::button14_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (listBox7->SelectedItem) {
		if (!listBox6->Items->Contains(listBox7->SelectedItem)) {
			std::string s;
			Convert_String_to_string(listBox7->SelectedItem->ToString(), s);
			String^ selected = listBox7->SelectedItem->ToString();
			for (int i = 0; i < �linicals.size(); i++) {
				String^ �linical_name;
				�linical_name = Convert_string_to_String(�linicals[i].disease_name, �linical_name);
				if (�linical_name == comboBox3->SelectedItem->ToString()) {
					listBox6->Items->Add(listBox7->SelectedItem);
					�linicals[i].add_feature(s);
				}
			}
		}
		else {
			MessageBox::Show("������� ��� �������� � ����������� �������!", "����������", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
	else {
		MessageBox::Show("�� ������ ������� ��������!", "����������", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

	return System::Void();
}

System::Void AlekseevMITIPSv03::Form_2::button13_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (listBox6->SelectedItem) {
		std::string s;
		Convert_String_to_string(listBox6->SelectedItem->ToString(), s);
		String^ selected = listBox6->SelectedItem->ToString();
		for (int i = 0; i < �linicals.size(); i++) {
			String^ �linical_name;
			�linical_name = Convert_string_to_String(�linicals[i].disease_name, �linical_name);
			if (�linical_name == comboBox3->SelectedItem->ToString()) {
				listBox6->Items->Remove(listBox6->SelectedItem);
				�linicals[i].delete_feature(s);
			}
		}
	}
	else {
		MessageBox::Show("�� ������ ������� �� ����������� �������!", "����������", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	return System::Void();
}

System::Void AlekseevMITIPSv03::Form_2::button21_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (listBox9->SelectedItem) {
		if (!listBox8->Items->Contains(listBox9->SelectedItem)) {
			std::string s;
			Convert_String_to_string(listBox9->SelectedItem->ToString(), s);

			for (int i = 0; i < �linicals.size(); i++) {
				String^ �linical_name;
				�linical_name = Convert_string_to_String(�linicals[i].disease_name, �linical_name);
				if (�linical_name == comboBox4->SelectedItem->ToString()) {
					for (Feature F : �linicals[i].disease_features) {
						String^ �linical_Feature_name;
						�linical_Feature_name = Convert_string_to_String(F.feature_name, �linical_Feature_name);
						if (�linical_Feature_name == comboBox5->SelectedItem->ToString()) {
							�linicals[i].add_disease_value(F, s);
							if (!F.normal_values.contains(s)) {
								listBox8->Items->Add(listBox9->SelectedItem);
							}			
						}
					}					
				}
			}
		}
		else {
			MessageBox::Show("�������� ��� ��������� � �������� ��� �����������!", "����������", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
	else {
		MessageBox::Show("�� ������� ��������� ��������!", "����������", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

	return System::Void();
}

System::Void AlekseevMITIPSv03::Form_2::button20_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (listBox5->SelectedItem) {
		std::string s;
		Convert_String_to_string(listBox5->SelectedItem->ToString(), s);
		String^ selected = listBox5->SelectedItem->ToString();
		MessageBox::Show(selected);
		for (int i = 0; i < Features.size(); i++) {
			String^ Feature_name;
			Feature_name = Convert_string_to_String(Features[i].feature_name, Feature_name);
			if (Feature_name == comboBox2->SelectedItem->ToString()) {
				Features[i].delete_normal_value(s);
				listBox5->Items->Remove(listBox5->SelectedItem);
			}
		}

	}
	else {
		MessageBox::Show("�� ������� ���������� ��������!", "����������", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

	return System::Void();
}

System::Void AlekseevMITIPSv03::Form_2::comboBox4_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
	comboBox5->Items->Clear();
	listBox9->Items->Clear();
	listBox8->Items->Clear();
	for (auto i : �linicals) {
		String^ �linical_name;
		�linical_name = Convert_string_to_String(i.disease_name, �linical_name);
		if (comboBox4->SelectedItem->ToString() == �linical_name) {
			for (auto ii : i.disease_features) {
				String^ Disease_feature_name;
				Disease_feature_name = Convert_string_to_String(ii.feature_name, Disease_feature_name);
				comboBox5->Items->Add(Disease_feature_name);
			}
		}
	}
	return System::Void();
}

System::Void AlekseevMITIPSv03::Form_2::comboBox5_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
	listBox9->Items->Clear();
	listBox8->Items->Clear();

	for (auto i : Features) {
		String^ Feature_name;
		Feature_name = Convert_string_to_String(i.feature_name, Feature_name);
		if (comboBox5->SelectedItem->ToString() == Feature_name) {
			for (auto ii : i.possible_values) {
				String^ Possible_values_name;
				Possible_values_name = Convert_string_to_String(ii, Possible_values_name);
				listBox9->Items->Add(Possible_values_name);
			}
		}
	}

	for (int i = 0; i < �linicals.size(); i++) {
		String^ �linical_name;
		�linical_name = Convert_string_to_String(�linicals[i].disease_name, �linical_name);
		if (�linical_name == comboBox4->SelectedItem->ToString()) {
			for (Feature F : �linicals[i].disease_features) {
				String^ �linical_Feature_name;
				�linical_Feature_name = Convert_string_to_String(F.feature_name, �linical_Feature_name);
				if (�linical_Feature_name == comboBox5->SelectedItem->ToString()) {
					for (std::string ii : F.disease_values) {
						String^ Disease_values_name;
						Disease_values_name = Convert_string_to_String(ii, Disease_values_name);
						listBox8->Items->Add(Disease_values_name);
					}
				}
			}
		}
	}


	return System::Void();
}
