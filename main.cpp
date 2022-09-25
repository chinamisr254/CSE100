//
//  main.cpp
//  Assignment_4
//
//  Created by Joseph Hawkins on 6/19/22.
// Part 1, 1.: 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69 70 71 72 73 74 75 76 77 78 79 80 81 82 83 84 85 86 87 88 89 90 91 92 93 94 95 96 97 98 99 100 101 102 103 104
// Part 2, 2.: !lwt d,duyrv a
//This question takes the string length and reverses it printing every second character or letter from the end, starting with !

#include <iostream>
using namespace std;

int main() {
    int number, choice = 0,
            person = 0;//Number of people taking survey
        int    coffee = 0,
            tea = 0,
            coke = 0,
            oj = 0;

        while (choice != -1)
        {
            person++;
            cout << "1 Coffee\t 2 Tea\t 3 Coke\t 4 Orange Juice \5 Enter -1 to exit" << endl;
            cout << endl;

            cout << "Please input the favorite beverage of person #" << person << ": \n";
            cout << "Choose 1, 2, 3, or 4 from the above menu or -1 to exit the program." << endl;
            cin >> choice;

            if (choice == 1)
            {
                coffee++;
            }
            else if (choice == 2)
            {
                tea++;
            }
            else if (choice == 3)
            {
                coke++;
            }
            else if (choice == 4)
            {
                oj++;
            }
            else if (choice == -1)
            {
                person--;
            }

        }
        cout << "The total number of people survery is " << person << ". The results are as follows:" << endl;
        cout << "Beverage Number of Votes" << endl;
        cout << "***********************************" << endl;
        cout << endl;
        cout << "Coffee " << coffee << endl;
        cout << "Tea " << tea << endl;
        cout << "Coke " << coke << endl;
        cout << "Orange Juice " << oj << endl;
        cout << endl;


    
    return 0;
}
