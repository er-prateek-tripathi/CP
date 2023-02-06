/*
**Problem Statement**

Prompt the user to enter the MArks of a student in the database alongwith his Name and Roll Number.

After that provide a functionality to do searching in the database by querying Name, Roll number or marks of the student.

If any of the query matches to the ones present in the database then Display the name , Roll number and marks of the student
matching to that query.

Method Used: Linear Search

*/

#include <iostream>
#include<vector>
#include<string.h>

using namespace std;

int main()
{
    system("CLS");

    vector<int> arrMarks;
    vector<int> arrRolls;
    vector<char> arrName;

    cout << " Enter the number of Students Present in the class: ";
    int numStudents;
    cin >> numStudents;

    // Entering Values in the Database

    char inputName;
    int inputRolls;
    int inputMarks;

    for (int i = 0; i < numStudents; i++)
    {
        cout << " Enter the Name of Student " + (i + 1) << ":" << endl;
        cin >> inputName;
        arrName.push_back(inputName);
    }

    for (int i = 0; i < numStudents; i++)
    {

        cout << " Enter the Roll Number of student " + (i + 1) << ":" << endl;
        cin >> inputRolls;
        arrRolls.push_back(inputRolls);
    }

    for (int i = 0; i < numStudents; i++)
    {
        cout << " Enter the Marks obtained by Student " + (i + 1) << ":" << endl;
        cin >> inputMarks;
        arrMarks.push_back(inputMarks);
    }

    // Giving option to the user regardig type of Search value he wants to use for querying the results.

    cout << " How would you like to query te database, \nvia Name of the student or \nvia his roll number or \nvia the marks obtained by him ? ";
    cout << "\n Please Enter the serial number of your choice: \n";
    cout << "1. Search by Name\n"
         << "2. Search by Roll Number\n"
         << "3. Search by Marks Obtained\n";

    int choice;
    cin >> choice;

    switch (choice)
    {

    case 1:
        cout << " Please enter the name of the Student:\n";
        char queryName;
        cin >> queryName;
        for (int i = 0; i < numStudents; i++)
        {

            if (queryName == arrName[i])
            {
                cout << " name found !";
                cout << " Name of the student is :" << arrName[i] << endl;
                cout << " Roll number of the student is :" << arrRolls[i] << endl;
                cout << " Marks obtained by the student is :" << arrMarks[i];

                cout << "\n\n Do you want to search something else: (y/n)";
                char YesNo;
                char str = 'y';
                cin >> YesNo;
                if (YesNo == 'y' || YesNo == 'Y')
                {
                    continue;
                }
                else
                    break;
            }
        }
        break;

    case 2:
        cout << " Please enter the roll number of the Student:\n";
        int queryRoll;
        cin >> queryRoll;
        for (int i = 0; i < numStudents; i++)
        {
            if (queryRoll == arrRolls[i])
            {
                cout << " \n Roll Number found !";
                cout << " \n Name of the student is :" << arrName[i] << endl;
                cout << " \n Roll number of the student is :" << arrRolls[i] << endl;
                cout << " \n Marks obtained by the student is :" << arrMarks[i];

                cout << "\n\n Do you want to search something else: (y/n)";
                char YesNo;
                char str = 'y';
                cin >> YesNo;
                if (YesNo == 'y' || YesNo == 'Y')
                {
                    continue;
                }
                else
                    break;
            }
        }
        break;

    case 3:
        cout << " Please enter the marks obtained by the Student: \n";
        int queryMarks;
        cin >> queryMarks;
        for (int i = 0; i < numStudents; i++)
        {
            if (queryMarks == arrMarks[i])
            {
                cout << " Queried Marks found !";
                cout << " \n Name of the student is :" << arrName[i] << endl;
                cout << " \n Roll number of the student is :" << arrRolls[i] << endl;
                cout << " \n Marks obtained by the student is :" << arrMarks[i];

                cout << "\n\n Do you want to search something else: (y/n)";
                char YesNo;
                char str = 'y';
                cin >> YesNo;
                if (YesNo == 'y' || YesNo == 'Y')
                {
                    continue;
                }
                else
                    break;
            }
        }
        break;

    default:
        cout << "\n Whoaazzza !!! Invalid Input! \n";
        break;
    }

    return 0;
}