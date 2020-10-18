#include<iostream>
using namespace std;


class Node{
    
    private:
        int data;
        Node *next;
    
    public:
        void insert(int x);
        void print();
        void insert(int x, int n);
        void Delete(int n);
};

Node *head;

void Node::insert(int x){
    
    Node *temp=new Node();
    
    temp->data=x;
    temp->next=head;
    head=temp;
}

void Node::insert(int x, int n){
    Node *temp = new Node();
    temp->data=x;
    temp->next=NULL;
    if(n==1){
        temp->next=head;
        head=temp;
    }
    else{
        Node *temp2=new Node();
        temp2=head;
        for(int i=1; i<n-1; i++){
            temp2=temp2->next;
        }
        temp->next=temp2->next;
        temp2->next=temp;
    }

}

void Node::Delete(int n){
    Node *temp =new Node();
    temp = head;
    if(n==1){
        head=temp->next;
        delete temp;
    }
    else{
        // Node *temp2=new Node();
        for(int i=1; i<n-1; i++){
            temp=temp->next;
        }
        Node *temp2=temp->next;
        temp->next=temp2->next;
        delete temp2;

    }
}

void Node::print(){
    
    Node *temp=head;
    cout << "\nList is: ";
    while(temp!= NULL){
        cout << temp->data<<" ";
        temp=temp->next;
    }
    cout << "\n";
}

int main(){
    Node list;
    head = NULL;
    // int x,n;
    list.insert(16, 1);
    list.insert(16, 1);
    list.insert(16, 1);
    list.insert(17, 2);
    list.insert(96, 3);
    list.print();
    list.Delete(2);
    list.print();

    // int n, number;
    // cout << "What is the size of list: \n";
    // cin >>n;
    // for (int i=1; i<=n; i++){
    //     cout << "\nEnter the number in list: \n";
    //     cin >> number;
    //     list.insert(number);
    //     list.print();
    // }
    return 0;
}