#include<iostream>
#include<conio.h>
#include<vector>

using namespace std;

string lostMessage(vector<string> message)
{
	//vector<string> S;
	string msg = "";
	int thx = 0;
	while (thx < message.size()) { // Lap qua tung vector

		string A = message[thx];
		int flag = 0;

		for (int i = 0; i < message.size(); i++) {
			string B = message[i];
			if (A[0] == B[0] || A.size() != B.size()) {
				flag = 0;
				continue;
			}
			else {
				// S:--------:R
				for (int h = 2, k = A.size() - 1; h < A.size(), k > 1; h++, k--) {
					if (A[h] != B[k]){
						flag = 0;
						break;
					}
					else {
						flag = 1;
					}
				}
			}
			if (flag == 1) break;
		}
		if (flag == 0) {
			msg = A.substr(2);
		}
		thx++;
	}
	cout << msg;
	return msg;
}

int main() {
	vector<string> mess;
	mess.push_back("S:AAA");
	mess.push_back("S:123");
	mess.push_back("R:AAA");
	mess.push_back("S:ABCD");
	mess.push_back("R:321");
	lostMessage(mess);

	return 0;
}