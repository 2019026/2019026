#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	
	cout << "Writing to the file";
	cout << "Enter your name: ";
	
	cout << "Enter your age: ";
	


	ofstream info;
	info.open("info.txt", ios::out);
	if ("info.txt")
	{
		info << "Abdur Rehman Asif" << endl;
		info << "Age : 19";
	}
	info.close();
	string bio;
	ifstream infox;
	infox.open("info.txt");
	if (infox)
	{
		while (!infox.eof())
		{
			infox >> bio;
			cout << bio << "  ";
		}
		infox.close();
	}
}


