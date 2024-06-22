#include <iostream>
#include <string>
using namespace std;

struct student{      // Creating A Struct to hold multipule variable under one name
    string name;    // String data type
    int age;        // maybe integer
    char grade;     // maybe char
    bool succeded;  // maybe boolean data type too why not :)
}; // <---- DONT NOT FORGET TO END IT UP WITH SEMICOLIMN ;

int main(){
    student student1; // Like Declaring variable , We declare student1 from struct student.
    student1.name="Mahfoudh";   // setting up classes for student1
    student1.age=21;      
    student1.grade='A';    
    student1.succeded=1;  

    student student2;  // declaring student 2 from struct student
    student2.name="hadj";   // setting up classes for student2
    student2.age=90;      
    student2.grade='F';    
    student2.succeded=0;  

    cout << student1.name << ' ';  // printing out student1.classes
    cout << student1.age << ' ';
    cout << student1.grade << ' ';
    cout << student1.succeded << '\n';

    cout << student2.name << ' '; // printing out student2.classes
    cout << student2.age << ' ';
    cout << student2.grade << ' ';
    cout << student2.succeded << '\n';

    return 0;
 }
