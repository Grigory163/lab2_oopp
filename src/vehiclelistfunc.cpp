#include <functions/vehiclearg.h>
#include <stdexcept>
#include <utility>
using namespace trans;
using namespace std;

container::container() :_ptr(nullptr), _size(0) {}
container::container(const container& list):_ptr(new transport*[list._size]), _size(list._size)
{
	for (int i = 0; i < _size; ++i) {
		_ptr[i] = new transport(*list._ptr[i]);
	}
}

//


container& container::operator=(container list)
{
	swap(list);
	return*this;
}


void trans::container::remove(int index)
{
	if (index < 0 or index >= _size) {
		throw runtime_error("Error");
	}
	delete _ptr[index];
	for (int i = index; i < _size - 1; i++) {
		_ptr[i] = _ptr[i + 1];
	}
	_size--;
}

void container::swap(container& new_arr) noexcept
{
	std::swap(this->_ptr, new_arr._ptr);
	std::swap(this->_size, new_arr._size);
}

void container::clear() noexcept
{
	for (int i = 0; i < _size; ++i) {
		delete _ptr[i];
	}

	delete[] _ptr;

	_ptr = nullptr;
	_size = 0;
}

container::~container()
{
	clear();
}

int container::size() 
{
	return _size;
}

void container::insert(transport* item, int index)
{
	if (index > _size)
	{
		throw std::out_of_range("Index out of range.");
	}
	auto ptr = new transport * [_size + 1];
	for (int i = 0; i < index; ++i)
	{
		ptr[i] = _ptr[i];
	}
	ptr[index] = item;
	for (int i = index; i < _size; ++i)
	{
		ptr[i + 1] = _ptr[i];
	}
	delete[] _ptr;
	_ptr = ptr;
	++_size;

}

void trans::container::replace(int index, transport* tran)
{
	delete _ptr[index];
	_ptr[index] = tran;
}

//transport*& container::operator[](size_t index)
//{
//	return _ptr[index];
//}

transport* container::operator[](size_t index) const
{
	return _ptr[index];
}

transport trans::container::transp(size_t index)
{
	return *_ptr[index];
}

int container::max_s()
{

	int max_index = 0;
	int max_tax = 0;
	auto n = _size;
	for (size_t i = 1; i < n; i++)
	{
		if (_ptr[i]->Compute() > max_tax)
		{
			max_index = i;
			max_tax = _ptr[i]->Compute();
		}
	}

	return max_index;
}


void container::add(transport* item) 
{
	auto vehicles = new transport * [_size + 1];
	for (int i = 0; i < _size; i++) {
		vehicles[i] = _ptr[i];
	}
	vehicles[_size] = item;
	delete[] _ptr;
	_ptr = vehicles;
	_size++;
}

std::ostream& trans::operator<<(std::ostream& cout,container& t)
{
	for (int i = 0; i < t.size(); i++)
	{
		cout << *t[i] << endl;
	}
	return cout;
}
