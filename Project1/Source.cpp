#include<iostream>
#include<conio.h>
#include<vector>

using namespace std;

bool soNT(int n) {
	int i = 2;
	while (i < n) {
		if (n % i == 0) return false;
		i++;
	}
	return true;
}

bool palindrome(int n) {
	int temp, s, sum = 0;
	temp = n;
	while (n > 0) {
		s = n % 10;
		sum = sum * 10 + s;
		n = n / 10;
	}
	if (temp == sum) return true;
	return false;
}

int countNum(int m) {
	int count = 1;
	while (m > 0) {
		m = m / 10;
		if (m != 0) count++;
	}
	return count;
}

int countDifNum(int n) {
	int count = 0;
	int num = countNum(n); // đếm số lượng chữ số
	int *arr = new int[sizeof(int) * num];
	int i = 0;
	while (i < num)
	{
		arr[i] = (n % 10);
		n = n / 10;
		i++;
	}
	for (int k = 0; k < 10; k++)
	{
		for (int h = 0; h < num; h++)
		{
			if (arr[h] == k) {
				count++;
				break;
			}
		}
	}
	return count;
}

int favouritePrimeNumber(int n, int m)
{
	int count = 0;
	while (n > 1) {
		if (soNT(n) && palindrome(n) && (countDifNum(n) <= m)) {
			cout << n << "   ";
			count++;
		}
		n--;
	}
	cout << endl;
	return count;
}

int main() {
	//int n, m;
	//cout << "Nhap vao n: ";
	//cin >> n;
	//cout << "Nhap vao m: ";
	//cin >> m;
	//if (soNT(n))
	//{
	//	cout << "la so NT\n";
	//}
	//if (palindrome(n)) {
	//	cout << "la so palindrome\n";
	//}
	//cout << "so chu so: " << countNum(n) << endl;
	//cout << favouritePrimeNumber(n, m);

	char a[] = "Lay";
	char b[] = "Lay";
	vector<string> socks;
	socks.push_back("LX");
	socks.push_back("LY");
	socks.push_back("RY");
	socks.push_back("RX");
	socks.push_back("LX");
	socks.push_back("LY");
	socks.push_back("RY");
	socks.push_back("RX");
	socks.push_back("LX");
	socks.push_back("LY");
	socks.push_back("RY");
	socks.push_back("RX");
	socks.push_back("LX");
	socks.push_back("LY");
	socks.push_back("RY");
	socks.push_back("RX");
	socks.push_back("LX");
	socks.push_back("LY");
	socks.push_back("RY");
	socks.push_back("RX");


	int count = 0;

	for (int i = 0; i < socks.size() - 1; i++)
	{
		for (int j = i + 1; j < socks.size(); j++)
		{
			if (socks[i].size() == socks[j].size() && ((socks[i][0] == 'L' && socks[j][0] == 'R') || (socks[i][0] == 'R' && socks[j][0] == 'L'))) { // Neu gan giong
				int flag = 1; // co giong hay khac
				for (int k = 1; k < socks[i].size(); k++)
				{
					if (socks[i][k] != socks[j][k]) {
						flag = 0; // khong giong
						break;
					}
				}
				if (flag == 1) {
					//cout << "\n" << "[" << i << "] & [" << j << "]" << " == " << socks[i] << " && " << socks[j] << endl;
					socks.erase(socks.begin() + j);
					count++;
					break;
				}
			}
		}
	}

	//cout << strcmp(a, b);
	//cout << a[0];

	//==============================================================================
	//
	//==============================================================================

	//int demChuCai = 0;
	//char str[25] = "Nguyen Duc Hoang Huy";
	//for (int i = 0; i < strlen(str); i++) {
	//	if (str[i] != NULL && str[i] != ' ') {
	//		demChuCai++;
	//	}
	//}
	//cout << "So chu cai la: " << demChuCai;
	//cout << str;


	int i = 0;
	int min = 1, max = 9;
	while (i < socks.size()) {
		min *= 10;
		i++;
	}
	cout << min << endl;

	i = 0;
	while (i < socks.size()) {
		max = (max * 10) + 9;
		i++;
	}
	cout << max << endl;

	//
	//
	//
	/*
	// Example program
#include <iostream>
#include <string>
#include<math.h>

using namespace std;

bool soNT(int n) {
	int i = 2;
	while (i < n) {
		if (n % i == 0) return false;
		i++;
	}
	return true;
}

int countNum(int m) {
	int count = 1;
	while (m > 0) {
		m = m / 10;
		if (m != 0) count++;
	}
	return count;
}

int countDifNum(int n) {
	int count = 0;
	int num = countNum(n); // đếm số lượng chữ số
	int *arr = new int[sizeof(int) * num];
	int i = 0;
	while (i < num)
	{
		arr[i] = (n % 10);
		n = n / 10;
		i++;
	}
	for (int k = 0; k < 10; k++)
	{
		for (int h = 0; h < num; h++)
		{
			if (arr[h] == k) {
				count++;
				break;
			}
		}
	}
	return count;
}

int demSoChuCai(string str) {
    int count = 0;
    for(int i = 0; i < str.size(); i++){
        if(str[i] != NULL && str[i] != ' '){
            count++;    
        }
    }
    return count;
}

void xoaChu(string str, int index){
    str.erase(str.begin() + index);
}


void timSoNT(int min, int max, int arr) {
    while(min < max){
        if(soNT(min)){
            
        }
        min++;
    }
}

int strToInt(string str){
    int num = 0;
    int l1 = str.length();
    for(int i = l1 - 1; i >= 0; --i){
        num += (int)(str[i] - '0') * pow(10, l1-i-1);
    }
    return num;
}

void replaceAll(string &subject, const string& search, const string& replace) {
   size_t pos = 0;
   // Hàm find sẽ trả về string::npos nếu không tìm thấy chuỗi con.
   while ((pos = subject.find(search, pos)) != string::npos) {
       subject.replace(pos, search.length(), replace);
       pos += replace.length();
   }
}

int taoMoHinhInt(int n){
    int *arr = new int[sizeof(int)*n];
    
}

int TaoMoHinhStr(string str){
    int n = demSoChuCai(str);
    int h = 0;
    for(int i = 0; i < str.size(); i++){
        
        if(str[i] > 47 && str[i] < 58){
            continue;
        }
        else{
            // xu ly
            int pos = i + 1;
            while(pos < n){
                if(str[pos] == str[i]){
                    str.replace(pos, 1, to_string(i));    
                }
                pos++;
            }
            str.replace(i , 1, to_string(i)); 
        }
    } 
    return strToInt(str);
}

int primeForm(string str)
{

}

int main()
{
  string name="abcbccaa";
  cout<< demSoChuCai(name)<<endl;
  cout<< name<< endl;
  
  // Tao gioi han tim so NT
  int i = 0;
  int min = 1;
  int max = 9;
  cout<< "size: "<< name.size()<<endl;
  while(i < name.size()){
      min = min * 10;
      i++;
  }
  cout<<min<<endl;
  
  i = 0;
  while(i<name.size()){
      max = (max * 10) + 9;
      i++;
  }
  cout<<max<<endl;
  
  int k = TaoMoHinhStr(name);
  cout<<"\n\n"<<k<<"\n\n";
  //
}

	*/
	//
	//
	//

	return 0;
}