//
//  Assignment1.cpp
//  Assignment1
// Part 1 No. 1: There are several steps to the problem solving process: (1) design, (2) creation, (3) testing, and (4) debugging.
//  (1) To create a computer program one must understand what the program is supposed to accomplish. This entails understanding the program's aims before actually writing any code. To make the process simpler, there are various tools, such as flowcharts, hierarchy charts, pseudocode, to help.
//  (2) When using these tools, the programmer should proceed from the bigger ideas in the process to the smaller ones. This allows the programmer to create individual tasks and subtasks of the program and fit them into the broader picture designed.
//  (3) When coding these tasks, there may be erroneous results which ensue. In comparing the design tools to the written program, the programmer should trace the logic to see if the program runs as intended. This process of testing occurs after you produce the model of the program. Sample data may be used.
//  (4) Based on these testing results the program may need to be changed to fit the initial design. Any errors found during compilation should be corrected. Then, based on how the program is supposed to function, there may be runtime errors. These errors will also be corrected until the program processes data as intended from input to output.
//
//
// Part 2: Ideal Weight Program
#include <iostream>
#include <string>
using namespace std;
int main()
{
    double user_height_feet, user_height_inches;
    int total_user_height;
    int ideal_fem_weight;
    int ideal_male_weight;
    cout << "\t\tWelcome to Ideal Weight Calculation Program" << endl;
    cout <<endl;
    cout << "Please enter your height, feet followed by inches (eg: 5 3): ";
    cin >> user_height_feet >> user_height_inches;
    total_user_height = (user_height_feet * 12) + user_height_inches - 60;
    // Testing code
    //cout << total_user_height <<endl;
    ideal_fem_weight = total_user_height * 5 + 100;
//    // Testing code
//    //cout << ideal_fem_weight << endl;
    ideal_male_weight = total_user_height * 6 + 106;
//    // Testing code
//    //cout << ideal_male_weight << endl;
    cout << "\nIf you are a male, your ideal weight should be " << ideal_male_weight;
    cout << " pounds."<<endl;
    cout << "\nIf you are a female, your ideal weight should be " << ideal_fem_weight;
    cout << " pounds.\n"<<endl;
    return 0;
}
