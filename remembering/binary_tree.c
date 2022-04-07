#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int value;
	struct Node *left, *right;
} Node;
/* 
example:
	1
   / \
  2  3
 / \
4   5

expected output
pre order: 1, 2, 4, 5, 3
in order: 4, 2, 5, 1, 3
post order: 4, 5, 2, 3, 1
*/

void main() {
	Node *n[5];
	int size = sizeof(Node);
	int i;
	
	for (i = 0; i < 5; i++) {
		n[i] = malloc(size);
		n[i]->value = i + 1;
	}
	
	n[0]->left = n[1];
	n[0]->right = n[2];
	
	n[1]->left = n[3];
	n[1]->right = n[4];
	
	n[2]->left = NULL;
	n[2]->right = NULL;
	
	n[3]->left = NULL;
	n[3]->right = NULL;
	
	n[4]->left = NULL;
	n[4]->right = NULL;
	
	printf("Pre order: \n");
	pre_order(n[0]);
	printf("\nIn order: \n");
	in_order(n[0]);
	printf("\nPost order: \n");
	post_order(n[0]);
	
	for (i = 0; i < 5; i++) {
		free(n[i]);
	}
}

void pre_order(Node *n) {
	printf("\tNode: %d\n", n->value);
	
	if (n->left != NULL) {
		pre_order(n->left);
	}
	if (n->right != NULL) {
		pre_order(n->right);
	}
}

void in_order(Node *n) {
	if (n->left != NULL) {
		in_order(n->left);
	}
	
	printf("\tNode: %d\n", n->value);
	
	if (n->right != NULL) {
		in_order(n->right);
	}
}

void post_order(Node *n) {
	if (n->left != NULL) {
		post_order(n->left);
	}
	if (n->right != NULL) {
		post_order(n->right);
	}
	
	printf("\tNode: %d\n", n->value);
}