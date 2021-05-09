#include "linkedlist.cpp"
#include <iostream>

using namespace std;
int main(){
   
       
  LinkedList students;
  students.display();
  
  students.insertAtLast(2123);
  students.display();
  
  
  
  students.insertAtLast(2233);
  students.insertAtLast(2334);
  students.insertAtLast(2323);
  students.display();
  students.insertAtFirst(10);  
  students.display();
 }
