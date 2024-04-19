#pragma once


namespace AlekseevMITIPSv03 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Сводка для Form_2
	/// </summary>
	public ref class Form_2 : public System::Windows::Forms::Form
	{
		MySqlConnection^ sqlConn = gcnew MySqlConnection();
		MySqlCommand^ sqlCmd = gcnew MySqlCommand();
		DataTable^ sqlDt1 = gcnew DataTable();
		DataTable^ sqlDt2 = gcnew DataTable();
		MySqlDataAdapter^ sqlDtA = gcnew MySqlDataAdapter();
		MySqlDataReader^ sqlRd;
	public:
		Form_2(void)
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
		~Form_2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::TabPage^ tabPage6;
	private: System::Windows::Forms::TabPage^ tabPage7;
	private: System::Windows::Forms::TabPage^ tabPage8;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::ListBox^ listBox3;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::ListBox^ listBox5;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ListBox^ listBox4;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::ListBox^ listBox6;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::ListBox^ listBox7;
	private: System::Windows::Forms::ComboBox^ comboBox4;
	private: System::Windows::Forms::Label^ label12;


	private: System::Windows::Forms::Label^ label13;

	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::ComboBox^ comboBox5;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::ListBox^ listBox8;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::ListBox^ listBox9;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::ListBox^ listBox10;
	private: System::Windows::Forms::ListBox^ listBox11;








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
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->listBox5 = (gcnew System::Windows::Forms::ListBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->listBox4 = (gcnew System::Windows::Forms::ListBox());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->listBox6 = (gcnew System::Windows::Forms::ListBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->listBox7 = (gcnew System::Windows::Forms::ListBox());
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->listBox8 = (gcnew System::Windows::Forms::ListBox());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->listBox9 = (gcnew System::Windows::Forms::ListBox());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->tabPage8 = (gcnew System::Windows::Forms::TabPage());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->listBox10 = (gcnew System::Windows::Forms::ListBox());
			this->listBox11 = (gcnew System::Windows::Forms::ListBox());
			this->tableLayoutPanel1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->tabPage6->SuspendLayout();
			this->tabPage7->SuspendLayout();
			this->tabPage8->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel1->Controls->Add(this->button1, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->button2, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->button3, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->button4, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->button5, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->button6, 0, 5);
			this->tableLayoutPanel1->Controls->Add(this->button7, 0, 6);
			this->tableLayoutPanel1->Location = System::Drawing::Point(6, 10);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 7;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.28571F)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(96, 386);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(3, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(90, 49);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Заболевания";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form_2::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(3, 58);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(90, 49);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Признаки";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form_2::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(3, 113);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(90, 49);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Возможные значения признаков";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form_2::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(3, 168);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(90, 49);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Нормальные значения признаков";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form_2::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(3, 223);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(90, 49);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Клиническая картина";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form_2::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(3, 278);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(90, 49);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Значения признаков для заболеваний";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form_2::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(3, 333);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(90, 50);
			this->button7->TabIndex = 6;
			this->button7->Text = L"Проверка полноты знаний";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form_2::button7_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::White;
			this->groupBox1->Controls->Add(this->tableLayoutPanel1);
			this->groupBox1->Location = System::Drawing::Point(6, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(108, 417);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::White;
			this->groupBox2->Controls->Add(this->tabControl1);
			this->groupBox2->Location = System::Drawing::Point(120, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(572, 417);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			// 
			// tabControl1
			// 
			this->tabControl1->Appearance = System::Windows::Forms::TabAppearance::Buttons;
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Controls->Add(this->tabPage6);
			this->tabControl1->Controls->Add(this->tabPage7);
			this->tabControl1->Controls->Add(this->tabPage8);
			this->tabControl1->ItemSize = System::Drawing::Size(0, 1);
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(572, 417);
			this->tabControl1->SizeMode = System::Windows::Forms::TabSizeMode::Fixed;
			this->tabControl1->TabIndex = 0;
			this->tabControl1->TabStop = false;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 5);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(564, 408);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Вход";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &Form_2::tabPage1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(158, 179);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(254, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Добро пожаловать!";
			this->label1->Click += gcnew System::EventHandler(this, &Form_2::label1_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button17);
			this->tabPage2->Controls->Add(this->button16);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Controls->Add(this->textBox1);
			this->tabPage2->Controls->Add(this->button8);
			this->tabPage2->Controls->Add(this->listBox1);
			this->tabPage2->Location = System::Drawing::Point(4, 5);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(564, 408);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Заболевания";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button17->Location = System::Drawing::Point(481, 85);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(77, 29);
			this->button17->TabIndex = 5;
			this->button17->Text = L"Изменить";
			this->button17->UseVisualStyleBackColor = true;
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button16->Location = System::Drawing::Point(398, 85);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(77, 29);
			this->button16->TabIndex = 4;
			this->button16->Text = L"Удалить";
			this->button16->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(6, 14);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(146, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Название заболевания";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(6, 30);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(469, 29);
			this->textBox1->TabIndex = 2;
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(481, 30);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(77, 29);
			this->button8->TabIndex = 1;
			this->button8->Text = L"Добавить";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form_2::button8_Click);
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 24;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Здоров", L"Перинотальная депрессия", L"Психогенная депрессия",
					L"Соматическая депрессия", L"Фармакогенная депрессия", L"Эндогенная депрессия"
			});
			this->listBox1->Location = System::Drawing::Point(6, 120);
			this->listBox1->Name = L"listBox1";
			this->listBox1->ScrollAlwaysVisible = true;
			this->listBox1->Size = System::Drawing::Size(552, 268);
			this->listBox1->TabIndex = 0;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form_2::listBox1_SelectedIndexChanged);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->button18);
			this->tabPage3->Controls->Add(this->button19);
			this->tabPage3->Controls->Add(this->label3);
			this->tabPage3->Controls->Add(this->textBox2);
			this->tabPage3->Controls->Add(this->button9);
			this->tabPage3->Controls->Add(this->listBox2);
			this->tabPage3->Location = System::Drawing::Point(4, 5);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(564, 408);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Признаки";
			this->tabPage3->UseVisualStyleBackColor = true;
			this->tabPage3->Click += gcnew System::EventHandler(this, &Form_2::tabPage3_Click);
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button18->Location = System::Drawing::Point(481, 83);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(77, 29);
			this->button18->TabIndex = 9;
			this->button18->Text = L"Изменить";
			this->button18->UseVisualStyleBackColor = true;
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button19->Location = System::Drawing::Point(398, 83);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(77, 29);
			this->button19->TabIndex = 8;
			this->button19->Text = L"Удалить";
			this->button19->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(6, 14);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(125, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Название признака";
			this->label3->Click += gcnew System::EventHandler(this, &Form_2::label3_Click);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(6, 30);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(469, 29);
			this->textBox2->TabIndex = 6;
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(481, 30);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(77, 29);
			this->button9->TabIndex = 5;
			this->button9->Text = L"Добавить";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form_2::button9_Click);
			// 
			// listBox2
			// 
			this->listBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox2->FormattingEnabled = true;
			this->listBox2->HorizontalScrollbar = true;
			this->listBox2->ItemHeight = 24;
			this->listBox2->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Значение шкалы Занга", L"Значение шкалы депрессии Бека",
					L"История лечения пациента", L"Наличие соматических заболеваний", L"Наличие беременности или послеродового периода", L"Склонность к употреблению психостимуляторов",
					L"Наличие травмирующих эпизодов в детстве"
			});
			this->listBox2->Location = System::Drawing::Point(6, 120);
			this->listBox2->Name = L"listBox2";
			this->listBox2->ScrollAlwaysVisible = true;
			this->listBox2->Size = System::Drawing::Size(552, 268);
			this->listBox2->TabIndex = 4;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->comboBox1);
			this->tabPage4->Controls->Add(this->label5);
			this->tabPage4->Controls->Add(this->textBox4);
			this->tabPage4->Controls->Add(this->button11);
			this->tabPage4->Controls->Add(this->label4);
			this->tabPage4->Controls->Add(this->listBox3);
			this->tabPage4->Location = System::Drawing::Point(4, 5);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(564, 408);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"ВЗП";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Значение шкалы Занга", L"Значение шкалы депрессии Бека",
					L"История лечения пациента", L"Наличие соматических заболеваний", L"Наличие беременности или послеродового периода", L"Склонность к употреблению психостимуляторов",
					L"Наличие травмирующих эпизодов в детстве"
			});
			this->comboBox1->Location = System::Drawing::Point(6, 30);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(469, 32);
			this->comboBox1->TabIndex = 11;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form_2::comboBox1_SelectedIndexChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(6, 67);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(123, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Значение признака";
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(6, 83);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(469, 29);
			this->textBox4->TabIndex = 9;
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->Location = System::Drawing::Point(481, 83);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(77, 29);
			this->button11->TabIndex = 8;
			this->button11->Text = L"Добавить";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Form_2::button11_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(6, 14);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(128, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Выбранный признак";
			// 
			// listBox3
			// 
			this->listBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox3->FormattingEnabled = true;
			this->listBox3->ItemHeight = 24;
			this->listBox3->Location = System::Drawing::Point(6, 144);
			this->listBox3->Name = L"listBox3";
			this->listBox3->ScrollAlwaysVisible = true;
			this->listBox3->Size = System::Drawing::Size(552, 244);
			this->listBox3->TabIndex = 4;
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->label8);
			this->tabPage5->Controls->Add(this->label6);
			this->tabPage5->Controls->Add(this->button12);
			this->tabPage5->Controls->Add(this->listBox5);
			this->tabPage5->Controls->Add(this->comboBox2);
			this->tabPage5->Controls->Add(this->button10);
			this->tabPage5->Controls->Add(this->label7);
			this->tabPage5->Controls->Add(this->listBox4);
			this->tabPage5->Location = System::Drawing::Point(4, 5);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(564, 408);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"НЗП";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(5, 128);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(118, 13);
			this->label8->TabIndex = 21;
			this->label8->Text = L"Возможные значения\r\n";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(435, 128);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(123, 13);
			this->label6->TabIndex = 20;
			this->label6->Text = L"Нормальные значения\r\n";
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->Location = System::Drawing::Point(288, 109);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(52, 29);
			this->button12->TabIndex = 19;
			this->button12->Text = L"<<";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Form_2::button12_Click);
			// 
			// listBox5
			// 
			this->listBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox5->FormattingEnabled = true;
			this->listBox5->ItemHeight = 20;
			this->listBox5->Location = System::Drawing::Point(288, 144);
			this->listBox5->Name = L"listBox5";
			this->listBox5->ScrollAlwaysVisible = true;
			this->listBox5->Size = System::Drawing::Size(270, 244);
			this->listBox5->TabIndex = 18;
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(6, 30);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(450, 32);
			this->comboBox2->TabIndex = 17;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &Form_2::comboBox2_SelectedIndexChanged);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->Location = System::Drawing::Point(226, 109);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(52, 29);
			this->button10->TabIndex = 14;
			this->button10->Text = L">>";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form_2::button10_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(6, 14);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(128, 13);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Выбранный признак";
			// 
			// listBox4
			// 
			this->listBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox4->FormattingEnabled = true;
			this->listBox4->ItemHeight = 20;
			this->listBox4->Location = System::Drawing::Point(8, 144);
			this->listBox4->Name = L"listBox4";
			this->listBox4->ScrollAlwaysVisible = true;
			this->listBox4->Size = System::Drawing::Size(270, 244);
			this->listBox4->TabIndex = 12;
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->label9);
			this->tabPage6->Controls->Add(this->label10);
			this->tabPage6->Controls->Add(this->button13);
			this->tabPage6->Controls->Add(this->listBox6);
			this->tabPage6->Controls->Add(this->comboBox3);
			this->tabPage6->Controls->Add(this->button14);
			this->tabPage6->Controls->Add(this->label11);
			this->tabPage6->Controls->Add(this->listBox7);
			this->tabPage6->Location = System::Drawing::Point(4, 5);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(3);
			this->tabPage6->Size = System::Drawing::Size(564, 408);
			this->tabPage6->TabIndex = 5;
			this->tabPage6->Text = L"Клиническая картина";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(9, 131);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(122, 13);
			this->label9->TabIndex = 29;
			this->label9->Text = L"Множество признаков\r\n";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(441, 131);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(117, 13);
			this->label10->TabIndex = 28;
			this->label10->Text = L"Выбранные признаки";
			this->label10->Click += gcnew System::EventHandler(this, &Form_2::label10_Click);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button13->Location = System::Drawing::Point(288, 112);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(52, 29);
			this->button13->TabIndex = 27;
			this->button13->Text = L"<<";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Form_2::button13_Click);
			// 
			// listBox6
			// 
			this->listBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox6->FormattingEnabled = true;
			this->listBox6->HorizontalScrollbar = true;
			this->listBox6->ItemHeight = 20;
			this->listBox6->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"Значение шкалы Занга", L"Значение шкалы депрессии Бека",
					L"Наличие соматических заболеваний"
			});
			this->listBox6->Location = System::Drawing::Point(288, 147);
			this->listBox6->Name = L"listBox6";
			this->listBox6->ScrollAlwaysVisible = true;
			this->listBox6->Size = System::Drawing::Size(270, 244);
			this->listBox6->TabIndex = 26;
			// 
			// comboBox3
			// 
			this->comboBox3->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Значение шкалы Занга", L"Значение шкалы депрессии Бека",
					L"История лечения пациента", L"Наличие соматических заболеваний", L"Наличие беременности или послеродового периода", L"Склонность к употреблению психостимуляторов",
					L"Наличие травмирующих эпизодов в детстве"
			});
			this->comboBox3->Location = System::Drawing::Point(10, 33);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(449, 32);
			this->comboBox3->TabIndex = 25;
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &Form_2::comboBox3_SelectedIndexChanged);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->Location = System::Drawing::Point(230, 112);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(52, 29);
			this->button14->TabIndex = 24;
			this->button14->Text = L">>";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &Form_2::button14_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(10, 17);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(154, 13);
			this->label11->TabIndex = 23;
			this->label11->Text = L"Выбранное заболевание";
			// 
			// listBox7
			// 
			this->listBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox7->FormattingEnabled = true;
			this->listBox7->HorizontalScrollbar = true;
			this->listBox7->ItemHeight = 20;
			this->listBox7->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Значение шкалы Занга", L"Значение шкалы депрессии Бека",
					L"История лечения пациента", L"Наличие соматических заболеваний", L"Наличие беременности или послеродового периода", L"Склонность к употреблению психостимуляторов",
					L"Наличие травмирующих эпизодов в детстве"
			});
			this->listBox7->Location = System::Drawing::Point(12, 147);
			this->listBox7->Name = L"listBox7";
			this->listBox7->ScrollAlwaysVisible = true;
			this->listBox7->Size = System::Drawing::Size(270, 244);
			this->listBox7->TabIndex = 22;
			// 
			// tabPage7
			// 
			this->tabPage7->Controls->Add(this->label14);
			this->tabPage7->Controls->Add(this->label15);
			this->tabPage7->Controls->Add(this->button20);
			this->tabPage7->Controls->Add(this->listBox8);
			this->tabPage7->Controls->Add(this->button21);
			this->tabPage7->Controls->Add(this->listBox9);
			this->tabPage7->Controls->Add(this->comboBox5);
			this->tabPage7->Controls->Add(this->comboBox4);
			this->tabPage7->Controls->Add(this->label12);
			this->tabPage7->Controls->Add(this->label13);
			this->tabPage7->Location = System::Drawing::Point(4, 5);
			this->tabPage7->Name = L"tabPage7";
			this->tabPage7->Padding = System::Windows::Forms::Padding(3);
			this->tabPage7->Size = System::Drawing::Size(564, 408);
			this->tabPage7->TabIndex = 6;
			this->tabPage7->Text = L"ЗП для заболеваний";
			this->tabPage7->UseVisualStyleBackColor = true;
			this->tabPage7->Click += gcnew System::EventHandler(this, &Form_2::tabPage7_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(11, 128);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(118, 13);
			this->label14->TabIndex = 27;
			this->label14->Text = L"Возможные значения\r\n";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(413, 125);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(145, 13);
			this->label15->TabIndex = 26;
			this->label15->Text = L"Значение для заболевания";
			this->label15->Click += gcnew System::EventHandler(this, &Form_2::label15_Click);
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button20->Location = System::Drawing::Point(288, 109);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(52, 29);
			this->button20->TabIndex = 25;
			this->button20->Text = L"<<";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &Form_2::button20_Click);
			// 
			// listBox8
			// 
			this->listBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox8->FormattingEnabled = true;
			this->listBox8->ItemHeight = 20;
			this->listBox8->Location = System::Drawing::Point(288, 144);
			this->listBox8->Name = L"listBox8";
			this->listBox8->ScrollAlwaysVisible = true;
			this->listBox8->Size = System::Drawing::Size(270, 244);
			this->listBox8->TabIndex = 24;
			// 
			// button21
			// 
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button21->Location = System::Drawing::Point(230, 109);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(52, 29);
			this->button21->TabIndex = 23;
			this->button21->Text = L">>";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &Form_2::button21_Click);
			// 
			// listBox9
			// 
			this->listBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox9->FormattingEnabled = true;
			this->listBox9->ItemHeight = 20;
			this->listBox9->Location = System::Drawing::Point(12, 144);
			this->listBox9->Name = L"listBox9";
			this->listBox9->ScrollAlwaysVisible = true;
			this->listBox9->Size = System::Drawing::Size(270, 244);
			this->listBox9->TabIndex = 22;
			this->listBox9->SelectedIndexChanged += gcnew System::EventHandler(this, &Form_2::listBox9_SelectedIndexChanged);
			// 
			// comboBox5
			// 
			this->comboBox5->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Location = System::Drawing::Point(14, 71);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(445, 32);
			this->comboBox5->TabIndex = 18;
			this->comboBox5->SelectedIndexChanged += gcnew System::EventHandler(this, &Form_2::comboBox5_SelectedIndexChanged);
			// 
			// comboBox4
			// 
			this->comboBox4->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(14, 14);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(445, 32);
			this->comboBox4->TabIndex = 17;
			this->comboBox4->SelectedIndexChanged += gcnew System::EventHandler(this, &Form_2::comboBox4_SelectedIndexChanged);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(14, 55);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(139, 13);
			this->label12->TabIndex = 16;
			this->label12->Text = L"Признак заболевания";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(14, 2);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(154, 13);
			this->label13->TabIndex = 13;
			this->label13->Text = L"Выбранное заболевание";
			// 
			// tabPage8
			// 
			this->tabPage8->Controls->Add(this->label16);
			this->tabPage8->Controls->Add(this->label17);
			this->tabPage8->Controls->Add(this->listBox10);
			this->tabPage8->Controls->Add(this->listBox11);
			this->tabPage8->Location = System::Drawing::Point(4, 5);
			this->tabPage8->Name = L"tabPage8";
			this->tabPage8->Padding = System::Windows::Forms::Padding(3);
			this->tabPage8->Size = System::Drawing::Size(564, 408);
			this->tabPage8->TabIndex = 7;
			this->tabPage8->Text = L"Проверка полноты знаний";
			this->tabPage8->UseVisualStyleBackColor = true;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(3, 5);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(74, 13);
			this->label16->TabIndex = 33;
			this->label16->Text = L"Заболевания\r\n";
			this->label16->Click += gcnew System::EventHandler(this, &Form_2::label16_Click);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(283, 5);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(57, 13);
			this->label17->TabIndex = 32;
			this->label17->Text = L"Признаки";
			this->label17->Click += gcnew System::EventHandler(this, &Form_2::label17_Click);
			// 
			// listBox10
			// 
			this->listBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox10->FormattingEnabled = true;
			this->listBox10->HorizontalScrollbar = true;
			this->listBox10->ItemHeight = 20;
			this->listBox10->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Значение шкалы Занга", L"Значение шкалы депрессии Бека",
					L"История лечения пациента", L"Наличие соматических заболеваний", L"Наличие беременности или послеродового периода", L"Склонность к употреблению психостимуляторов",
					L"Наличие травмирующих эпизодов в детстве"
			});
			this->listBox10->Location = System::Drawing::Point(286, 20);
			this->listBox10->Name = L"listBox10";
			this->listBox10->ScrollAlwaysVisible = true;
			this->listBox10->Size = System::Drawing::Size(276, 384);
			this->listBox10->TabIndex = 30;
			// 
			// listBox11
			// 
			this->listBox11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox11->FormattingEnabled = true;
			this->listBox11->HorizontalScrollbar = true;
			this->listBox11->ItemHeight = 20;
			this->listBox11->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Здоров", L"Перинотальная депрессия", L"Психогенная депрессия",
					L"Соматическая депрессия", L"Фармакогенная депрессия", L"Эндогенная депрессия"
			});
			this->listBox11->Location = System::Drawing::Point(3, 21);
			this->listBox11->Name = L"listBox11";
			this->listBox11->ScrollAlwaysVisible = true;
			this->listBox11->Size = System::Drawing::Size(276, 384);
			this->listBox11->TabIndex = 28;
			// 
			// Form_2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(704, 441);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->MaximumSize = System::Drawing::Size(720, 480);
			this->MinimumSize = System::Drawing::Size(720, 480);
			this->Name = L"Form_2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Редактор базы знаний";
			this->Load += gcnew System::EventHandler(this, &Form_2::Form_2_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			this->tabPage6->ResumeLayout(false);
			this->tabPage6->PerformLayout();
			this->tabPage7->ResumeLayout(false);
			this->tabPage7->PerformLayout();
			this->tabPage8->ResumeLayout(false);
			this->tabPage8->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void tabPage7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tabPage3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label15_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void listBox9_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label17_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label16_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Form_2_Load(System::Object^ sender, System::EventArgs^ e);
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void comboBox3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void comboBox4_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void comboBox5_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
};
}
