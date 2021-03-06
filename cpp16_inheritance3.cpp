#include <iostream>
#include "h_cpp2.h"

using namespace std;

person :: person(void)
{
	cout << "Constructor called" <<endl;
}

person :: ~person(void)
{
	cout << "destructor called" << endl;
}

//function given by base class
void person::display()
{
    cout << "Name :" << name << endl;
    cout << "Age :" << age << endl;
}

//derived class specific functions.
void footballer::playfootball()
{
    cout <<"I play football. My Details are," << endl; 
}

//derived class specific functions.
void mathsteacher::teachmaths()
{
 cout << "I teach Maths. My Details are," << endl;
}


int main()
{
    //cout << "1"<< endl; 
    footballer footblr;
    //cout << "2"<< endl; 
    mathsteacher teacher;
    //cout << "3"<< endl; 

//here we are directly accessing base class variables with derived class object.
    footblr.name = "Mike";
    footblr.age = 23;

    teacher.name = "Shaun";
    teacher.age =43;

//Here we are directly accessing derived class functions along with base class functions.
    footblr.playfootball();
    footblr.display();
    cout << endl; 
    teacher.teachmaths();
    teacher.display();

return 0;
}
