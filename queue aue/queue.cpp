#include <iostream>
#include "queuebio.h"


void push(int value, queue_descr* descr) {
	node_s* node_ptr = new node_s;

	node_ptr->data = value; // �������� ������

	node_ptr->previous_ptr = NULL; // ����������� ���

	node_ptr->next_ptr = descr->top_ptr; // ��������� ��������

	descr->top_ptr = node_ptr; // ������ ������� ��� ����

	if (descr->counter == 0) { // �� � ������ ����
		descr->buttom_ptr = node_ptr;
	}

	if (descr->counter > 0) {
		node_ptr->next_ptr->previous_ptr = node_ptr; // ���������� ������������ ��� ����
	}
	descr->counter++;
}

int pop(queue_descr* descr) {
	int rec = descr->buttom_ptr->data; // ��������� �-��� 
	node_s* tmp = descr->buttom_ptr->previous_ptr;

	delete descr->buttom_ptr;

	descr->counter--;

	descr->buttom_ptr = tmp;

	if (descr->counter > 0) {
		descr->buttom_ptr->next_ptr = NULL;
	}
	return rec;
}

