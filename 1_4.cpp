
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


void fillWordInPositions( const vector<int>& positions,char charToFill,string& word )
{
    //hint: given the positions numbers stored in container positions,
    // go to each of the positions at the string word and replace
    // the character of the word at that position to the character
    // as given by character charToFill, take note that you can treat
    // the container positions just like an array but again you need
    // to know how to get the size of the container
    //.... fill this up (not more than 5 lines) .....
    int pSize =  positions.size();
    for(int i = 0; i<pSize; i++)
    {
        word[positions[i]] = charToFill;
    }
}

void test3()
{
    cout << "test function 3" << endl;
    vector<int> positions;
    positions.push_back(3);
    positions.push_back(10);
    string word;
    word = "pro_ra___n_";
    char charToFill = 'g';

    cout << "Original word is : \"" << word << "\"," << endl;
    cout << "after filling char \'" << charToFill << "\' at position ";
    displayNumbersInVector( positions );

    fillWordInPositions( positions, charToFill, word );
    cout << "word becomes \"" << word << "\"." << endl;
    //After calling function fillWordInPositions(...) above,
    // the word will be filled at position 3 and 10 with char 'g'
    // and thus the word should become : progra___ng
}


void displayHangman(int stage)
{
    switch(stage)
    {
        case 7: cout << " +----+ " << endl;
            cout << " |  | " << endl;
            cout << " |  O " << endl;
            cout << " | /|\\ " << endl;
            cout << " |  | " << endl;
            cout << " | / \\ " << endl;
            cout << " | R.I.P. " << endl;
            cout << " ========== " << endl;
            break;
        case 6: cout << " +----+ " << endl;
            cout << " |  | " << endl;
            cout << " |  O " << endl;
            cout << " | /|\\ " << endl;
            cout << " |  | " << endl;
            cout << " | / " << endl;
            cout << " | " << endl;
            cout << " ========== " << endl;
            break;
        case 5: //...complete this....
            cout << " +----+ " << endl;
            cout << " |  | " << endl;
            cout << " |  O " << endl;
            cout << " | /|\\ " << endl;
            cout << " |  | " << endl;
            cout << " |  " << endl;
            cout << " | " << endl;
            cout << " ========== " << endl;
            break;
        case 4: //...complete this....
            cout << " +----+ " << endl;
            cout << " |  | " << endl;
            cout << " |  O " << endl;
            cout << " | /|\\ " << endl;
            cout << " | " << endl;
            cout << " | " << endl;
            cout << " | " << endl;
            cout << " ========== " << endl;
            break;
        case 3: //...complete this....
            cout << " +----+ " << endl;
            cout << " |  | " << endl;
            cout << " |  O " << endl;
            cout << " | /| " << endl;
            cout << " | " << endl;
            cout << " | " << endl;
            cout << " | " << endl;
            cout << " ========== " << endl;
            break;
        case 2: //...complete this....
            cout << " +----+ " << endl;
            cout << " |  | " << endl;
            cout << " |  O " << endl;
            cout << " | / " << endl;
            cout << " | " << endl;
            cout << " | " << endl;
            cout << " | " << endl;
            cout << " ========== " << endl;
            break;
        case 1: //...complete this....
            cout << " +----+ " << endl;
            cout << " |  | " << endl;
            cout << " |  O " << endl;
            cout << " | " << endl;
            cout << " | " << endl;
            cout << " | " << endl;
            cout << " | " << endl;
            cout << " ========== " << endl;
            break;
        case 0: cout << " +----+ " << endl;
        cout << " |  | " << endl;
        cout << " | " << endl;
        cout << " | " << endl;
        cout << " | " << endl;
        cout << " | " << endl;
        cout << " | " << endl;
        cout << " ========== " << endl;
        break;
    } //switch
}



int main()
{
    //test1();
    //test2();
    //test3();
    for(int i = 0; i<=7; i++)
    {
        cout << "------------Stage "<< i <<"----------------" << endl << endl;
        displayHangman(i);
        cout << endl;
    }
}


