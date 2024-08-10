#include <iostream>



//Creating a class of students
 
 class Student{
    public: 
    std::string nameofStudent;

    Student(const std::string& name) : nameofStudent(name){}            //constructor, referenced to a string object using &
    std::string getName(){                                      //getter function to get student name
        return nameofStudent;
    }
};


// defining a student node structure

struct StudentNode
{
 Student student;       //student object from Student class embedded in the node
 StudentNode* next;     //pointer to the next node

 //constructor to initialize the node with the students
 StudentNode(Student s) : student(s), next(nullptr){}

};

//A LL class to manage student nodes 

class StudentList{
    public:
    StudentNode* head;      // head of the list

    StudentList():head(nullptr){}

    //destructor definition to release the resources by the object when delete is called

    ~StudentList(){
        StudentNode* current = head;
        while(current!=nullptr){
            StudentNode* next = current->next;
            delete current;
            current = next;
        }
    }

    void addStudent(const Student& student){
        StudentNode* newNode = new StudentNode(student);
        newNode->next = head;
        head = newNode;
    }

};

class Course{
    public:
    std::string CourseName;
    StudentList students;        //using student list which is a linked list

    Course(const std::string& course):CourseName(course){}

    void addStudent(const Student& student){      // taking the student value from class Student
        students.addStudent(student);            //invoking a function addStudent from StudentList class
    }
};
 
class Department{
    public:
    std::string DeptName;
    StudentList students;

    Department(const std::string& dept):DeptName(dept){}

    void addStudent(const Student& Student){
        students.addStudent(Student);
    }

};
 


int main(){
    std::cout<<"hello world"<<std::endl;
    Student alice("Alice");
    Student bob("Bob");
    Student john("John");
    Student eve("Eve");

    Course programming("CPP Programming");
    programming.addStudent(alice);          //notice how we are giving variable that contains the string and not the string directly
    programming.addStudent(john);

     Course robotics("Robotics");
    programming.addStudent(bob);          //notice how we are giving variable that contains the string and not the string directly
    programming.addStudent(eve);

    Department Computerscience ("Computer Science");
    Computerscience.addStudent(alice);
    Computerscience.addStudent(john);


    Department Mechatronics ("Mechatronics");
    Computerscience.addStudent(bob);
    Computerscience.addStudent(eve);


    return 0;
}