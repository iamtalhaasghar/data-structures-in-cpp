#include <iostream>

using namespace std;

class Node{
public:
    int rollnumber;
    Node* next;
    
    Node(){}
    
    Node(int data){
		rollnumber = data;
		next = NULL;
	}
    
    
    
};
