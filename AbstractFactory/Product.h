#pragma once
#include<iostream>
using namespace std;

__interface ICheckBox
{
	void print() const;
};

class WindowsCheckBox :public ICheckBox {
	void print() const{
		cout << "Windows check box";
	}
};

class MacintoshCheckBox :public ICheckBox {
	void print() const{
		cout << "Macintosh check box";
	}
};



__interface IButton
{
	void print() const;
};

class WindowsButton :public IButton{
	void print() const{
		cout << "Windows Button";
	}
};

class MacintoshButton :public IButton{
	void print() const{
		cout << "Macintosh Button";
	}
};