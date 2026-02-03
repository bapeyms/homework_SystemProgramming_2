#pragma once
#include <iostream>
#include <string>
#include <mutex>
#include <fstream>
using namespace std;

class FileWrite
{
	const string& filename;
	mutex flag;
public:
	FileWrite(const string& file) :filename(file) {}
	void AppendLine(const string& file, int threadNum, int iterationNum);
	void Read(const string& filename);
};

