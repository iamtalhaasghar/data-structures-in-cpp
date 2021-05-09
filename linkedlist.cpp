#include <iostream>
#include "node.cpp"

using namespace std;

class LinkedList{


    Node* head;
public:
	LinkedList(){
			head = NULL;
	}
		
	
    void display(){
         
        cout<<"Linked List: "; 
        if(!head){
            cout<<"<empty>.\n";
        }
        else if(!head->next){
			cout<<head->rollnumber<<endl;            
		}
		else{				    
            Node* temp = head;            
            while (temp->next)
            {
                cout<<temp->rollnumber<<", ";
                temp = temp->next;
            }
            cout<<temp->rollnumber<<endl;
        }
    }

    void insertAtLast(int data){
         
        if (!head)
        {
            Node* n = new Node(data);
            head = n;
        }
        else{     
        
            Node* temp = head;

            while(temp->next){
                temp = temp->next;
            }

            Node* n = new Node(data);

            temp->next = n;

        }
    }

	
    void insertAtFirst(int data){
        
        if(!head){
            Node* n = new Node(data);
            head = n;
        }
        else{

            Node* n = new Node(data);
            n->next = head;
            head = n;

        }
            
    }

	
    void insertAtFirst(Node* newNode){


        if(!head){
          head = newNode;
        }
        else{
            newNode->next = head;
            head = newNode;

        }
    }

    void insertAfter(Node* target, Node* newNode){

            Node* temp = head;
            while(temp != target){
                temp = temp->next;
            }
            Node* z = temp->next;

            temp->next = newNode;
            newNode->next = z;
            

        }


    

    void insertBefore(Node* target, Node* newNode){

        
            Node* temp = head;
            while(temp->next != target){
                temp = temp->next;
            }

            newNode->next = target;
            temp->next = newNode;

    }

    Node* search(int data){

        Node* temp = head;

        while (temp->rollnumber != data)
        {
           temp = temp->next;
        }
        
        return temp;
    }

    void insertAll(int data[], int size){
       
        Node* temp = head;

        while(temp->next){
            temp = temp->next;
        }

        Node* savedAddress = NULL;
        for (int i = size; i > 0; i--)
        {
            Node* a = new Node(data[i]);
            a->next = savedAddress;
            savedAddress = a;
        }
        
        temp->next = savedAddress;
    }

    void deleteNode(Node* target){
        
    }
    
};
