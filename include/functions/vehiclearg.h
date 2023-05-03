#pragma once
#include <string>
#include <vector>
#include <string>
#include <iostream>
using namespace std;
namespace trans {
	enum vichal {
		EASY,
		KAMAZ,
		MOTO
	};

	class transport
	{
	private:

		vichal _name;
		double _V;
		double _T;
		double _S;
		std::string model_name;
	public:
		//transport(vichal type, double V, std::string model_name, double S);
		transport(vichal type, int T, double V, std::string model_name, double S);
		~transport() {};
		friend std::ostream& operator<<(std::ostream& cout, const transport& t);
		transport();
		transport& operator=(const transport&);
		transport(const transport& T);	
		vichal  Get_name();
		double  Get_V();
		double  Get_T();
		double Get_S();
		string  Get_model();
		void Set_model(std::string model);
		void Set_name(vichal name);
		void Set_V(double v);
		void Set_T(int t);
		void Set_S(int s);
		double Compute();
		void Print();
		
	};
	bool operator==(transport& a, transport& b);
	bool operator!=(transport& a, transport& b);
	std::ostream& operator<<(std::ostream& cout, const transport& t);

	class container
	{
	private:
		transport** _ptr;
		size_t _size;
	public:
		void swap(container& list) noexcept;
		container();
		container(const container& list);
		container& operator=(container list);
		void clear() noexcept;
		~container();
		void add(transport item);
		int size();
		void insert(transport* item, int index);
		void replace(int index, transport* tran);
		transport* operator[](size_t index) const;
		int max_s();
		friend std::ostream& operator<<(std::ostream& cout,container& t);
	};
	std::ostream& operator<<(std::ostream& cout,container& t);
}