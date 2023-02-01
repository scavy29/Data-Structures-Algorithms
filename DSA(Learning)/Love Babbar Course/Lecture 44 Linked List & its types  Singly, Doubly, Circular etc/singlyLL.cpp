#include<iostream>
using namespace std;

// Implementation of Node
class Node{
    public:
    int data;
    Node *next;

    //Constructor Of Node
    Node(int data){
        this->data=data;
        this->next=NULL;
    }

    ~Node(){
        int value=this->data;
        //Memory Free
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"Memory if Free with Data: "<<value<<endl;
    }
};

//Insert at Head
void insertathead(Node* &head,int d){
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}

// Insert at Tail
void insertattail(Node* &tail,int d){
    Node *temp=new Node(d);
    tail->next=temp;
    // tail=tail->next;
    tail=temp;  
}

// Insert at a Specific Position
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
        insertattail(tail,d);
        return;
    }

    // Create node for d
    Node *nodetoinsert=new Node(d);
    nodetoinsert->next=temp->next;
    temp->next=nodetoinsert;
}

//Delete a node
void deletenode(int pos,Node* &head){
    if(pos==0){
        Node *temp=head;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        Node *current=head;
        Node *prev=NULL;
        int count=1;
        while(count<pos){
            prev=current;
            current=current->next;
            count++;
        }
        prev->next=current->next;
        current->next=NULL;
        delete current;
    }
}

//Traverse a LL
void print(Node* &head){
    Node *temp=head;
    
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    //Creating a Node object
    Node *node1=new Node(25);
    //cout<<node1->data<<" ";
    //cout<<node1->next<<" ";

    //Head pointed to node
    Node *head=node1;
    // print(head);

    //Insertathead
    // insertathead(head,20);
    // print(head);

    //Tail pointed to node
    Node *tail=node1;

    // Insert at Tail
    insertattail(tail,30);
    
    print(head);

    //Insert at specific
    insertatpos(head,tail,3,99999);
    print(head);


    deletenode(3,head);
    print(head);

    return 0;
}