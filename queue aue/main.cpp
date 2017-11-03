#include <iostream>
#include "queuebio.h"
using namespace std;

int main() {
	queue_descr* descr = new queue_descr;

	char user_input;
	bool flag = 1;

	for (; flag;) {
		cin >> user_input;

		switch (user_input) {
		case('w'):
		{
			// write
			int var;
			cin >> var;
			push(var, descr);
			break;
		}
		case('r'):
		{
			// read
			if (descr->counter == 0) {
				cout << "sorry, but there isn't any elements in the queue" << endl;
			} else {
				cout << pop(descr) << endl;
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

