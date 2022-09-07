#include "Clock24.h"

class Clock12
{
public:
	Clock12() {
		h = 0;
		m = 0;
		PM = 0;
	}
	Clock12(int h, int m) {
		while (m >= 60) {
			m -= 60;
			h++;
		}
		while (h >= 24) {
			h -= 24;
		}
		if (h >= 12) {
			h -= 12;
			PM = 1;
		}
		else PM = 0;
		this->h = h;
		this->m = m;
	}
	void setHourse12(int h) {
		while (h >= 24) {
			h -= 24;
		}
		if (h >= 12) {
			h -= 12;
			PM = 1;
		}
		else PM = 0;
		this->h = h;
	}
	void setMin12(int m) {
		while (m >= 60) {
			m -= 60;
			h++;
		}
		while (h >= 24) {
			h -= 24;
		}
		if (h >= 12) {
			h -= 12;
			PM = 1;
		}
		else PM = 0;
		this->h = h;
		this->m = m;
	}
	void getTime12() const {
		cout << (PM ? "PM " : "AM ") << (h < 10 ? "0" : "") << h << ":" << (m < 10 ? "0" : "") << m;
	}
	void getTime24() const {
		int tmph = h;
		if (PM) {
			tmph += 12;
		}
		Clock24 clock(tmph, m);
		clock.getTime();
	}
	void Tick12() {
		m++;
		if (m == 60)
		{
			m = 0;
			h++;
		}
		if (h == 12) {
			h = 0;
			PM = !PM;
		}
	}


private:
	bool PM;
	int m;
	int h;
};