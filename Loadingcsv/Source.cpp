#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;
int main() {
	ifstream myFile;
	myFile.open("foo.csv");
	vector<double> love;
	while (myFile.good()) {
		string line;
		getline(myFile, line, ',');
		double num = stod(line);

		
		love.vector::push_back(num);
		//cout << line << endl;
	}
	for (int i = 0; i < love.size(); i++) {
		cout << love[i] << "\n";
	}
	cout << love.size();
	return 0;
}