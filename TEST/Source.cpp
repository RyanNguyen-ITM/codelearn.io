#include<iostream>
#include<vector>
#include<string>

using namespace std;


int main() {

	//vector<int> c;
	//int z = 235;
	//while (true)
	//{
	//	if (z <= 0) break;
	//	c.push_back(z%10);
	//	z /= 10;
	//}
	//cout<< c.front() << endl;
	//cout << c.back() << endl;
	vector<int> V;
	vector<string> S;
	string str = "Go 2,TL,Go 2";
	int x = 0;
	int y;

	for (int i = 0; i < str.size(); i++) {
		if (str[i] == ',') {
			S.push_back(str.substr(x, i - x));
			//S.erase(S.begin() + i);
			x = i + 1;
		}
	}
	S.push_back(str.substr(x));
	///



	///
	for (int i = 0; i < S.size(); i++) {
		cout << S.at(i) << endl;
	}

	cout << "\n\n" << S.at(0)[3] << "\n\n";
	///

	cout << "++++++++++++++++++++++++++++++++" << endl;
	vector<int> c;
	c.push_back(10);
	c[0] = 11;
	cout << c[0];
	return 0;
}