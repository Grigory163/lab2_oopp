#include <iostream>
#include <functions/vehiclearg.h>
#include <string>
using namespace trans;
using namespace std;
transport create_tran()
{
	double S, V;
	int T;
	vichal name;
	string model_name;
	int q;
	cout << "0-EASY, 2-MOTO, 1-KAMAZ" << endl;
	cin >> q;
	cout << "vvedite tonnaz" << endl;
	cin >> T;
	cout << "vvedite ob`em" << endl;
	cin >> V;
	cout << "vvedite nalog" << endl;
	cin >> S;
	cout << "vvedite nazvanie" << endl;
	getline(cin >> ws, model_name);;
	if ((vichal)q == KAMAZ)
	{
		 transport it((vichal)q, T, V, model_name, S) ;
		 return it;
	}
	if ((vichal)q == MOTO)
	{
		transport it((vichal)q, T, V, model_name, S);
		return it;
	}
	if ((vichal)q == EASY)
	{
		transport it((vichal)q, T, V, model_name, S);
		return it;
	}
}
void console()
{
	cout << " 1 - �������� ��������� " << endl;
	cout << " 2 - �������� ��������� �� ������� " << endl;
	cout << " 3 - ������� ��������� �� ������� " << endl;
	cout << " 4 - ������� ������ ���������� " << endl;
	cout << " 6 - ����� ������� ���������� � ���������� ������� " << endl;
	cout << " 7 - ����� �� ������� " << endl;
}
int main()
{
	setlocale(LC_ALL, "ru");
	container dc;
	console();
	while (true)
	{
		int k;
		cin >> k;
		int index = 0;
		system("cls");
		console();
		switch (k)
		{
		case 1:
			dc.add(create_tran());
			system("cls");
			console();
			break;
		}
	}
}