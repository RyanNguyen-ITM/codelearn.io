#include<iostream>
#include<vector>

using namespace std;

int removedDigit(int n, std::vector<int> s, int k)
{
	vector<int> arr; // tao vector cho n
	int h = 0; // dem thu tu chu so bi gach
	for (int i = 0; i < n; i++) {
		arr.push_back(i + 1);
	}

	for (int i = 0; i < n; i++)
	{
		vector<int> c;  // tao vector cho i thuoc n
		int z = arr[i];
		while (true) // tao cac chu so cua i
		{
			if (z <= 0) break;
			c.push_back(z % 10);
			z /= 10;
		}
		for (int r = 0; r < c.size() / 2; r++) { // dao theo dung chieu cac chu so cua j
			int temp = c[r];
			c[r] = c[c.size() - r - 1];
			c[c.size() - r - 1] = temp;
		}
		
		for (int r = 0; r < c.size(); r++) {
			for (int j = 0; j < s.size(); j++) {
				if (c[r] == s[j]) {
					h++;
					if (h == k) {
						return c[r];
					}
				}
			}
		}
		c.clear();
	}
	return -1;
}

int main() {

	int n;
	vector<int> s;
	int k;

	n = 20;
	s.push_back(1);
	s.push_back(2);
	s.push_back(3);
	s.push_back(4);
	s.push_back(5);
	k = 8;
	removedDigit(n, s, k);

	return 0;
}