#include <iostream>

using namespace std;

class DynamicArray
{
private:
	unsigned int sz;
	int *arr;

public:
	DynamicArray(int n) : sz(n)
	{
		arr = new int[sz]{};
	}

	~DynamicArray()
	{
		delete[] arr;
		cout << "Memory deleted!" << endl;
	}

	unsigned int size()
	{
		return sz;
	}

	int &operator[](const int i)
	{
		return arr[i];
	}

	const int &operator[](const int i) const
	{
		return arr[i];
	}
};

int main()
{
	DynamicArray da(5);
	da[0] = 10;
	da[1] = 20;
	da[2] = 30;

	for (int i = 0; i < da.size(); i++)
	{
		cout << da[i] << ", ";
	}
	cout << endl;
}