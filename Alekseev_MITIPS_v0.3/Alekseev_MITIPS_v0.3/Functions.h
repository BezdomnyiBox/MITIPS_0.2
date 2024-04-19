#pragma once
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <wchar.h>
#include <windows.h>
#include <fileapi.h>
#include <stringapiset.h>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <conio.h>
#include <stdlib.h>
#include <mysql.h>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace MySql::Data::MySqlClient;
inline MYSQL* link;



inline void ConnectToDB() {
	const char Host[] = { "localhost" };
	const char User[] = { "root" };
	const char Pass[] = { "1111" };
	const char DBase[] = { "db_ontology" };

	setlocale(LC_ALL, ".1251");

	link = mysql_init(0);
	if (!link)
	{
		MessageBox::Show("Невозможно получить дескриптор подключения к базе данных!", "Ошибка");
	}

	// Соединение
	if (!mysql_real_connect(link, Host, User, Pass, DBase, 0, 0, 0))
	{
		MessageBox::Show("Невозможно подключиться к базе данных!", "Ошибка");
	}
	else {
		MessageBox::Show("Подключено к базе данных!", "Успешно");
	}
}

/*  функции конвертирования */

//конвертируем System::string^ в std::string
inline std::string& Convert_String_to_string(String^ s, std::string& os)
{
	using namespace Runtime::InteropServices;
	const char* chars =
		(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));

	return os;
}

//конвертируем std::string в System::string^'
inline String^ Convert_string_to_String(std::string& os, String^ s)
{
	s = gcnew System::String(os.c_str());
	return s;
}

//конвертируем System::string^ в std::string
inline std::string& Convert_String_to_string(String^ s)
{
	std::string os;
	using namespace Runtime::InteropServices;
	const char* chars =
		(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));
	return os;
}

//конвертируем std::string в System::string^
inline String^ Convert_string_to_String(std::string& os)
{
	System::String^ s = gcnew System::String(os.c_str());
	return s;
}

// конвертируем System::string^ в char*
inline char* Convert_String_to_char(System::String^ string)
{
	using namespace System::Runtime::InteropServices;
	return (char*)(void*)Marshal::StringToHGlobalAnsi(string);
}

