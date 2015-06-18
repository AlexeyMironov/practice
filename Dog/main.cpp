#include "Dog.h"
#include "Bread.h"
#include "Meat.h"
#include <iostream>

using namespace std;

int main()
{
	float dogMass, dogEnergy;
	cout << "enter dog mass: "; cin >> dogMass;
	cout << "enter dog energy: "; cin >> dogEnergy;
	CDog dog(dogMass, dogEnergy);

	dog.Eat(make_unique <CBread>(0.5f));
	dog.Eat(make_unique <CMeat>(1.0f));
	dog.Flush();

	int hourLived = 0;
	while (dog.IsAlive())
	{
		dog.Live(1);
		cout << "dog lived " << ++hourLived << " hours" << endl;
	}
	
	cout << "dog died... my condolences..." << endl;
	system("pause");
	return 0;
}
