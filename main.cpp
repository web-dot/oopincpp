#include <iostream>

using namespace std;

 /*
        C++ classes and objects

        To create a class use the class keyword
    */


    class MyClass{
    public:

        MyClass(){
            cout << "no argument constructor" << endl;
        }

        MyClass(int num, string str){
            myNum = num;
            myString = str;
        }

        int myNum;
        string myString;
        void myMethod(){
            cout << "Hello World" << endl;
        }
        void myNewMethod();
        void checkEven(int num);
    };

    //method definition outside class
    void MyClass::myNewMethod(){
        cout << "Hello New World!" << endl;
    }

    //method definition
    void MyClass::checkEven(int num){
        cout << "checking even" << endl;
    }

int main()
{

    /*
        To create a object of myClass, specify the class name followed by
        object name
    */

    MyClass myObj;

    //access attribute and set values
    myObj.myNum = 15;
    myObj.myString = "programming";

    //print attribute values
    cout << myObj.myNum << endl;
    cout << myObj.myString << endl;

    //call class methods
    myObj.myMethod();
    myObj.myNewMethod();
    myObj.checkEven(20);

    //creating object using constructor
    MyClass obj1(20, "using constructor");
    MyClass obj2(10, "using constructor again");

    cout << obj1.myNum << " " << obj1.myString << endl;
    cout << obj2.myNum << " " << obj2.myString << endl;

}
