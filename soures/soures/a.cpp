#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main() {
	setlocale(LC_ALL, "");
	ifstream in("input.txt");
	string line;//�����������
	stringstream ss;//��������� �����
	while (getline(in, line)) {//��������� �� �����������
		if (line.find(",") == std::string::npos) {
			ss << line << '\n';
		}
	}
	cout << ss.str();
	in.close();//��������� ����										   
	system("pause>>void");

}