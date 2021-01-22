#include <iostream>
#include <fstream>
#include <string>
#include "TodoList.h"
using namespace std;

int main(int argc, char *argv[])
{
    TodoList mylist;
    for(int i = 0; i < argc; i++) {
				cout << "argv[" << i << "]=" << argv [i] << endl;
		}

		string a;

		ifstream input("output.txt");
		input >> a;
		
		ofstream output;
		output.open("txt");
		output << a;

		string firststarg = argv[1];
		if(firststarg.compare("add") == 0) {
			cout << "Doing an add" << endl;
			string date = argv[2];
			string task = argv[3];
			cout << "date" << date << "task" << task << endl;
			mylist.add(date, task);
		}
}