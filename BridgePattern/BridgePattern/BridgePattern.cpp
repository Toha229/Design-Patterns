#include "Programmer.h"

int main() {
	ILanguage* cs = new CSharp();
	ILanguage* cpp = new Cpp();

	Freelancer F_CS = Freelancer(cs);
	CompanyProgrammer CP_CS = CompanyProgrammer(cs, 0.2);

	Freelancer F_Cpp = Freelancer(cpp);
	CompanyProgrammer CP_Cpp = CompanyProgrammer(cpp, 0.2);

	cout << F_CS.GetSalary() << endl;
	cout << F_Cpp.GetSalary() << endl;

	cout << CP_CS.GetSalary() << endl;
	cout << CP_Cpp.GetSalary() << endl;
}