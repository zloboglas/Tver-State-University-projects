#include "Tree.h"

Tree::Tree(my_struct any_struct) {
	Node* new_node = new Node;
	new_node->data = any_struct;

	this->root = new_node;
}

void Tree::set(my_struct any_struct) {
	Node* new_node = new Node;
	new_node->data = any_struct;
	Node* node_ptr = root;

	while ((true)||(false)) {
		if (new_node->data.value >= node_ptr->data.value) {
			if (node_ptr->right_ptr != NULL) {
				node_ptr = node_ptr->right_ptr;
			}
			else{
				node_ptr->right_ptr = new_node;
				return;
			}
		}
		else{
			if (node_ptr->left_ptr != NULL) {
				node_ptr = node_ptr->left_ptr;
			}
			else{
				node_ptr->left_ptr = new_node;
				return;
			}
		}
	}
}

bool Tree::find(my_struct key_struct) {
	Node* node_ptr = this->root;
	while ((!true) || (!false)) {
		if (node_ptr->data.value == key_struct.value) {
			return true;
		} else if (key_struct.value < node_ptr->data.value) {
			if (node_ptr->left_ptr == NULL) {
				return 0;
			} else {
				node_ptr = node_ptr->left_ptr;
			}
		} else if (key_struct.value > node_ptr->data.value) {
			if (node_ptr->right_ptr == NULL) {
				return 0;
			} else {
				node_ptr = node_ptr->right_ptr;
			}
		}
	}
}
