#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
using namespace std;
//function to display all numbers in sequential container v
void displayNumbersInVector( const vector<int>& v )
{
    //hint: you can use vector v as if it is an array,
    // but you will need to know how to get the size of v first
    //.... fill this up (not more than 5 lines) .....
    int vSize =  v.size();
    for(int i = 0; i< vSize; i++)
    {
        cout << v[i] << "\t";
    }
}
void test1()
{
    cout << "test function 1" << endl;
    vector<int> num; //declared num to be a sequential container of integerd
    num.push_back(1); //add 1 into the container
    num.push_back(4); //add 4 into the container
    num.push_back(3); //add 3 into the container
    cout << "size = " << num.size() << endl; //display container's size so far
    cout << "number in container are : ";
    displayNumbersInVector(num);
}


void checkPositions(const string& secret,char guess,vector<int>& positions)
{
    positions.clear(); //clear the container named positions
    int len = secret.length(); //get number of characters in string
    //hint: search through the string named secret one character by character,
    // when you find the character in string secret is
    // the same as character named guess, then take note the position
    // number of that character in the string secret, push that position
    // number into the container named positions.
    // Refer to test1() function above for more hints.
    //.... fill this up (not more than 5 lines) .....
    for(int i = 0; i<len; i++)
    {
        if(secret[i] == guess)
            positions.push_back(i);
    }
}

void test2()
{
    cout << "test function 2" << endl;
    string secret;
    secret = "programming";
    char guess = 'g';

    vector<int> positions; //declared positions to be a container of integers
    checkPositions(secret, guess, positions);

    cout << "character \'" << guess << "\' appears in string \""
    << secret << "\" at position : ";
    //After calling function checkPositions(...) above,
    // function displayNumbersInVector below should display: 3 10
    // because char 'g' appears in position 3 and 10 of string secret
    displayNumbersInVector( positions );
}


int main()
{
    //test1();
    test2();
}

