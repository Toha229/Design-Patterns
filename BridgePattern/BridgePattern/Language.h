#include <iostream>
using namespace std;

#pragma once
__interface ILanguage
{
public:
	string GetLanguage() = 0;
	double GetSalary() = 0;
};

class Cpp :public ILanguage {
public:
	string GetLanguage() {
		return "C++ Language";
	}
	double GetSalary() {
		return 700;
	}
};

class CSharp :public ILanguage {
public:
	string GetLanguage() {
		return "C# Language";
	}
	double GetSalary() {
		return 900;
	}
};