#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main() {
	setlocale(LC_ALL, "");
	ifstream in("input.txt");
	string line;//предложение
	stringstream ss;//строковый поток
	while (getline(in, line)) {//считываем по предложению
		if (line.find(",") == std::string::npos) {
			ss << line << '\n';
		}
	}
	cout << ss.str();
	in.close();//закрываем файл										   
	system("pause>>void");

}