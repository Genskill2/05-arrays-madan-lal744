#include<iostream>
using namespace std;
class Node{
      public:
      int data ;
      Node* next;

      Node(int data){
            this -> data=data;
            this -> next=NULL;
      }
} ;
void insertatnode(int data,Node* head){
      Node* temp= new Node(data);
      temp->next=head;
      temp=head;
}
void print(Node* head){
      Node* temp=head;
      while(temp!=0){
            cout<<temp->data<<endl;
            temp=temp->next;
      }
}

int main(){
      Node* node1= new Node(10);
      Node* head=node1;
      cout<<node1->data<<endl;
     int k=5;
      for(int i=0;i<k;i++){
            int p;
            cin>>p;
            insertatnode(i,head);

      }
      print(head);


return 0;
}
