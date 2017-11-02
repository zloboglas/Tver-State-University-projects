#pragma once
#include <iostream>

struct my_struct {
	int value;
};


class Tree {
private:
	struct Node {
		my_struct data;
		Node* left_ptr = NULL;
		Node* right_ptr = NULL;
	};
	Node* root = NULL;
public:
	Tree(my_struct);
	~Tree();
	void set(my_struct);
	bool find(my_struct);
	void del_list(Node*);
};
