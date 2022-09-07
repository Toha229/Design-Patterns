#pragma once
#include<string>
#include "Language.h"



class Programmer abstract
{
protected:
	int monthes = 0;
	ILanguage* language;

public:
	virtual string GetSalary() = 0;
	int GetMonthes() {
		return monthes;
	}
	void SetMonthes(int monthes) {
		if (monthes >= 0)
			this->monthes = monthes;
	}
	void ChangeLanguage(ILanguage* language) 
	{
		this->language = language;
	}
};

class Freelancer :public Programmer {
public:
	Freelancer(ILanguage* language)
	{
		this->language = language;
	}
	string GetSalary() override {
		return "Freelancer who codes in " + language->GetLanguage() + " has a salary $" + to_string(language->GetSalary());
	}
};

class CompanyProgrammer :public Programmer {
private:
	double taxes;

public:
	CompanyProgrammer(ILanguage* language, double taxes)
		:taxes(taxes)
	{
		this->language = language;
	}
	string GetSalary() override {
		return "Job programer who codes in " + language->GetLanguage() + " has a salary $" + to_string(language->GetSalary() * (taxes + 1));
	}
};