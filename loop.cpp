#include <iostream>
using namespace std;

// 1. Structure
// 2. scope of control variable
// 3. loop with more than one variable 
//    for(x=0,y=1;x<y;y++,x++)......
// 

int main()
{
    //do while
    int x;
    x = 1;
    do{
        cout << x << ":";
        x++;
    } while (x < 10);
    cout << endl;

//while do
    x = 1;
    while (x < 10)
    {
        cout << x << ":";
        x++;
    }
    cout << endl;

//while do
    x = 1;
    while (true)
    {
        if (x >= 10) break;
        cout << x << ":";
        x++;
    }
    cout << endl;

// for loop
    for (x=1;x<10;x++)
        cout << x << ":";

// for loop
    x=1;
    for ( ; x<10 ; )    
    {
        cout << x << ":";
        x++;
    }

// for loop
    x=1;
    for ( ; ; )    
    {
        if (x>=10) break;     // braks the loop to the 
                             // first statement after the loop
        cout << x << ":";
        x++;
    }
    cout << "after loop" << endl;

// for loop

    for (int y=0;y<5;y++)   // y is defined inside the loop only
    {
        cout << y << endl;
    }

//  cout << y << endl;   // error: y is not declared in this scope

    int a,b;
    for (a=0,b=10; a<5; a++,b--)
    {
        cout << a << ":" << b << endl;
    }
    
    return 0;
}
