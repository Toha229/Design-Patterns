#include"Clock12.h"

int main()
{
	//Clock24 clock(23, 58);
	//clock.getTime();
	//cout << endl;

	Clock12 clock(23, 58);
	clock.getTime12();
	cout << "\n";
	clock.getTime24();
	cout << "\n";
	clock.Tick12();


	clock.getTime12();
	cout << "\n";
	clock.getTime24();
	cout << "\n";
	clock.Tick12();


	clock.getTime12();
	cout << "\n";
	clock.getTime24();
	cout << "\n";
	clock.Tick12();


	clock.getTime12();
	cout << "\n";
	clock.getTime24();
	cout << "\n";
}