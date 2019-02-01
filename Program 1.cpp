//File Handling - To write and read content from a file
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	string line;
	ofstream fout;
	fout.open("meow.txt");
	while(fout) //true if file is successfully opened
	{
		getline(cin, line); //read a line from keyboard
		if(line=="0")	//press 0 to exit // 0 will should be a string
			break;
		fout<<line<<endl; 	//write line into the file
	}
	fout.close();
	
	ifstream fin;
	fin.open("meow.txt");
	while(fin)
	{
		getline(fin, line);	//read a line from the file
		cout<<line<<endl;
	}
	fin.close();
	return 0;
}
