#include <iostream>
using namespace std;

class Animals
{
protected:
    string name;
public:
    Animals() { }
    Animals(string n) : name(n) {}

    virtual void Sound() 
    {
        cout<< "Animal makes a sound\n";
    }

    virtual ~Animals() {}
    
};

class TigerFamily : public Animals
{
public:
    TigerFamily() { }
    TigerFamily(string tf) : Animals(tf) {}

    void Sound() 
    {
        cout<< "Tigers make sound\n" ;
    }

    ~TigerFamily() {}
    
};

class Cat : public Animals
{
public:
    Cat() { }
    Cat(string n) : Animals(n) {}

    void Sound() 
    {
        cout<< "Sound for " << name << " is \"Meowmeow\" :P\n" ;
    }

    ~Cat() {}
    
};

class Dog : public Animals
{
public:
    Dog() { }
    Dog(string dog) : Animals(dog) {}

    void Sound() 
    {
        cout<< "Sound for " << name << " is \"Bark bark\" :P\n" ;
    }

    ~Dog() {}
    
};

class Tiger : public TigerFamily
{
public:
    Tiger() { }
    Tiger(string tiger) : TigerFamily(tiger) {}

    void Sound() 
    {
        cout<< "Sound for " << name << " is \"Roar\" :P\n" ;
    }

    ~Tiger() {}
};

class Lion : public TigerFamily
{
public:
    Lion() { }
    Lion(string lion) : TigerFamily(lion) {}

    void Sound() 
    {
        cout<< "Sound for " << name << " is \"Roar Roar\" :P\n" ;
    }

    ~Lion() {}
};

class Leopard : public TigerFamily
{
public:
    Leopard() { }
    Leopard(string leopard) : TigerFamily(leopard) {}

    void Sound() 
    {
        cout<< "Sound for " << name << " is \"Growl\" :P\n" ;
    }

    ~Leopard() {}
}; 

class Deer : public Animals
{
public:
    Deer() { }
    Deer(string deer) : Animals(deer) {}

    void Sound() 
    {
        cout<< "Sound for " << name << " is \"Bleat\"  :P\n" ;
    }

    ~Deer() {}
    
};







/*
    ================= Problem: 3 =================
    Question #03
    Write a program which can detect the sounds of Animals. Write a class Animals having the following
    attributes:
    1. String Name
    2. Sound()
    Inherit the following classes from Animals having the same attributes and behavior of base class
    (polymorphism).
    1. Cat
    2. Dog
    3. Tiger_Family
    4. Deer
    From Tiger_family class inherit the following sub classes publically:
    1. Tiger
    2. Lion
    3. Leopard
    Task:
    1. From main(), display sound of animals on the console using Pointer of base class to derived
    classes.
    2. From main () also find the type of error and comment the error if a Derived class pointer is
    assigned a Base class address or pointer.
*/

int main()
{
    Animals* a;
    TigerFamily* tf;

    Cat cat("Cat");
    Dog dog("Dog");
    Tiger tiger("Tiger");
    Lion lion("Lion");
    Leopard leopard("Leopard");
    Deer deer("Deer");

    a = &cat;
    a->Sound();

    a = &dog;
    a->Sound();

    tf = &tiger;
    tf->Sound();

    tf = &lion;
    tf->Sound();

    tf = &leopard;
    tf->Sound();
    
    a = &deer;
    a->Sound();


    return 0;
}