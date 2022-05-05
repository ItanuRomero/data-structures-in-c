#include <stdio.h>
#include <stdlib.h>

typedef struct {
 int value;
 struct Node* left;
 struct Node* right;
}Node;

void preOrder(Node* n){
    if( n != NULL){
        printf("%i ", n->value);
        preOrder(n->left);
        preOrder(n->right);
   }
}

void inOrder(Node* n){
    if( n != NULL) {
        inOrder(n->left);
        printf("%i ", n->value);
        inOrder(n->right);
   }
}

void postOrder(Node* n){
    if( n != NULL) {
        postOrder(n->left);
        postOrder(n->right);
        printf("%i ", n->value);
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

void main(){

    Node* n =  (Node*) malloc(sizeof(Node));
	Node* n1 = (Node*) malloc(sizeof(Node));
	Node* n2 = (Node*) malloc(sizeof(Node));
	
	n->value = 10;

	n1->value = 20;
	n1->left = NULL;
	n1->right = NULL;
	
	n2->value = 30;	
	n2->left = NULL;
	n2->right = NULL;
	
	n->left = n1;
	n->right = n2;
	

    printf("\nPre-Ordem:");
    preOrder(n);
    
	searchNode(n, 10);
	
    free(n);
	free(n1);
	free(n2);
}

