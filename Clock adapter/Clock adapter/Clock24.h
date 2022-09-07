#pragma once
#include <iostream>
using namespace std;

class Clock24
{
public:
	Clock24() {
		h = 0;
		m = 0;
	}
	Clock24(int h, int m) {
		while (m >= 60) {
			m -= 60;
			h++;
		}
		while (h >= 24) {
			h -= 24;
		}
		this->h = h;
		this->m = m;
	}
	void setHours(int h) {

		while (h >= 24) {
			h -= 24;
		}
		this->h = h;
	}
	void setMin(int m) {
		while (m >= 60) {
			m -= 60;
			h++;
		}
		while (h >= 24) {
			h -= 24;
		}
		this->h = h;
		this->m = m;
	}
	void getTime() const {
		cout << (h < 10 ? "0" : "") << h << ":" << (m < 10 ? "0" : "") << m;
	}
	void Tick() {
		m++;
		if (m == 60)
		{
			m = 0;
			h++;
		}
		if (h == 24) {
			h = 0;
		}
	}
private:
	int m;
	int h;
};