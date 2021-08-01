#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int data){
        this->data=data;
        next=NULL;
    }
};


class stackusingll{
    Node *head;
    int siz;

    public:

    stackusingll(){
        head=NULL;
        siz=0;
    }


int size(){
    return siz;
}
bool isempty(){
    if(head==NULL){
        return true;
    }
    else{
        return false;
    }
}
void push(int element){
    Node *newnode=new Node(element);
    
    newnode->next=head;
    head=newnode;
    siz++;


    
}
int top(){
    if(isempty){
        return 0;
    }
    return head->data;
}
int pop(){
    if(isemty){
        return 0;
    }

    int ans=head->data;
    Node *temp=head;
    head=head->next;
    delete temp;
    
        
    return ans;


}
};
int main(){
    stackusingll s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.top();

    return 0;
}


