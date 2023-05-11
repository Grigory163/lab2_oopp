
#include <functions/vehiclearg.h>
#include <iostream>
using namespace trans;
using namespace std;
std::ostream& trans::operator<<(std::ostream& cout, const transport& t)
{
	cout << "Transport - { name: ";
	switch (t._name)
	{
	case EASY:
		cout << "EASY";
		break;
	case KAMAZ:
		cout << "KAMAZ";
		break;
	case MOTO:
		cout << "MOTO";
		break;
	default:
		cout << "UNKNOWN";
		break;
	}
	cout << ", V: " << t._V << ", T: " << t._T << ", S: " << t._S << ", model: " << t.model_name << " }";
	return cout;
}
bool trans::operator!=(transport& a, transport& b)
{
	return !(a == b);
}
bool trans::operator==(transport& a, transport& b)
{
	return (a.Get_S() == b.Get_S() && a.Get_V() == b.Get_V() && a.Get_T() == b.Get_T() && a.Get_name() == b.Get_name());
}
transport::transport(const transport& T)
{
	if (this != &T) {
		this->_name = T._name;
		this->_S = T._S;
		this->_V = T._V;
		this->_T = T._T;
		this->model_name = T.model_name;
	}

}

vichal  transport::Get_name() {
	return _name;
}
double transport::Get_T()
{
	return _T;
}
double transport::Get_V()
{
	return _V;
}
string transport::Get_model()
{
	return model_name;
}
double transport::Get_S()
{
	return _S;
}

void transport::Set_name(vichal name) {
	this->_name = name;
}
void transport::Set_T(int t)
{
	this->_T = t;
}
void transport::Set_V(double v)
{
	this->_V = v;
}
void transport::Set_model(string model)
{
	this->model_name = model;
}
void transport::Set_S(int s)
{
	this->_S = s;
}
//ostream& trans::transport::operator<<(const transport& t)
//{
//	return ;
//}
transport::transport()
{
	_S = 10;
	_name = KAMAZ;
	_T = 10;
	_V = 9;
}
transport& transport::operator=(const transport& T)
{
	if (this != &T) {
		this->_name = T._name;
		this->_S = T._S;
		this->_V = T._V;
		this->_T = T._T;
		this->model_name = T.model_name;
		return*this;
	}
	return*this;
}
//transport::transport(vichal type, double V1, std::string model_name, double S)
//{
//	this->_T = 0;
//	this->_S = S;
//	_name = type;
//	_V = V1;
//	this->model_name = model_name;
//}
transport::transport(vichal type2, int T1, double V1, std::string model_name, double S)
{
	this->_S = S;
	_name = type2;
	_T = T1;
	_V = V1;
	this->model_name = model_name;
}
float transport::Compute()
{
	switch (_name)
	{
	case EASY:
		return _S * _V;
	case KAMAZ:
		return float(((_T / 2) + 1) * _V * _S);
	case MOTO:
		return double(_S * _V * double(0.3));
	default:
		break;
	}
}
void transport::Print()
{

	//if (this->_name == MOTO || this->_name == EASY)
	//{
	//	cout << this->_V << endl;
	//	cout << this->_S << endl;
	//}
	//else
	//{
	//	cout << this->_V << endl;
	//	cout << this->_S << endl;
	//	cout << this->_T << endl;
	//};
	if (this->_name == MOTO)
	{
		cout << "moto " << this->_V << this->_S << endl;
	}
	if (this->_name == EASY)
	{
		cout << "easy " << this->_V << this->_S << endl;
	}
	if (this->_name == KAMAZ)
	{
		cout << "kamaz " << this->_V << this->_S << this->_T << endl;
	}
}
