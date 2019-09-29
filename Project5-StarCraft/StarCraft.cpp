#include<iostream>
#include<conio.h>
#include<string>
#include<vector>

using namespace std;

int mutaliskAttack(vector<int> scvs)
{
	int count = 0;
	// Sap xep giam dan
	int k = 0;
	while (k < scvs.size())
	{
		int scvsMax = scvs[k];
		for (int i = k + 1; i < scvs.size(); i++) {
			if (scvsMax < scvs[i]) {
				scvs[k] = scvs[i];
				scvs[i] = scvsMax;
				scvsMax = scvs[k];
			}
		}
		k++;
	}

	//

	for (int i = 0; i < scvs.size(); i++) {
		cout << scvs[i] << " ";
	}
	cout << endl;
	cout << endl;

	//

	while (scvs[0] > 0)
	{
		if (!scvs.empty()) {
			scvs[0] -= 9;
			if(scvs.size() >= 2)
				scvs[1] -= 3;
			if(scvs.size() >= 3)
				scvs[2] -= 1;
		}

		// Sap xep lai
		k = 0;
		while (k < scvs.size())
		{
			int scvsMax = scvs[k];
			for (int i = k + 1; i < scvs.size(); i++) {
				if (scvsMax < scvs[i]) {
					scvs[k] = scvs[i];
					scvs[i] = scvsMax;
					scvsMax = scvs[k];
				}
			}
			k++;
		}
		//

		for (int i = 0; i < scvs.size(); i++) {
			cout << scvs[i] << " ";
		}
		cout << endl;

		//
		count++;
	}


	// TEST
	cout << endl;
	cout << endl;
	for (int i = 0; i < scvs.size(); i++) {
		cout << scvs[i] << " ";
	}

	return count;
}

int main() {

	vector<int> scvs = { 44,35, 12, 59, 47, 14, 31, 6, 22 };
	int result = mutaliskAttack(scvs);
	cout << "\n\n" << result << "\n\n";
	return 0;
}