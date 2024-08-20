
#include <iostream>
#include <conio.h>
using namespace std;
int main() {
	int countnumber=0;
	char choice;

	cout << "press a to continue and x to exit"<<endl;

	do {
		choice = _getch();
		
		if (choice == 'a')
		{
			countnumber = countnumber + 1;
			system("cls");
			cout << "number:" << countnumber;

		}
		else if (choice == 'r')
		{
			countnumber = 0;
			cout << "number:" << countnumber;
		}
		

	} while (choice != 'x');
	return 0;
}
