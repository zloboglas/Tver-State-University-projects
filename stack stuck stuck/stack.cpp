#include <iostream>
#include "stackbio.h"


void push(int value, stack_descr* descr) {
	node_s* node_ptr;
	node_ptr = new node_s;

	node_ptr->data = value;

	if (descr->counter == 0)
		node_ptr->prev = NULL;
	else
		node_ptr->prev = descr->top_ptr;

	descr->counter++;
	descr->top_ptr = node_ptr;
}

int pop(stack_descr* descr) {
	int ret = descr->top_ptr->data;
	node_s* it = descr->top_ptr->prev; //tmp

	delete descr->top_ptr;

	descr->counter--;

	descr->top_ptr = it;
	return ret;
}

