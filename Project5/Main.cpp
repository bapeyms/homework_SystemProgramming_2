#include <iostream>
#include <string>
#include <mutex>
#include <fstream>
#include "FileWrite.h"
using namespace std;

int main()
{
	FileWrite file("output.txt");
	
	thread t1(&FileWrite::AppendLine, 1, 5);
	t1.join();

	cout << "Finish" << endl;
}