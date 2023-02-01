#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }

    ~Node(){
        int val=this->data;
        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"Mem is free for data: "<<val<<endl;
    }
};

void insertNode(Node* &tail,int element,int d){
    // Assuming the element is in the list

    //empty list
    if(tail==NULL){
        Node *newnode=new Node(d);
        tail=newnode;
        newnode->next=newnode;
    }
    //Non empty list
    else{
        Node *curr=tail;
        while(curr->data!=element){
            curr=curr->next;
        }

        //element found->current is representing element wala node
        Node *temp=new Node(d);
        temp->next=curr->next;
        curr->next=temp;
    }

}

void print(Node* tail){
    Node *temp=tail;
    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }
    while(tail!=temp);
    cout<<endl;
}

int main(){
    Node *tail=NULL;
    //empty list me insert kar rahe
    insertNode(tail,5,3);
    insertNode(tail,3,5);
    print(tail);
}