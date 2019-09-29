#include<iostream>
#include<vector>
#include<sstream>

using namespace std;

/*
	•	Go X: đi thẳng lên phía trước X mét (do rô bốt đơn giản nên chỉ thể đi thẳng về phía trước mặt, ko có đi lùi. Muốn đi hướng khác, trước tiên rô bốt phải quay mặt về hướng cần đi)
	•	TB: rô bốt quay 180 độ về hướng ngược lại với hướng đang đứng
	•	TL: rô bốt quay 90 độ ngược chiều kim đồng hồ với hướng đang đứng
	•	TR: rô bốt quay 90 độ theo chiều kim đồng hồ với hướng đang đứng
*/

vector<int> robotPosition(string cmd)
{
	vector<int> V;
	vector<string> S;
	int x = 0;
	int y = 0;
	int direct; // 1: Bac --- 2: Dong --- 3: Nam --- 4: Tay

	for (int i = 0; i < cmd.size(); i++) {
		if (cmd[i] == ',') {
			S.push_back(cmd.substr(x, i - x));
			//S.erase(S.begin() + i);
			x = i + 1;
		}
	}
	S.push_back(cmd.substr(x));

	int i = 0;
	x = 0;
	direct = 1;
	while (i < S.size())
	{
		string s = S.at(i);
		string substr;

		int k = s.size();
		if(k > 2)
			substr = s.substr(3);
		stringstream strstr(substr);

		strstr >> k;

		if (s == "TL") {
			if (direct == 1) direct = 4;
			else
				direct -= 1;
		}
		else if (s == "TR") {
			if (direct == 4) direct = 1;
			else
				direct += 1;
		}
		else if (s == "TB") {
			if (direct == 4 || direct == 3) direct -= 2;
			else
				direct += 2;
		}
		else {
			if (direct == 1) {
				y += k;
			}
			else if(direct == 2){
				x += k;
			}
			else if (direct == 3) {
				y -= k;
			}
			else if(direct == 4)
			{
				x -= k;
			}
		}
		i++;
	}
	V.push_back(x);
	V.push_back(y);
	return V;
}

int main() {

	string str{ "Go 2,TL,Go 2" };

	robotPosition(str);
	return 0;
}