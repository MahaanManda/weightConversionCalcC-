    /* Write a program that prompts the user to enter the weight of a person in kilograms and outputs the equivalent weight in pounds. Output both the weights rounded to two decimal 
    places. Format your output with two decimal places. */
    
    //preprocessor
#include <iostream>
#include <string>
#include <iomanip>
    //header
using namespace std;



    //main algo
int main() {
        //variables
    double userWeight = 0;
        //prompt the user to enter the weight of a person in kilograms
    cout << "Please enter your weight in kilograms" << endl;
    cin >> userWeight;

        //outputs the equivalent weight in pounds
        //Output both the weights rounded to two decimal places
    cout << fixed << setprecision(2);
    cout << "Weight:" << endl
            <<"In Pounds: " << userWeight * 2.2 << endl
            << "Original Weight in Kilograms: " << userWeight << endl;

    

    system("pause"); // pause the console before exiting
    
        //return statement (program end)
    return 0;
}