#pragma once

namespace AlekseevMITIPSv03 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Form_3
	/// </summary>
	public ref class Form_3 : public System::Windows::Forms::Form
	{
	public:
		Form_3(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Form_3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label14;
	protected:
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::ListBox^ listBox8;
	private: System::Windows::Forms::ListBox^ listBox9;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::Label^ label2;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->listBox8 = (gcnew System::Windows::Forms::ListBox());
			this->listBox9 = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(12, 6);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(57, 13);
			this->label14->TabIndex = 33;
			this->label14->Text = L"Признаки";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(367, 198);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(205, 13);
			this->label15->TabIndex = 32;
			this->label15->Text = L"Значение для наблюдаемого признака\r\n";
			// 
			// listBox8
			// 
			this->listBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox8->FormattingEnabled = true;
			this->listBox8->ItemHeight = 20;
			this->listBox8->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Присутствует", L"Отсутствует" });
			this->listBox8->Location = System::Drawing::Point(370, 22);
			this->listBox8->Name = L"listBox8";
			this->listBox8->ScrollAlwaysVisible = true;
			this->listBox8->Size = System::Drawing::Size(322, 164);
			this->listBox8->TabIndex = 30;
			this->listBox8->SelectedIndexChanged += gcnew System::EventHandler(this, &Form_3::listBox8_SelectedIndexChanged);
			// 
			// listBox9
			// 
			this->listBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox9->FormattingEnabled = true;
			this->listBox9->ItemHeight = 20;
			this->listBox9->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Значение шкалы Занга", L"Значение шкалы депрессии Бека",
					L"История лечения пациента", L"Наличие соматических заболеваний", L"Наличие беременности или послеродового периода", L"Склонность к употреблению психостимуляторов",
					L"Наличие травмирующих эпизодов в детстве"
			});
			this->listBox9->Location = System::Drawing::Point(12, 22);
			this->listBox9->Name = L"listBox9";
			this->listBox9->ScrollAlwaysVisible = true;
			this->listBox9->Size = System::Drawing::Size(322, 164);
			this->listBox9->TabIndex = 28;
			this->listBox9->SelectedIndexChanged += gcnew System::EventHandler(this, &Form_3::listBox9_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(270, 384);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(168, 45);
			this->button1->TabIndex = 34;
			this->button1->Text = L"Определить диагноз у пациента";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form_3::button1_Click);
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 20;
			this->listBox1->Location = System::Drawing::Point(12, 214);
			this->listBox1->Name = L"listBox1";
			this->listBox1->ScrollAlwaysVisible = true;
			this->listBox1->Size = System::Drawing::Size(322, 164);
			this->listBox1->TabIndex = 35;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form_3::listBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 198);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(132, 13);
			this->label1->TabIndex = 36;
			this->label1->Text = L"Наблюдаемые признаки\r\n";
			// 
			// listBox2
			// 
			this->listBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 20;
			this->listBox2->Location = System::Drawing::Point(370, 214);
			this->listBox2->Name = L"listBox2";
			this->listBox2->ScrollAlwaysVisible = true;
			this->listBox2->Size = System::Drawing::Size(322, 164);
			this->listBox2->TabIndex = 37;
			this->listBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &Form_3::listBox2_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(367, 6);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(106, 13);
			this->label2->TabIndex = 38;
			this->label2->Text = L"Значения признака\r\n";
			// 
			// Form_3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(704, 441);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->listBox8);
			this->Controls->Add(this->listBox9);
			this->MaximumSize = System::Drawing::Size(720, 480);
			this->MinimumSize = System::Drawing::Size(720, 480);
			this->Name = L"Form_3";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Form_3";
			this->Load += gcnew System::EventHandler(this, &Form_3::Form_3_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form_3_Load(System::Object^ sender, System::EventArgs^ e);
private: System::Void listBox8_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void listBox9_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void listBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
};
}
