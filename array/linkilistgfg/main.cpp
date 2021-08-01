#include <iostream>

using namespace std;

class node{
public:
    int data;
    node* next;



};
void insertattail(int &head, int data){
    node* n=new node();


    node* temp=head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next=n;

}
void display(node* head){
    node* temp=head;
    while(temp !=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}



int main()
{
    node* head=NULL;
    insertattail(head,1);
    insertattail(head,2);
    insertattail(head,3);
    display(head);



    return 0;
}
