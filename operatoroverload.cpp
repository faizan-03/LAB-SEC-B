#include<iostream>

using namespace std;


class NUMBER{

    int real;
    int imag;

public:

NUMBER(int real, int imag){
    this->real = real;
    this->imag = imag;
}

NUMBER& operator + (NUMBER const &obj){
    this->real = real + obj.real;
    this->imag = imag + obj.imag;
    return *this;
}

NUMBER& operator - (NUMBER const &obj){
    this->real = real - obj.real;
    this->imag = imag - obj.imag;
    return *this;
}

void display(){
    cout << real << " + " << imag << "i" << endl;
}

};

int main(){

 NUMBER c1(1, 2);
 NUMBER c2(3, 4);
 NUMBER c3 = c1 + c2;
 c3.display();

    return 0;
}