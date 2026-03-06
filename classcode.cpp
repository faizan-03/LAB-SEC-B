#include<iostream>
using namespace std;

class Person {
    
    string name;
    int Id;
    char Gender;

    public:

    Person() {
        name = "ali";
        Id = 0;
        Gender = 'U';
        cout << "Default constructor called for " << name << " " << Id << " " << Gender << endl; 
    }

    Person(string n, int id, char g) {
        name = n;
        Id = id;
        Gender = g;
        cout << "Parameterized constructor called for " << name << " " << Id << " " << Gender << endl; 
    }


    Person(const Person& other) {
        name = other.name;
        Id = other.Id;
        Gender = other.Gender;
        cout << "Copy constructor called for " << name << " " << Id << " " << Gender << endl; 
    }

    ~Person() {
        cout << "Destructor called for " << name << " " << Id << " " << Gender << endl; 
        
    }

    void setInfo(string n, int id, char g) {
        name = n;
        Id = id;    
        Gender = g;
    } 

    void setInfo(){
      
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter ID: ";
        cin >> Id;
        cout << "Enter Gender (M/F): "; 
        cin >> Gender;
    
    }

    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "ID: " << Id << endl;
        cout << "Gender: " << Gender << endl;
    }
};

int main(){

    Person p1,p2,p3("Charlie", 67890, 'M');
    Person p4(p3);

    

    // p1.name = "Bob"; 
    // p1.Id = 54321;
    // p1.Gender = 'M';
    // p1.displayInfo();


    // p1.setInfo("Alice", 12345, 'F');
    // p1.displayInfo(); 
    
    
     
    // cout <<"-----------------------------" << endl;
    // Person p2;
    // p2.setInfo();
    // cout <<"-----------------------------" << endl;
    // p2.displayInfo();

    return 0;
}