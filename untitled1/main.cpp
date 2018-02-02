#include <iostream>
using std::cout;
using std::cin;
using std::endl;

/* FIZZBUZZ
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
}*/

/* Reverse a string or sentence
int main(){
    std::string string = "canada likes dogs";
    std::string temp   = "";

    for(int i=0;i<=string.length();i++){
        temp.append(string,(string.length()-i),1);
    }

    std::cout<<temp;
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
 *

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
#include <string>
using std::string;

int main(){
    string string1 = "a=1, b=7, c=3, d=14";
    //oh boy



}
*/

/*
 * Fn = Fn−1 + Fn−2, where F1 = 1 and F2 = 1. to 1000 digits
 */

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

