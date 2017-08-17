#include<iostream>
#include<cmath>

using namespace std;

int a[21];
int b[40];

//判断是否为素数
bool isprime(int n){
	int k;
	k = sqrt(n);
	for (int i = 2; i <= k; i++){
		if (n%i == 0)
			return false;
	}
	return true;
}

/************************************************************************/
// 由于素数环只有20位，所以所求的数最大为39，将3-39这37个数是否为素数提前算出来存入b数组
//计算时只需查表就能得知，这样可以提高性能。
/************************************************************************/
void init(){
	for (int i = 0; i < 21; i++){
		a[i] = i;
	}
	for (int j = 3; j < 40; j++){
		b[j] = 0;
		if (isprime(j))
			b[j] = 1;
	}
}

void printresult(){
	for (int i = 1; i < 21; i++)
		cout << " " << a[i];
	cout << endl;
}

void search(int m){
	int i;
	if (m > 20){
		//当m == 20时，还需判断环首和环尾是否为素数
		int temp = a[1] + a[20];
		if (b[temp]){
			printresult();
		}
		return;
	}
	else{
		for (i = m; i < 21; i++){
			swap(a[m], a[i]);
			int temp = a[m - 1] + a[m];
			if (b[temp])
				search(m + 1);
			swap(a[m], a[i]);
		}
	}
}

int main(){
	init();
	search(2);
	return 0;
}
