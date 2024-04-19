#include "Form_1.h"
#include "Form_2.h"
#include "Form_3.h"
#include "mysql.h"
#include "Functions.h"

using namespace System;
using namespace System::Windows::Forms;



[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	AlekseevMITIPSv03::Form_1 form;
	Application::Run(% form);
}

std::string strokaId;

System::Void AlekseevMITIPSv03::Form_1::Form_1_Load(System::Object^ sender, System::EventArgs^ e)
{
    //ConnectToDB();
    MessageBox::Show("Не подключено к БД!", "Информация", MessageBoxButtons::OK, MessageBoxIcon::Information);
    return System::Void();
}

System::Void AlekseevMITIPSv03::Form_1::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
    //try
    //{
    //    if (textBox1->Text != "" && textBox2->Text != "")
    //    {
    //        sqlConn->ConnectionString = "datasource = localhost; port=3306; username=root; \
	   //     password = 1111; database = db_ontology";
    //        sqlConn->Open();
    //        sqlCmd->Connection = sqlConn;
    //        sqlCmd->CommandText = "Select user_name,user_password,user_speciality from users WHERE user_name='" + textBox1->Text + "' AND user_password ='" + textBox2->Text + "'";
    //        sqlRd = sqlCmd->ExecuteReader();
    //        if (sqlRd->HasRows)
    //        {
    //            sqlRd->Read();
    //            String^ speciality = sqlRd->GetString(2);
    //            sqlRd->Close();
    //            strokaId = Convert_String_to_string(speciality, strokaId);


    //            if (speciality == "expert") {

    //                Form_2^ form2 = gcnew Form_2();
    //                form2->Show();
    //                this->Hide();
    //            }
    //            else if (speciality == "user") {

    //                Form_3^ form3 = gcnew Form_3();
    //                form3->Show();
    //                this->Hide();
    //            }
    //            else
    //                MessageBox::Show("Пользователь с привлегией: " + speciality + " не существует!", "Непредвиденная ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
    //        }
    //        else
    //        {
    //            if (textBox1->Text == "expert") {

    //                Form_2^ form2 = gcnew Form_2();
    //                form2->Show();
    //                //this->Hide();
    //            }
    //            else if (textBox1->Text == "user") {
    //                Form_3^ form3 = gcnew Form_3();
    //                form3->Show();
    //                //this->Hide();
    //            }
    //            else {
    //                MessageBox::Show("Пользователь не найден!", "Информация", MessageBoxButtons::OK, MessageBoxIcon::Information);
    //            }

    //            
    //        }

    //        sqlConn->Close();

    //    }
    //    else
    //    {

    //        MessageBox::Show("Поле логин и/или пароль пустое!", "Информация", MessageBoxButtons::OK, MessageBoxIcon::Information);
    //    }
    //}
    //catch (Exception^ e) {
    //    MessageBox::Show(e->Message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
    //}

    Form_2^ form2 = gcnew Form_2();
    form2->Show();

	return System::Void();
}

System::Void AlekseevMITIPSv03::Form_1::label1_Click(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

System::Void AlekseevMITIPSv03::Form_1::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
    Form_3^ form3 = gcnew Form_3();
    form3->Show();

    return System::Void();
}
