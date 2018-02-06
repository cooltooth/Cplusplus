/* THE AXE
 * *      *
 * ** ** **
 * ********
 * ** ** **
 * *  **  *
 *    **
 *    **
 *    **
 *    **
 * Also, screw you even numbers
 */

#include <iostream>
using std::streamsize;
#include <limits>
using std::cout;
using std::cin;
using std::endl;

int main() {

    int bladeHeight;

    for (;;)
    {
        cout << "Please enter blade height: ";
        cin >> bladeHeight;

        if(bladeHeight>0) {
            break;
        }else{
            cout << "Please enter a valid positive integer" << endl;
            cin.clear();
            cin.ignore(std::numeric_limits<streamsize>::max(), '\n');
        }
    }

    bool mid            = false;                    // Tracker for mid point of blade.
    bool handleTrigger  = false;                    // Trigger for handle...
    int  handleCounter  = 0;                        // Tracker for handle length.

    for(int r=0; r >= 0 || handleCounter < 10; mid ? r-- : r++)
    {
        bool halfPoint = false;

        if(r >= (bladeHeight / 2) + 1)
            mid = true;

        for(int c=0; c>=0; halfPoint ? --c : c++)
        {
            cout << (c < r ? '*' : ' ');

            if(c == bladeHeight / 2 && !halfPoint)
            {
                halfPoint       = true;
                handleTrigger   = true;
                c++;
            }

            if (handleTrigger)
            {
                // Handle check, row is Bladeheight/2(int rounding) and handle hasn't started/ended yet
                if (r == bladeHeight / 2 || handleCounter >= 1 && handleCounter < 10) {
                    cout << "**";
                    handleCounter++;
                } else {
                    cout << "  ";
                }
                handleTrigger = false;
            }
        }
        cout<<endl;                                         // Next row
    }
    return 0;
}

/*  Alternative triple-loop version
 *
 * for(int r=1;r>0 || handleEnd<10;(mid)?r--:r++){
        // Flip blade building direction when mid point is reached
        if(r>=(bladeHeight/2)+1){
            mid = true;
        }

        //left side of the blade
        for(int c1=1;c1<=(bladeHeight/2)+1;c1++){
            if(c1<=r) {
                cout << '*';
            }else{
                cout << ' ';
            }
        }

        // Handle check, row is Bladeheight/2(int rounding) and handle hasn't started/ended yet
        if(r==(bladeHeight/2)&&!(handleEnd>1&&handleEnd<10)){
            cout<<"**";
            handleEnd++;
        }else if(handleEnd>=1&&handleEnd<10){
            cout<<"**";
            handleEnd++;
        }else{
            cout<<"  ";
        }

        // Right side of the blade
        for(int c3=(bladeHeight/2)+1;c3>0;c3--){
            if(c3>r) {
                cout << ' ';
            }else{
                cout << '*';
            }
        }
                cout<<endl;                                         // Next row
    }

*/



/* FIZZBUZZ
 * for(int i=1; i<=100; i%3 && i%5?std::cout<<i<<'\n':i%3?std::cout<<"buzz\n":i%5?std::cout<<"fizz\n":std::cout<<"fizzbuzz\n",i++);
 */
 /*
int main(){

    for(int i=1; i<=100;i++){
        int n = 0;
        if(i%3==0) {
            std::cout << "fizz";
            n=1;
        }
        if(i%5==0) {
            std::cout << "buzz";
            n=1;
        }
        if(n==0)
            std::cout<<i;

        std::cout<<std::endl;
    }

    char x;
    std::cin>>x;
    return 0;
}
 */



/* Reverse a string or sentence
int main(){
    std::string string = "canada likes dogs";
    std::string reverseString   = "";

    for(int i=0;i<=string.length();i++){
        reverseString.append(string,(string.length()-i),1);
    }

    std::cout<<reverseString;
    return 0;
}
*/

/*
 * Find the minimum value in a List
 *//*
#include <array>

int main(){

    int arr[]       = {9,3,1,5,7,3,6};
    int min;
    min = arr[0];
    for(auto x : arr){
        if(x<=min){
            min = x;
        }
    }
    std::cout<<"Minimum value in array is: "<<min;
}*/

/*
 * Calculate a remainder (given a numerator and denominator)
 *

int main (){

    int num;
    cin>>num;
    cin.ignore();
    int den;
    cin>>den;
    cin.ignore();
    if(den!=0) {
        int rem = (num % den);
        std::cout << "Remainder: " << rem;
    }
    else
        std::cout<< "Cannot divide by 0.";
    return 0;
} */

/*
 * Return distinct values from a list including duplicates (i.e. "1 3 5 3 7 3 1 1 5" -> "1 3 5 7")
 *
#include <vector>
using std::vector;
#include <algorithm>
using std::find;

int main(){
    vector<int>             arr  = {1, 3, 5, 3, 7, 3, 1, 1, 5};
    vector<int>             temp = {};
    vector<int>::iterator   it;

    for(int x : arr){
        it = find(temp.begin(),temp.end(),x);
        if (it == temp.end()){
            temp.push_back(x);
        }
    }

    for(int x : temp){
        cout<<x;
    }

}

*/
/*
 * Return distinct values and their counts (i.e. the list above becomes "1(3) 3(3) 5(2) 7(1)")
 *//*

#include <vector>
using std::vector;
#include <algorithm>
using std::find;
#include <array>
using std::array;

int main() {
    vector<int> vector1 = {1, 3, 5, 3, 7, 3, 1, 1, 5};
    vector<int> vector2;
    vector<array<int,2>> vectorArray;
    vector<int>::iterator it;

    for(int x : vector1){
        it = find(vector2.begin(),vector2.end(),x);
        if (it == vector2.end()){
            vector2.push_back(x);
        }
    }

    for(int x : vector2){
        int count =0;
        for(int y : vector1){
            if(x==y)
                count++;
        }

        vectorArray.push_back({x,count});
    }

    for(auto x : vectorArray){
        cout<<x[0]<<"("<<x[1]<<") ";
    }
}
*/

/*
 * Given a string of expressions (only variables, +, and -) and a set of variable/value pairs (i.e. a=1, b=7, c=3, d=14) return the result of the expression ("a + b+c -d" would be -3).
 *
#include <vector>
using std::vector;
#include <sstream>
using std::istringstream;
using std::getline;
#include <algorithm>
using std::string;

int main() {
    // Virtual CIN because I'm lazy
    istringstream stringFull;
    stringFull.str("a=1, b=7, c=3, d=14");

    // Vector of strings because I'm lazy and don't want to worry about deleting the array or leave dangling pointers
    vector<string> stringVector;

    // Need temporary string in order to check if a push back is needed
    string temp;

    // Put all values into a string vector split by comma
    while (getline(stringFull, temp, ','))
        stringVector.push_back(temp);


    // Clean the strings of non-numeric values.
    for(int i = 0; i<stringVector.size();i++){
        if (stringVector[i] != "") {
            stringVector[i].erase(remove_if(stringVector[i].begin(), stringVector[i].end(), ::isspace),
                                  stringVector[i].end());
            stringVector[i].erase(remove_if(stringVector[i].begin(), stringVector[i].end(), ::ispunct),
                                  stringVector[i].end());
            stringVector[i].erase(remove_if(stringVector[i].begin(), stringVector[i].end(), ::isalpha),
                                  stringVector[i].end());
        }
    }

    // hahaha stoi = StringTOInteger... Why have I never seen this before? (is ATOI AutoTOInt?)
    cout << "\na + b + c - d = " << stoi(stringVector[0])+stoi(stringVector[1])+stoi(stringVector[2])-stoi(stringVector[3]);


//  Below did not work because I believe the new str is a "Copy" of the string not a pointer to it
//  for (string str : stringVector) {
//      str.erase(remove_if(str.begin(), str.end(), ::isspace), str.end());
//      str.erase(remove_if(str.begin(), str.end(), ::ispunct), str.end());
//      str.erase(remove_if(str.begin(), str.end(), ::isalpha), str.end());
//  cout<<str<<":";
//  }
//
}
*/
/*
 * Fn = Fn−1 + Fn−2, where F1 = 1 and F2 = 1. to 1000 digits
 *//*

int main(){

    long double fn1 = 1;
    long double fn2 = 0;
    long double x = 10E1000;
    int it = 0;
    while(fn1<x){
        std::cout<<"F"<<++it<<"="<<fn1<<'\n';
        fn1 = fn1+fn2;
        fn2 = fn1;
    }
    std::cout<<"F"<<++it<<"="<<fn1<<'\n';
    fn1 = fn1+fn2;
    fn2 = fn1;
}

*/


