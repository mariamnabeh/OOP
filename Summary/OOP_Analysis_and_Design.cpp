using namespace std;
#include<iostream>

// Heyooo! Welcome again to this exciting journey!

/*

The last thing we talked about was what classes, objects, and the Abstraction concept are.

Today we will talk about OOP analysis and design!
YOU MUST LEARN HOW to use OOP to design your system, how to break down your system into classes, and what a class usually contains. 
How can I save more data, and wait, I heard about a thing called "Friend of class," what is it?
Yes bro, classes have friends and you are still alone :(

Don't be sad, we are friends in this journey, let's goooo. Enjoy!!!


Today's agenda:
1: Introduction to Object-Oriented Analysis and Design
2:The this Pointer and Constant Member Functions
3: Static Members
4: Friends of Classes
5:Memberwise Assignment
6:Copy Constructors

*//*
Object-Oriented Analysis (OOA) has many sections.
 It is all about breaking down the system and understanding all the components used in it.
A class can have multiple objects, and each object contains attributes and data. 
In addition, every class has different behaviors and relationships with other classes.

let's talk about everything.


1:dentify Objects and Classes
To create objects and classes, we should consider the major data elements in the system 
and the operations performed on these elements. This helps us identify the classes and create objects from them.
For example, in a bank system:

Account and Customer are major data elements.
deposit() and withdraw() are operations performed on them.

So, we can create classes such as Account and Customer, then create objects from these classes.

2:Define Class Attributes:

Attributes are the data stored inside an object. They describe the object and help it perform its role in the program.

For example, in a bank system:

In the Account class, the attributes can be:

accountNumber
balance
accountType

These attributes store the data of the account and are necessary for the object to function properly in the system.





3:Define Class Behaviors&&Relationships Between Classes:
Class Behaviors describe what an object of a class can do. These actions are implemented as methods (member functions).

For example, in a bank system, an Account class can have behaviors such as:

deposit()
withdraw()
checkBalance()

These behaviors define how the account object operates in the system.

Relationships Between Classes describe how classes are connected:

Uses-a: One class uses another to perform a task.
Example: ATM uses Account to perform transactions.
Has-a (Composition): One class contains another class.
Example: Bank has Accounts.
Is-a (Inheritance): One class is a type of another class.
Example: SavingsAccount is an Account.


Finding the Classes (Technique)
o identify classes in a system, we follow these steps:

First, we write a clear description of the problem domain, including all objects, events, and anything related to the problem.

Next, we extract all nouns, noun phrases, and pronouns from the description. 
These are considered candidate objects because they often represent possible classes.

Finally, we refine this list by removing irrelevant items and keeping only the objects 
that are actually important and related to the problem.


Determine Class Responsibilities
Class responsibilities:
• What is the class responsible to know?
• What is the class responsible to do?
Use these to define some of the member functions

*/

/*
2: Noww, let's start talk about The "this" Pointer and Constant Member Functions, Static Members and Friends of Classes!
First, the this pointer is an implicit pointer that points to the object that is currently calling the member function.
 It is mainly used when there is a conflict between a class attribute and a function parameter with the same name. 
 In this case, we use this-> to clearly refer to the object’s data.
*/
class A {
private:
    int num;
public:
    void setNum(int num) {
        this->num = num;
    }
};

/*

Second, constant member functions are functions that are used when we want to protect the object from being modified.
 When a function is declared with const, it guarantees that the function will not change the data of the object.
  Also, if a parameter is declared as const, it means it cannot be modified inside the function.

*/
class A {
private:
    int x;
public:
    int getX() const {
        return x;
    }
};

/*
Finally, static members are used when we need shared data between all objects of a class.
 A static variable belongs to the class itself, not to a specific object, so all objects share the same value.
  Static member functions are used to access or manage static variables, and they can be called using the class name without creating an object.

*/
//3. Static Members
class A {
public:
    static int count;
};

int A::count = 0;

//Static function:

class A{
 static int getCount() {
        return count;
    }
private:
    static int count;


};


/*
In summary, these features help solve different design problems:
 this resolves naming conflicts, const protects data from modification, 
 and static allows sharing data between all objects of the class

*/
/*
3: So i till U before classes have friends , so what's this werid relation ^^ ,olso what's Copy Constructors and why
I need to do this O_o

We all have that person is not part of our famliy biogcslly but actully has acesses to every thing like a part of 
our familly, exaclly frind class.
he is not part of the class but has acsess to privit date!

class A {
private:
    int x;

    friend void show(A obj);
};

void show(A obj) {
    cout << obj.x;
}// we acsses it with "friend " keyword



We also learned about copy constructors.
 A copy constructor is used when we create a new object from an existing one of the same class.

We need it because normal copying can cause problems when pointers and dynamic memory are involved. 
It may lead to sharing the same memory and cause errors.

So, the copy constructor solves this by making a deep copy, meaning each object gets its own separate memory.

class A {
    int *p;

public:
    A(int v) {
        p = new int;
        *p = v;
    }

    A(const A &obj) {
        p = new int;
        *p = *obj.p;
    }
};

*/


/*


4:Memberwise Assignment
Each attribute in the first object is copied into the matching attribute in the second object.



class A {
public:
    int x;
    int y;
};

int main() {
    A obj1;
    obj1.x = 5;
    obj1.y = 10;

    A obj2;
    obj2 = obj1;  // memberwise assignment
}




*/










int main(){


}