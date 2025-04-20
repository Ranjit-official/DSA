#include <iostream>
using namespace std;
const int MAX = 5;
class Array
{
private:
	int arr[MAX];

public:
	void insert(int pos, int value);
	void del(int pos);
	void display();
	void search(int num);
	void reverse();
};

void Array::insert(int pos, int num)
{
	int i;
	// shift elements to right
	for (i = MAX - 1; i >= pos; i--)
		arr[i] = arr[i - 1];
	arr[i] = num;
}

void Array::del(int pos)
{
	int i;
	for (i = pos; i < MAX; i++)
	{
		arr[i - 1] = arr[i];
	}
	arr[i - 1] = 0;
}

void Array::search(int num)
{
	for (int i = 0; i < MAX; i++)
	{
		if (arr[i] == num)
		{
			cout << endl
				 << "Element " << num
				 << " is at " << (i + 1) << "th position";
			return;
		}
	}
	cout << endl
		 << "didnt found";
}

void Array::display()
{
	for (int i = 0; i < MAX; i++)
	{
		cout << endl
			 << arr[i] << "";
	}
}

void Array::reverse()
{
	int temp;
	for (int i = 0; i < MAX / 2; i++)
	{
		temp = arr[i];
		arr[i] = arr[MAX - 1 - i];
		arr[MAX - 1 - i] = temp;
	}
	cout << endl
		 << arr;
}

int main()
{
	Array a;
	a.insert(1, 11);
	a.insert(2, 12);
	a.insert(3, 13);
	a.insert(4, 14);
	a.insert(5, 15);
	a.del(3);
	a.search(1);
	a.reverse();
	a.display();

	return 0;
}