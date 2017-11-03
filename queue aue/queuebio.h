#pragma once

struct node_s {
	int data;
	node_s* next_ptr;
	node_s* previous_ptr;
};

struct queue_descr {
	node_s* top_ptr = NULL;
	node_s* buttom_ptr = NULL;
	int counter = 0;
};

void push(int, queue_descr*);
int pop(queue_descr*);

