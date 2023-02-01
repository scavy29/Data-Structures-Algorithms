#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node *prev;

    Node(int d){
        this->data=d;
        this->next=NULL;
        this->prev=NULL;
    }
};

// Traversing a DLL
void print(Node *head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

// Find Length of DLL
int getlength(Node *head){
    int length=0;
    Node *temp=head;

    while(temp!=NULL){
        length++;
        temp=temp->next;
    }
    return length;
}


void insertathead(Node* &head,int d){
    if(head==NULL){
        Node *temp=new Node(d);
        head=temp;
    }
    else{
    Node *temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
    }
}

void insertattail(Node*  &tail,Node* &head,int d){
    if(head==NULL){
    Node *temp=new Node(d);
    tail=temp;
    }
    else{
    Node *temp=new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
    }
}

void insertatpos(Node* &head,Node* &tail,int pos,int d){
    if(pos==1){
        insertathead(head,d);
        return;
    }
    Node *temp=head;
    int count=1;

    while(count<pos-1){
        temp=temp->next;
        count++;
    }

    if(temp->next=NULL){
        insertattail(tail,head,d);
        return;
    }
    Node *nodetoinsert=new Node(d);
    nodetoinsert->next=temp->next;
    temp->next->prev=nodetoinsert;
    temp->next=nodetoinsert;
    nodetoinsert->prev=temp;
}

int main(){
    Node *node1=new Node(10);
    Node *head=node1;
    Node *tail=node1;
    print(head);
    cout<<endl;    
    cout<<"Length: "<<getlength(head);
    cout<<endl;
    cout<<"At Head: ";
    insertathead(head,9);
    insertathead(head,8);
    insertathead(head,7);
    print(head);
    cout<<endl;
    cout<<"At Tail: ";
    insertattail(tail,head,11);
    print(head);
    cout<<endl;
    cout<<"Position: ";
    insertatpos(head,tail,2,101);
    print(head);
    return 0;
}