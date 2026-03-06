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

NUMBER operator + (NUMBER const &obj) const{
    return NUMBER(real + obj.real, imag + obj.imag);
}

NUMBER operator - (NUMBER const &obj) const{
    return NUMBER(real - obj.real, imag - obj.imag);
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
