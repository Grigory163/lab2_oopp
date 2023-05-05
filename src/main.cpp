#include <iostream>
#include <functions/vehiclearg.h>

#include <string>

using namespace trans;
using namespace std;

transport* create_tran()
{
	double S, V, T;

	vichal name;
	string model_name;
	int q;
	cout << "0-EASY,1-KAMAZ, 2-MOTO" << endl;
	cin >> q;
	cout << "�������� ������ " << endl;
	cin >> T;
	cout << "������� ����� " << endl;
	cin >> V;
	cout << "������� ����� " << endl;
	cin >> S;
	cout << "vvedite nazvanie" << endl;
	getline(cin >> ws, model_name);;
	if ((vichal)q == KAMAZ)
	{
		auto T1 = new transport((vichal)q, T, V, model_name, S) ;
		 return T1;
	}
	if ((vichal)q == MOTO)
	{
		auto T1 = new transport((vichal)q, 0, V, model_name, S);
		return T1;
	}
	if ((vichal)q == EASY)
	{
		auto T1 = new transport((vichal)q, 01, V, model_name, S);
		return T1;
	}
}
void console()
{
	cout << " 1 - �������� ��������� " << endl;
	cout << " 2 - �������� ��������� �� ������� " << endl;
	cout << " 3 - ������� ��������� �� ������� " << endl;
	cout << " 4 - ������� ������ ���������� " << endl;
	cout << " 5 - ����� ������� ���������� � ���������� ������� " << endl;
	cout << " 6 - �������� ������� �� ������� " << endl;
	cout << " 7 - ����� �� ������� " << endl;

}
int main()
{

	int index = 0;
	setlocale(LC_ALL, "ru");
	container dc;
	console();
	while (true)
	{
	
		int k;
		cin >> k;
		if (k == 7) {
			dc.clear();
			break;
		}
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

		case 2:
			cout << "������� ������ ��� ������� ����������" << endl;
			cin >> index;
			dc.insert(create_tran(), index);
			cout << "�������" << endl;
			system("cls");
			console();
			break;
		case 3:
			cout << "������� ������ ���������� ������� ���� �������" << endl;
			cin >> index;
			dc.remove(index);
			system("cls");
			console();
			break;
		case 4:
			cout << dc << endl;
			break;
		case 5:
			if (dc.size() == 0) cout << "0";
				cout << dc.max_s() << endl;
				break;
		case 6:
			cout << "������� ������" << endl;
			cin >> index;
			dc.replace(index, create_tran());
			system("cls");
			console();
			break;
		}
	}
}