#include<iostream>
#include<conio.h>
#include<math.h>
#include<time.h>

using namespace std;

bool kTraNT(int n) {
	//if (n == 2) return true;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

int sumOfThreePrimes(int k)
{
	int count = 0;
	int x = 2;
	int y = 2;
	int z;
	for (; x < k / 3 && x <= y; x++) {
		if (kTraNT(x)) {
			for (; y < k / 2; y++) {
				if (kTraNT(y)) {
					z = k - x - y;
					if (z >= y && kTraNT(z)) {
						count++;
					}
				}
			}
		}
		y = x + 1;
	}
	return count;
}

int main() {
	clock_t start = clock();
	int kq = sumOfThreePrimes(23421);
	clock_t finish = clock();
	cout << kq << endl;
	cout << "Thoi gian chuong trinh: " << finish - start << "ms" << endl;
	return 0;
}