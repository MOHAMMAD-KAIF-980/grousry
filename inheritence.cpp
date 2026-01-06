#include <iostream>
using namespace std;

class Person
{
   // public:

   string name;

public:
   int age;

   void setPerson(string n, int a)
   {
      name = n;
      age = a;
      

   }
   void displayPerson()
   {
      cout << "Name: " << name << endl;
      cout << "Age: " << age << endl;
   }
};
int main()
{
   Person p1;
   p1.setPerson("kaif", 20);
   p1.displayPerson();
   cout<<"Accensing publice member age directly: "<<p1.age<<endl;

   return 0;
}
