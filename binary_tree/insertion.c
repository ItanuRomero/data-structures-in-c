#include <stdio.h>
#include <stdlib.h>

typedef struct {
 int value;
 struct Node* left;
 struct Node* right;
} Node;

void preOrder(Node* n){
    if( n != NULL){
        printf("%i ", n->value);
        preOrder(n->left);
        preOrder(n->right);
   }
}

void searchNode(Node* n, int searchedValue){
	if (n != NULL){
		if (searchedValue == n->value){
			printf("\nValor encontrado");
		}else if (searchedValue < n->value){
			searchNode(n->left, searchedValue);
		}else if (searchedValue > n->value){
			searchNode(n->right, searchedValue);
		}
	}else{
		printf("\n NAO ENCONTRADO");
	}
	
}

Node* newNode(int value) {
	Node* node = (Node*) malloc(sizeof(Node));
	node->value = value;
	node->left = NULL;
	node->right = NULL;
	return node;
}

Node* insertNode(Node* n, int valueToInsert) {
	if (n == NULL) {
		return newNode(valueToInsert);
	}
	
	if (valueToInsert == n->value) {
		printf("\nValor ja existente");
	} else if (valueToInsert < n->value) {
		
		if (n->left == NULL) {
			n->left = newNode(valueToInsert);
		} else {
			insertNode(n->left, valueToInsert);
		}
		
	} else if (valueToInsert > n->value) {
		
		if (n->right == NULL) {
			n->right = newNode(valueToInsert);
		} else {
			insertNode(n->right, valueToInsert);
		}
	}
	return n;
}

void freeAll(Node* n){
    if( n != NULL) {
        freeAll(n->left);
        freeAll(n->right);
        free(n);
   }
}

void main() {
    Node* n =  (Node*) malloc(sizeof(Node));
	n = NULL;

    printf("\nantes de inserir: ");
    preOrder(n);
    n = insertNode(NULL, 20);
    n = insertNode(n, 10);
    n = insertNode(n, 30);
    n = insertNode(n, 25);
    n = insertNode(n, 45);
    n = insertNode(n, 7);
    printf("\ndepois de inserir: ");
    preOrder(n);
	
	freeAll(n);
}

