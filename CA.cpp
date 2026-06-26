#include <iostream>
using namespace std;
class Node {
public:
    int bookID;                
    string title;              
    string author;             
    Node *prev, *next;         

    Node(int id, string t, string a) {   
        bookID = id;          
        title = t;            
        author = a;           
        prev = next = NULL;   
    }
};

Node* head = NULL;             


void insertBeginning(int id, string t, string a) {
    Node* n = new Node(id, t, a);  
    n->next = head;                 
    if (head != NULL)              
        head->prev = n;             
    head = n;                       
}



void insertEnd(int id, string t, string a) {
    Node* n = new Node(id, t, a);   

    if (head == NULL) {             
        head = n;                   
        return;                     
    }

     Node* temp = head;            
    while (temp->next != NULL)     
        temp = temp->next;         

    temp->next = n;                
    n->prev = temp;                
}


// insert after given bookID
void insertAfter(int key, int id, string t, string a) {
    Node* temp = head;                      

    while (temp != NULL && temp->bookID != key) 
        temp = temp->next;                  

    if (temp == NULL) return;               

    Node* n = new Node(id, t, a);           

    n->next = temp->next;                   
    n->prev = temp;                         

    if (temp->next != NULL)                 
        temp->next->prev = n;               

    temp->next = n;                         
}



void forward() {
    Node* temp = head;                      
    while (temp != NULL) {                  
        cout << temp->bookID << "  ";     
        cout << temp->title << " " ;         
        cout << temp->author << endl;       
        temp = temp->next;                 
    }
}



void backward() {
    Node* temp = head;                      
    if (temp == NULL) return;               

    while (temp->next != NULL)              
        temp = temp->next;                  

    while (temp != NULL) {                  
        cout << temp->bookID << " ";        
        cout << temp->title << " " ;         
        cout << temp->author << endl;       
        temp = temp->prev;                 
    }
}



int main() {
    insertBeginning(1, "Java", "James");    
    insertEnd(2, "DSA", "Mark");            
    insertAfter(1, 3, "Python", "Guido");   

    cout<< "Left to Right:\n";             
    forward();                              

    cout << "\nRight to Left:\n";           
    backward();                             

    return 0;                               
}