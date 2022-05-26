#include <stdio.h>
#include <stdlib.h>

#define SIZE 6

typedef struct {
 int value;
 struct Node* left;
 struct Node* right;
} Node;


void inOrder(Node* n){
    if( n != NULL) {
        inOrder(n->left);
        printf("%i ", n->value);
        inOrder(n->right);
   }
}

Node* searchNode(Node* n, int searchedValue){
	if (n != NULL){
		if (searchedValue == n->value){
			printf("\nValor encontrado");
			return n;
		}else if (searchedValue < n->value){
			searchNode(n->left, searchedValue);
		}else if (searchedValue > n->value){
			searchNode(n->right, searchedValue);
		}
	}else{
		printf("\n NAO ENCONTRADO");
		return NULL;
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

int rightHeightCount(Node* n) {
	int count = 0;
	while (n->right != NULL) {
		n = n->right;
		count++;
	}
    return count;
}

int leftHeightCount(Node* n) {
	int count = 0;
	while (n->left != NULL) {
		n = n->left;
		count++;
	}
    return count;
}

int calculateBalancingFactor(Node* n) {
	int rightCount, leftCount, leftHeight = 0, rightHeight = 0;
	if (n->left) {
		rightCount = rightHeightCount(n->left);
		leftCount = leftHeightCount(n->left);
		if (rightCount < leftCount) {
			leftHeight = leftCount;
		} else {
			leftHeight = rightCount;	
		}
	} 
	if (n->right) {
		rightCount = rightHeightCount(n->right);
		leftCount = leftHeightCount(n->right);
		if (rightCount < leftCount) {
			rightHeight = leftCount;
		} else {
			rightHeight = rightCount;	
		}
	}
	return leftHeight - rightHeight;
}

void main() {
    int balancingFactor, i;
    int values[SIZE] = {10, 20, 30, 40, 25, 50};
	Node* n =  (Node*) malloc(sizeof(Node));
	Node* aux =  (Node*) malloc(sizeof(Node));
	n = NULL;
	
	
    printf("\nantes de inserir: ");
    inOrder(n);
    for (i = 0; i < SIZE; i++) {
    	n = insertNode(n, values[i]);
    	aux = searchNode(n, values[i]);
		balancingFactor = calculateBalancingFactor(aux);
    	printf("\nBalancing Factor: %d", balancingFactor);
	}
    
    printf("\ndepois de inserir: ");
    inOrder(n);
	
	freeAll(n);
}
