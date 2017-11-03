#include <iostream>
#include "stackbio.h"
using namespace std;

int main() {
	stack_descr* descr = new stack_descr;
	char user_input;
	bool flag = 1;
	for (; flag;) {
		cin >> user_input;

		switch (user_input) {
		case('w'):
		{
			int var;
			cin >> var;
			push(var, descr);
			break;
		}
		case('r'):
		{
			if (descr->counter > 0) {
				cout << endl << pop(descr) << endl;
			}else {
				cout << "error" << endl;
			}
			break;
		}
		default:
		{
			flag = 0;
		}
		}

	}

	return 0;
}

/*
w
1
w
2
w
3
w
4
w
5
r
r
w
6
w
7
r
r
r
r
r
r
r
r

*/

