ASSIGNMENT 24 :



1. Define a function to check whether a given number is a Prime number or not.


#include<iostream>
using namespace std;
void prime(int a);
int main()
{
    int n;
    cout<<"enter a number";
    cin>>n;
    prime(n);
}
void prime(int a)
{
    int i;
    for(i=2;i<a;i++)
        if(a%i==0)
        {
                break;
        }
        if(i==a)
        cout<<"number is prime";
       else
            cout<<"number is not prime";


}

2. Define a function to find the highest value digit in a given number.






3. Define a function to calculate x raised to the power y.



4. Define a function to print Pascal Triangle up to N lines.




5. Define a function to check whether a given number is a term in a Fibonacci series or
    not.


6. Define a function to swap data of two int variables using call by reference.




7. Write a function using the default argument that is able to add 2 or 3 numbers.





8. Define overloaded functions to calculate area of circle, area of rectangle and area of
    triangle.

#include<iostream>
using namespace std;
float area(int radius);
float area(int  length,int breadth);
float area(float base ,float height);
int main()
{
    int l,b;
    float r,ba,he;
    cout<<"Enter the details for find area of Circle\n ";
    cout<<"\nEnter the raduis of circle = ";
    cin>>r;

    cout<<"\nEnter the details for finding area of  Rectangle\n";
    cout<<"\nEnter the length of rectangle = ";
    cin>>l;
    cout<<"\nEnter the breadth of rectangle =";
    cin>>b;

    cout<<"\nEnter the details for finding the area of Triangle\n";
    cout<<"\nEnter the base of Triangle = ";
    cin>>ba;
    cout<<"\nEnter the height of Triangle = ";
    cin>>he;

    cout<<"\n=>The Area of circle is = "<<area(r);
    cout<<"\n=>The Area of Rectangle is ="<<area(l,b);
    cout<<"\n=>The Area of Triangle = "<<area(ba,he);



}
float area(int radius)
{
    return (3.14*radius*radius);
}
float area(int  length,int breadth)
{
    return (length*breadth);
}
float area(float base ,float height)
{
    return (0.5*base*height);

}




9. Write functions using function overloading to find a maximum of two numbers and
   both the numbers can be integer or real.


10. Write functions using function overloading to add two numbers having different data
     types.
