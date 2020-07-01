#include <iostream>
using namespace std;

class stack{
  public:
    int data;
    stack* link;
    stack* top;

  stack(){
    top = NULL;
  }


  void push(int data){
    stack *temp = new stack;
    temp->data = data;
    temp->link = top;
    top = temp;
  }

  void pop(){
    stack *temp = top;
    if(top==NULL){
      cout<<"sorry"<<endl;
      return;
    }
    top = top->link ;
    temp->link = NULL;
  }

  void Top(){
    cout<<top->data<<endl;
  }

  void print(){
    stack *temp = top;
    while(temp!=NULL){
      cout<<temp->data<<" ";
      temp = temp->link;
    }cout<<endl;
  }

};


int main() {
  stack s;
  s.push(1);s.print();
  s.push(2);s.print();
  s.push(3);s.print();
  s.push(4);s.print();
  s.pop();s.print();
  s.Top();s.print();

}

