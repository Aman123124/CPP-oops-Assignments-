ASSIGNMENT : 23


1. Write a C++ program to print Hello MySirG on the screen.

#include<iostream>
using namespace std;
int main()
{
    cout<<"Hello MySirG";
}


2. Write a C++ program to print Hello on the first line and MySirG on the second line
    using endl.
   
#include<iostream>
using namespace std;
int main()
{
    cout<<"Hello"<<endl<<"MySirG";
}


3. Write a C++ program to calculate the sum of two numbers.
    
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter 1st number = ";
    cin>>a;
    cout<<"enter 2nd number = ";
    cin>>b;
    c=a+b;
    cout<<"sum of "<<a<<" and "<<b<<" is "<<c;
    getch();
}

4. Write a C++ program to calculate the area of a circle.

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int r;
    float a;
    cout<<"enter the radius of circle = ";
    cin>>r;
    a=3.14*r*r;
    cout<<"\n=>Area of circle is = "<<a;
    getch();
}


5. Write a C++ program to calculate the volume of a cuboid.

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int l,b,h;
    float a;
    cout<<"enter the length of cuboid = ";
    cin>>l;
    cout<<"enter the breadth of cuboid = ";
    cin>>b;
    cout<<"enter the height of cuboid = ";
    cin>>h;
    a=l*b*h;
    cout<<"\n=>The volume of cuboid is = "<<a;

    getch();
}


6. Write a C++ program to calculate an average of 3 numbers.


#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b,c;
    float avg;
    cout<<"enter the 1st number = ";
    cin>>a;
    cout<<"enter the 2nd number = ";
    cin>>b;
    cout<<"enter the 3rd number = ";
    cin>>c;
    avg=(a+b+c)/3;
    cout<<"\n=>The Average of three number is = "<<a;

    getch();
}


7. Write a C++ program to calculate the square of a number.

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
   int a,s;
   cout<<"Enter a number =  ";
   cin>>a;
   s=a*a;
   cout<<"\n=>The square of number is ="<<s;

    getch();
}


8. Write a C++ program to swap values of two int variables without using third variable.

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the 1st number = ";
    cin>>a;
    cout<<"\nEnter the 2nd number = ";
    cin>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"\nValues after swapping\n\n";
    cout<<"The 1st number is ="<<a<<"\n";
    cout<<"The 2nd number is ="<<b;
    getch();
}


9. Write a C++ program to find the maximum of two numbers.

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
   int a,b;
   cout<<"Enter 1st number = ";
   cin>>a;
   cout<<"Enter 2nd number = ";
   cin>>b;
   if(a>b)
   {
       cout<<"\n"<<a<<" is maximum";
   }
   else
    {
        cout<<"\n"<<b<<" is maximum";
    }

    getch();
}


10. Write a C++ program to add all the numbers of an array of size 10.

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
   int a[10];
   int i,sum=0;
   for(i=0;i<10;i++)
   {
       cin>>a[i];
   }
   for(i=0;i<10;i++)
   {
       sum=sum+a[i];
   }
   cout<<"The sum of all 10 element of array is = " <<sum;
    getch();
}





