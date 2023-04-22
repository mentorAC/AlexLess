#include <iostream>
#include <string>

using namespace std;


//class Human {
//public:
//    string name;
//    int age;
//    
//    ~Human()
//    {
//
//    }
//};


class Lampa {
private:
    bool position;
public:
    Lampa() {
        position = false;
    }
    void ON() {
        position = true;
    }
    void OFF() {
        position = false;
    }
    void Check() {
        if (position == true) {
            cout << "ON" << endl;
        }
        else cout << "OFF" << endl;
    }
};


//class Base {
//public:
//    int value;
//};
//
//class Child :public Base{
//
//};


class Human
{
public:
    string name;
    int age;

private:

};
class Worker : public Human
{
public:
    int Id;

private:

};
class Boss : public Worker
{
public:
    int room_number;
private:

};


//class Base {
//    int value;
//public:
//    Base(int value)
//    {
//
//    }
//};
//class Child1 :public Base {
//public:
//    Child1(int value) : Base(value)
//    {
//
//    }
//};
//class Child2 :public Base {
//public:
//    Child2(int value) : Base(value)
//    {
//
//    }
//};
//class Result :public Child1, public Child2 {
//    Result(int value) : Child1(value), Child2(100)
//    {
//
//    }
//};


class Base {
public :
    virtual void Foo() {
        cout << "Base\n";
    }
};

class Child: public Base {
public:
    void Foo() override{
        cout << "Child\n";
    }
};


class MyClass {
public:
    virtual void Foo() = 0;
};

int main1() {
    {
        //cout << "Hello world";
        //условие ? значение1 : значение2;

        /*int a = 3;
        int b = 5;
        cout << ((a > b) ? a : b);*/

        /*for (int i = 0; i < 10; i++)
        {
            cout << "a";
        }*/

        //int n;
        //cin >> n;
        //int arr[n];
        //int* arr = new int[n];

        /*Human h1;
        Human h2;*/
    }
    /*Lampa lam;
    lam.position = true;
    lam.Check();
    lam.ON();
    lam.Check();
    lam.OFF();
    lam.Check();*/
    //Child ch;
    //ch.value = 10;
    //Child1 ch(4);

    Base* ch = new Child();
    ch->Foo();

    delete ch;


    //MyClass mc;
    //mc.Foo();

    return 0;
}