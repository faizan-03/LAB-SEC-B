#include <iostream>

using namespace std;

class Shape {

    private:
        int privateVar;

    protected:
        int protectedVar;
    
    public:
        int publicVar;

        Shape(){
            privateVar = 11;
            protectedVar = 12;
            publicVar = 13;
        }
};

class Circle : public Shape{

    public:
        void display(){
            // cout << "Private Var: " << privateVar << endl; // Not accessible
            cout << "Protected Var in Circle: " << protectedVar << endl; // Accessible
            cout << "Public Var in Circle: " << publicVar << endl; // Accessible
        }


};

class Rectangle : protected Shape{

    public:
      
      int i;
      int j;

      Rectangle( int a, int b){
          i = a;
          j = b;
        }

        void display(){
           
            cout << "Protected Var in Rectangle: " << protectedVar << endl; // Accessible
            cout << "Public Var in Rectangle: " << publicVar << endl; // Accessible
        }

    };


    class Triangle : private Shape{

        public:
            void display(){
                // cout << "Private Var: " << privateVar << endl; // Not accessible
                cout << "Protected Var in Triangle: " << protectedVar << endl; // Accessible
                cout << "Public Var in Triangle: " << publicVar << endl; // Accessible
            }

    };

int main(){


   Circle c;
   c.publicVar = 20; // Accessible
   // c.protectedVar = 21; // Not accessible    
   c.display();

   Rectangle r(3, 4);
   // r.publicVar = 30; // Accessible

   r.display();
   
   Triangle t;
   // t.publicVar = 40; // Accessible
   t.display();

    return 0;
}