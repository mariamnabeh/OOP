#include <iostream>
using namespace std;

/*

  Welcome to MY ULTIMATE OOP SUMMARY :)
Get ready... it's going to be a fun ride!


• Abstraction: A definition that captures general characteristics without details.
  For example, an abstract "triangle" is just a 3-sided polygon. A specific triangle 
  can be scalene, isosceles, or equilateral. Abstraction filters the noise so you 
  can focus on the general concept.

• Abstract Data Type (ADT): A programmer-created data type that applies abstraction 
  to code. It explicitly specifies:
    1. The legal values that can be stored.
    2. The operations that can be performed on those values.
  Crucial Rule: The user of an ADT does not need to know any implementation details 
  (e.g., you use the pow(x, y) function knowing its inputs and outputs, without 
  needing to see its underlying mathematical source code)

Wait , wait . What's acutally Abstraction ? and what's the Abstract date type?
  Like we just said! Abstraction is filtering out the extra details to see the big 
  picture, and an ADT is the custom data type we invent using that exact logic!

Okay ,How do we actually build an Abstract Data Type in C++? We use Classes and Objects!

Let's crack OOP and Classes...

• Class: An Abstract Data Type (ADT) created by the programmer. It is just a 
  blueprint or a pattern that defines properties (attributes) and allowed behaviors 
  (methods). It does not occupy space in RAM.
• Object: A real variable! It is an actual instance built from the class blueprint, 
  and it takes real space in memory.

→ Once you define a Class blueprint, how do you protect its internal data from 
  unwanted outside corruption? You use Data Hiding and Access Gatekeepers!

• Data Hiding (The Security Guard):
  - private: Attributes or functions hidden away inside the class. No one from the 
    outside can touch or corrupt them directly. (And hey, it's the default in C++!). 

  - public: The official interface or the open doors. Anyone can access these from 
    outside the class using the dot (.) operator. :)

• The Diplomatic Way (Getters & Setters):
  If our crucial data is safely locked in "private", how does the outside world 
  safely read or write to it? We use middleman functions:
  - Setters (Mutators): Public functions that validate and safely modify private attributes.
  - Getters (Accessors): Public functions that safely retrieve private values.


→ Now that we know how to secure a class, how are these values automatically set up the exact millisecond an object is born? 
We look into the Object Lifecycle!

• Constructors:
  - Called automatically when an object is created.
  - Same name as the class and no return type.
  - Can be overloaded (different parameters).
  - No arguments? Default Constructor runs.

• Destructors:
  - Called automatically when an object is destroyed.
  - Formatted as ~ClassName(), no arguments, no overloading.


→ Once our object is ready in memory, how do we pass it around or use it to build bigger things? 

• Object Interactions:
  - Pass by Value: Slow. Copies the whole object. :(
  - Pass by Const Reference (const ClassName &obj): Fast and safe. No copies, no modifications. :) 
    (Note: Getter methods must be marked "const" to be used here).
  - Object Composition: Using an object inside another class (e.g., Carpet containing a Rectangle).


→ Finally, how do we organize our classes cleanly instead of packing everything in one giant file?

• Separate Files:
  - classname.h (Header): Class declaration. Uses Include Guards (#ifndef, #define, #endif) to avoid duplicate includes.
  - classname.cpp (Implementation): Member function definitions using (::).
  - main.cpp (Client): Includes the header file and runs the program.
*/
  

  
// --- COMPREHENSIVE CODE IMPLEMENTATION ---

// Lecture Example 1: The Square Class (Basics & Constructors)
class Square {
private:
    int side; // Hidden attribute

public:
    // Default Constructor
    Square() { 
        side = 1; 
    }

    // Overloaded Constructor
    Square(int s) { 
        side = s; 
    }

    // Mutator (Setter) with validation
    void setSide(int s) { 
        if (s > 0) side = s; 
    }

    // Accessor (Getter) - marked const
    int getSide() const { 
        return side; 
    }

    // Destructor
    ~Square() {
        // Automatically manages cleanup
    }
};


// Lecture Example 2: The Rectangle Class
class Rectangle {
private:
    double width;
    double length;

public:
    Rectangle(double w, double l) {
        width = w;
        length = l;
    }

    void setWidth(double w) { width = w; }
    void setLength(double l) { length = l; }

    double getWidth() const { return width; }
    double getLength() const { return length; }
    
    double getArea() const { 
        return width * length; 
    }
};


// Lecture Example 3: Object Composition (Rectangle inside Carpet)
class Carpet {
private:
    Rectangle size; // Composition: Object inside an object
    double pricePerSqFt;

public:
    Carpet(double w, double l, double price) : size(w, l) {
        pricePerSqFt = price;
    }

    double getTotalCost() const {
        return size.getArea() * pricePerSqFt;
    }
};


int main() {
    return 0;
}