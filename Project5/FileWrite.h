#pragma once
#include <iostream>
#include <string>
#include <mutex>
#include <fstream>
using namespace std;

class FileWrite
{
	string filename;
	mutex flag;
public:
	FileWrite(string file) :filename(file) {}
	void AppendLine(int threadNum, int iterationNum);
	void Read(const string& filename);
};

