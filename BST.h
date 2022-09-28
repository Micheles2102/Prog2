#ifndef BST_H
#define BST_H
#include "BTSNode.h"
template <typename T>
class BST{
    private:
    BTSNode<T>* root;
    public:
    BST(){root=nullptr}
    bool isEmpty(){return root=nullptr;}
    void insert(T key){
        if(isEmpty){
            root=new BTSNode<T>(key);
            return
        }
        else{
            insert(root,key);
        }
    }
    void insert(BTSNode<T>* ptr,T key){
        if(!ptr->left && key<=ptr->left){
            ptr->left=new BTSNode<T>*(key);
            ptr->left->setParent(ptr);
            return
        }
        if(!ptr->right && key>ptr->left){
            ptr->right=new BTSNode<T>*(key);
            ptr->right->setParent(ptr);
            return
        }
        if(key>ptr->key){
            insert(ptr->right,key);}
        else{
            insert(ptr->left,key);}

    }
    void visit(BTSNode<T>* ptr){
        cout<<"\n"<<*ptr<<endl;
    }
    void in_order(BSTNode<T>*ptr){
        if(!ptr){
            return;
        }
        else{
            in_order(ptr->left);
            visit(ptr);
            in_order(ptr->right);
        }
    }
    void in_order(){in_order(root);}
    
};



#endif