#include "split.h"
#include "iostream"
using namespace std;
int main(){
  
  
  
  Node* evenlist = nullptr;

  Node* oddlist = nullptr;

  Node fourNode(5,nullptr);
  Node secondNode(2,&fourNode);
  Node Testing(1,&secondNode);

  Node* Name1= &Testing;
  //Node* Name2= &oddlist;
  //Node* Name3= &evenlist;

  Node* &pTest = Name1;
  Node* &pTestodd = oddlist;
  Node* &pTesteven = evenlist;


  split(pTest, pTestodd, pTesteven);

    cout << oddlist->next->value << endl;
   // cout << evenlist->value << endl;



return 0;
}