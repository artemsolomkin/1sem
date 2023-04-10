#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    node* left;
    node* right;
};
node* getnode(int value){
    node* temp = new node;
    temp->data = value;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
node* insert_bst(node* roots, int value)
{
    if (roots == NULL){
        return getnode(value);
    }
    if (roots->data > value){
        roots->left = insert_bst(roots->left, value);
    }
    else if (roots->data < value){
        roots->right = insert_bst(roots->right, value);
    }
    return roots;
}
int leaf_sum(node* roots){
    if (roots == NULL){
        return 0;
    }
    if (roots->left == NULL && roots->right == NULL){
        return roots->data;
    }
    return (leaf_sum(roots->left) + leaf_sum(roots->right));
}
int nbleaves(node* roots)
{
    int nb = 0;
    if (roots->right == NULL && roots->left == NULL) {
        nb = nb + 1;
    }
    return nb;
}
int main(){
    node* root = new node;
    root = NULL;
    int value;
    scanf("%d", &value);
    while (value > 0){
        scanf("%d", &value);
        if (value > 0){
            root = insert_bst(root, value);
        }
    }
    long double answer = (leaf_sum(root)) / (nbleaves(root));
    printf("%lg", answer);
}
