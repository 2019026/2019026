#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	int add=0;
	int arr[5] = { 1,2,3,4,5 };
	
	fstream sum;
	sum.open("sum.txt", ios::out);
	if ("sum.txt")
	{
		for (int i = 0; i < 5; i++  )
		{
			sum << arr[i] << "  ";
		}
		for (int i = 0; i < 5; i++)
		{
			add = add + arr[i];
		}
		sum << "Sum :  " << add;
		sum.close();
	}
	string line;
	
	sum.open("sum.txt", ios::in);
	if (sum)
	{
		while (!sum.eof())
		{
			sum >> line;
			cout << line << "  ";
		}
		sum.close();
	}
}

