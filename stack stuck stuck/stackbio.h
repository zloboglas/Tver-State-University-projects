#pragma once

struct node_s {
	int data;
	node_s* prev;
};

struct stack_descr {
	node_s* top_ptr;
	int counter = 0;
};

void push(int, stack_descr*);

int pop(stack_descr*);

