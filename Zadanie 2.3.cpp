
#include <iostream>
using namespace std;

int main()
{
	int liczba;
	cout << "Podaj liczbę z przedziału 1-12: ";
	cin >> liczba;
	switch (liczba)
	{
	case 1:
		cout << "Styczen ma 31 dni i jest w nim pochmurnie " << endl;
		break;
	case 2:
		cout << "Luty ma 28 dni i jest w nim pochmurnie " << endl;
		break;
	case 3:
		cout << "Marzec ma 31 dni i jest w nim pochmurnie " << endl;
		break;
	case 4:
		cout << "Kwiecien ma 30 dni i jest w nim slonecznie " << endl;
		break;
	case 5:
		cout << "Maj ma 31 dni i jest w nim slonecznie " << endl;
		break;
	case 6:
		cout << "Czerwiec ma 30 dni i jest w nim slonecznie " << endl;
		break;
	case 7:
		cout << "Lipiec ma 31 dni i jest w nim slonecznie " << endl;
		break;
	case 8:
		cout << "Sierpien ma 31 dni i jest w nim slonecznie " << endl;
		break;
	case 9:
		cout << "Wrzesien ma 30 dni i jest w nim slonecznie " << endl;
		break;
	case 10:
		cout << "Pazdziernik ma 31 dni i jest w nim pochmurnie " << endl;
		break;
	case 11:
		cout << "Listopad ma 30 dni i jest w nim pochmurnie " << endl;
		break;
	case 12:
		cout << "Grudzien ma 31 dni i jest w nim pochmurnie " << endl;
		break;

	default:
		cout << "Podales liczbe z przedzialu poza 1-12" << endl;
		break;
	}
}
