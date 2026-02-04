#include "FileWrite.h"

void FileWrite::AppendLine(int threadNum, int iterationNum)
{
	for (int i = 1; i <= iterationNum; i++)
	{
		string line = "Thread #" + to_string(threadNum) + " iteration " + to_string(i);
		flag.lock();
		ofstream file(filename, ios::app);
		if (!file)
		{
			cout << "ERROR!" << endl;
		}
		file << line << endl;
		file.close();
		flag.unlock();
	}
}

void FileWrite::Read(const string& filename)
{
	ifstream readFile(filename);
	string line;
	while (getline(readFile, line))
	{
		cout << line << endl << endl;
	}
	cout << endl;
	readFile.close();
}
