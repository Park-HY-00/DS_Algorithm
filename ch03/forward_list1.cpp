#include <forward_list>
#include <iostream>

using namespace std;

int main()
{
	forward_list<int> l1{10, 20, 30, 40};
	l1.push_front(40);
	l1.push_front(30);
	for (auto a : l1)
	{
		cout << a << ", ";
	}
	cout << endl;
	int cnt = distance(l1.begin(), l1.end());

	l1.remove(40);
	l1.remove_if([](int n)
				 { return n > 20; });

	for (auto a : l1)
	{
		cout << a << ", ";
	}
	cout << endl;
}