#include <iostream>
#include <stdexcept> //To use "throw"  keyword, The throw keyword is used to signal that an exception has occurred. When throw is executed, the normal flow of program execution is interrupted.
using namespace std; //I understand, using namespace like this is not a good practice.
// understanding classes, objects, constructor and deconstructors, setters and getters (encapsulation)

// class Employee              // class employee, classes are user defined data types basically
// {

// private: 
// int Age;                    // made age private to understand different usage of private and public variable

// public:
// string Name;
// string Company;

// Employee(string name, string company, int age){         // Constructor defining attributes of employee

//     Name = name;
//     Company = company;
//     setAge(age);
// }
// // setter and getter funciton are employed to perform encapsulation.
// void setAge (int age){                  // using setter function to to check if age of employee is more than 18

//     if(age >= 18 && age <=65){
//         Age = age;
//     }else{ 
//        throw invalid_argument("Invalid age provided");
//         }

// }

// int getAge (){                      // using getter function to return the age of employee back after checking
//     return Age;
// }

// void introduceYourself(){                       // function or method used to print out the information of various employees
//     cout<< "Name of Employee: "<< Name<<endl;
//     cout<< "Name of Company: "<< Company<<endl;
//     cout<< "Age of Employee: "<< Age<<endl;

// }

// };

// understanding the concept of inheritance and how constructors are build in the inherited class

// class Developer: public Employee{              // Inherited base class is private by default so if we want to call introduceyourself() from developer we have to make it public
// // making the attribute private here to also demonstrate encapsulation in inherited class.
// private:
//     string FavProgrammingLang;

// public:
// // First part of the constructor comes from the inherited class and the arguments inlcude inherited attribute as well as 
// // attributes from the base class. :Employee(arguments) specifies the default constructor for the base Employee class. 
// // name, company and age attributes in :Employee(arguments) is taking care of (string name, string company, int age,..)
// // so we dont have to define them again and tring favprogramminglang is defined via a setter function

//     Developer(string name, string company, int age, string favprogramminglang):Employee(name, company, age) { 
//         setFavProglang(favprogramminglang);
//     }

// void setFavProglang(string favprogramminglang){

//     if (favprogramminglang == "cpp" || favprogramminglang == "python" || favprogramminglang == "rust" || favprogramminglang == "java" ){
//         FavProgrammingLang = favprogramminglang;
//     }else {
//         cout<<"Invalid programming language"<<endl;
//     }

// }

// string getFavProgLang(){
//     return FavProgrammingLang;
// }

// };


//playing with linked lists

class node{
public:
    int value;
    node* next;
};

void printlist (node* n)
{
cout << "elements of linked lists are: "<<endl;
while (n!=NULL/* condition */)
{
    cout << n->value << endl;
    n = n->next;/* code */
}

}

void insertAtfront(node**head, int newValue){  //to add a value to the front of the linked list. head here is the pointer to the pointer and hence double *.
// Three steps to insert the new value
//1. Prepare the new node
node* newNode = new node();
newNode->value = newValue;
//2. Put it in front of the current head(current first node of LL)
newNode->next = *head;   //now my head pointer is pointing to the newnode pointer
//3. Move head of the list to point to the newnode
*head = newNode; // assigning the new value to the pointer head which is whatever value i give to my newly created node.
}

void insertAtend(node**head, int newValue){
node* newNode = new node();     // declare a new node 
newNode->value = newValue;      // value is assigned to the newNode
newNode->next = NULL;           // should point to NULL because it would be the last element
if (*head == NULL){             // check if the linked list is empty, if yes, set the newNode as the Head node.
    *head = newNode;
    return;
}
// If linked list is not empty we have to search for the last node by iterating through each node starting from first and checking if its pointing to NULL.
node* last = *head;     //initially "last" node will have the same value as the head node so it would point to first node then we will iterate.
while (last->next != NULL){ //iterate till the next node is not pointing to NULL
    last = last->next;      // last will keep pointing to next node until it finds the point to NULL
}
last->next = newNode;       // insert newNode after the last node (at the end)

}

void insertafter(node*previous, int newValue){

    //check if previous node is NULL
    if (previous == NULL){
        cout<<"Previous cannot be NULL"<<endl;
        return;
    }

    //Prepare a newNode
    node* newNode = new node();
    newNode->value = newValue;

    //Insert newNode after previous
    newNode->next = previous->next;
    previous->next = newNode;

}

int main(){
    
    
    /* Employee Employee1 = Employee("Ahsan", "Vilisto", 31);       // instance of class Employee 
    Employee1.introduceYourself();       
    Employee Employee2 = Employee("John", "Private", 30);          // Another instance of class Employee
    Employee2.introduceYourself();
    
   // Employee1.getAge();                                         // Calling the getter function of class employee to access age attribute
   */

/*     Developer developer1 = Developer("Ahsan", "Vilisto", 31, "cpp"); //instantiate the developer class
    cout<<developer1.getFavProgLang()<<endl; */
    // Employee Employee1 = Employee("Ahsan","Vilisto", 31);
    // Developer d = Developer("Ahsan","Vilisto", 31, "cpp");
    // d.introduceYourself();                                  // invoke base class method from inherited class

    //playing with linked lists

    //node creations
    node* head = new node();          
    node* second = new node();
    node* third = new node();

    head->value=2;          //initializing the value for the head node
    head->next=second;      //head element will point to the second element
    second->value=4;        //initializing the value for the second node
    second->next=third;     //second element will point to the first.
    third->value=8;
    third->next=NULL;       //third node will point to NULL as there is no node after that

    
    insertAtfront(&head, 1);   //now by invoking this function i can add value to the front of my LL, in this 1 would be first value.
    insertAtfront(&head, -1);
    insertAtend(&head, 8*2);     // invoking function to add value to the end of my LL.
    insertafter(second, 9);
    insertAtend(&head,5);
    printlist(head);            //Passing head element to print LL


    return 0;
}