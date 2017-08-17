#include<iostream>
#include<cmath>

using namespace std;

int a[21];
int b[40];

//�ж��Ƿ�Ϊ����
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
// ����������ֻ��20λ����������������Ϊ39����3-39��37�����Ƿ�Ϊ������ǰ���������b����
//����ʱֻ������ܵ�֪����������������ܡ�
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
		//��m == 20ʱ�������жϻ��׺ͻ�β�Ƿ�Ϊ����
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
