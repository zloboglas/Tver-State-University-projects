/*
� ������ ������ ������� ������ ����� ����� n (0 < n <= N)
�� ������ n ����� �����
� ������� ����� ����� k - ���� �� �������� ������ �����

�������� ������ ��� 
"Yes" ���� k ���� ������� 
�
"No" �����

����� ���� ��������� ������� ������
*/
#include "Tree.h"
using namespace std;

int main() {
	my_struct cone;
	
	int n;
	cin >> n;

	int user_input;
	cin >> user_input;
	
	cone.value = user_input;
	Tree pine(cone);
	
	for (int i = 1; i < n; i++) {
		cin >> user_input;
		cone.value = user_input;
		pine.set(cone);
	}

	int k;
	cin >> k;
	cone.value = k;

	bool result = pine.find(cone);
	if (result) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}

	pine.~Tree();
	
	return 0;
}

/*
9
5 3 2 4 8 6 9 7 1
7
*/