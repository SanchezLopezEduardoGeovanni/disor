#include <iostream>
#include <msclr\marshal_cppstd.h>
#include "..\StringConvertidor.h"

using namespace std;
using namespace System;

StringConvertidor::StringConvertidor(void)
{
}

string StringConvertidor::convertSystemStringToStdString(System::String^ str){
	return msclr::interop::marshal_as<std::string>(str);
}

String^ StringConvertidor::convertStdStringToSystemString(string str){
	return gcnew String(str.c_str());
}
