Assignment - 25                                   [ Classes and Objects ]


1. Define a class Complex to represent a complex number. Declare instance member
   variables to store real and imaginary part of a complex number, also define instance
   member functions to set values of complex number and print values of complex
   number

#include<iostream>
using namespace std;
class Complex
{
   private:
       int real;
       int imag;
   public:
    void set_data(int r,int i)
    {
        real=r;
        imag=i;
    }
    void show()
    {
        cout<<"The Complex number is"<<real<<"+"<<imag<<endl;
    }

};
int main()
{
    Complex c1,c2;
    c1.set_data(2,6);
    c1.show();
}

2. Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate
    number of instance member variables and also define instance member functions to
    set values for time and display values of time.

#include<iostream>
using namespace std;
class Time
{
private:
    int hr;
    int m;
    int sec;
public:
    void access(int x,int y,int z)
    {
        hr=x;
        m=y;
        sec=z;
    }
    void display()
    {
        cout<<"The Time is " <<hr<<"hr "<<m<<"min "<<sec<<"sec"<<endl;
    }
};
int main()
{
    Time t1;
    t1.access(2,36,15);
    t1.display();
}


3. Define a class Factorial and define an instance member function to find the Factorial
    of a number using class.


#include<iostream>
using namespace std;
void prime(int a);
class Factorial
{
  private:
      int n;
      int fact;
  public:
    void set_n(int a)
    {
        n=a;
    }
    int get_n()
    {
        return n;
    }
    calculate_fact()
    {
      int   fact=1,i;
        for(i=1;i<=n;i++)
        {
            fact=fact*i;
        }
        return fact;
    }
    get_fact()
    {
        return fact;
    }

};
int main()
{
    Factorial f1,f2;
    f1.set_n(4);
    f1.calculate_fact();
    cout<<"The factorial of "<<f1.get_n()<<"is "<<f1.calculate_fact()<<endl;
    f2.set_n(5);
    f2.calculate_fact();
    cout<<"The factorial of "<<f2.get_n()<<"is "<<f2.calculate_fact()<<endl;
}

      

4. Define a class LargestNumber and define an instance member function to find the
    Largest of three Numbers using the class.

#include<iostream>
using namespace std;
class Largest_Number
{
   private:
       int  a,b,c,largest;
   public:
    void setter(int x,int y,int z)
    {
        a=x;
        b=y;
        c=z;
    }
    void show()
    {
        cout<<"the value of three variable is "<<a<<" "<<b<<" "<<c<<" "<<endl;
    }
    void lar()
    {
        if(a>b&&a>c)
            cout<<a<<" "<<"is largest"<<endl;
        if(b>a&&b>c)
            cout<<b<<" "<<"is largest"<<endl;
        else
            cout<<c<<" "<<"is largest"<<endl;
    }

};
int main()
{
    Largest_Number l1,l2;
    l1.setter(3,5,6);
    l1.show();
    l1.lar();
    l2.setter(9,37,6);
    l2.show();
    l2.lar();
}
    

5. Define a class ReverseNumber and define an instance member function to find
    Reverse of a Number using class.







6. Define a class Square to find the square of a number and write a C++ program to
    Count number of times a function is called.








7. Define a class Greatest and define instance member function to find Largest among
    3 numbers using classes.






8. Define a class Rectangle and define an instance member function to find the area of
    the rectangle.






9. Define a class Circle and define an instance member function to find the area of the
    circle.







10. Define a class Area and define instance member functions to find the area of the
     different shapes like square, rectangle , circle etc.




