#include <iostream>
#include <vector>
#include <string>

using namespace std;

/*
---------------------------------------
PART 1 — Variables and Arithmetic
---------------------------------------
*/

int addNumbers(int a, int b)
{
        return a + b;
}



/*
---------------------------------------
PART 2 — Loops
---------------------------------------
*/

int sumUpToN(int n)
{
    int sum=0;
    for (int i=1; i<=n; i++){
        sum+=i;
    }
    return sum;
}



/*
---------------------------------------
PART 3 — Vectors
---------------------------------------
*/

int findMaximum( const vector<int>& numbers)
{
  int maxVal= numbers[0];
      for(int i=1; i< numbers.size(); i++) {
      if(numbers [i]>maxVal) maxVal = numbers[i];
      }
      return maxVal;
}



/*
---------------------------------------
PART 4 — Strings
---------------------------------------
*/

string reverseString(string text)
{
    string rev= "";
    for (int i= text.length() -1; i>=0; i--){
    rev += text[i];
    }
return rev;
}



/*
---------------------------------------
PART 5 — Simple Class
---------------------------------------
*/

class Student
{
private:
    string name;
    int grade;

public:
    Student(string n, int g){
    name =n;
     grade=g;
    }
void printInfo(){
    cout<< "Name: "<<name<< endl;
    cout<< "Grade: "<<grade<<endl;
        }
};



/*
---------------------------------------
MAIN FUNCTION
---------------------------------------
*/

int main()
{
    cout << "C++ Review Lab\n";

    /*
    PART 1 TEST
    */

    cout << "Sum of 4 + 5 = "
         << addNumbers(4,5)
         << endl;

    /*
    PART 2 TEST
    */

    cout << "Sum up to 10 = "
         << sumUpToN(10)
         << endl;


    /*
    PART 3 TEST
    */

    vector<int> numbers = {3,7,2,9,5};

    cout << "Maximum value = "
         << findMaximum(numbers)
         << endl;


    /*
    PART 4 TEST
    */

    cout << "Reverse of hello = "
         << reverseString("hello")
         << endl;


    /*
    PART 5 TEST
    */

    Student s("Alice", 90);

    s.printInfo();


    return 0;

}
