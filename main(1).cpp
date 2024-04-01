#include <iostream>
#include <cstdlib>

using namespace std;

void calculateSubjectGPA();
void calculateSemesterCGPA();
void displayCalculationMethod();
void showMainMenu();
void displayJKishoreKumar();
int main() {
    showMainMenu();
    return 0;
}

void clearScreen() {
    cout << "\033[2J\033[1;1H";
}

void showMainMenu() {
    int choice;
    while (true) {
        clearScreen();
        cout << "\033[1;36m";
        cout<<"      "<<"SEMESTER GRADE CALCULATION"<< endl;
        cout << "\033[0m";
        cout << "******************************************************" << endl;
        cout << "                   MAIN MENU" << endl;
        cout << "******************************************************" << endl;
        cout << "  \033[1;32m1. Calculate Subject GPA\033[0m" << endl;
        cout << "  \033[1;33m2. Calculate Semester CGPA\033[0m" << endl;
        cout << "  \033[1;35m3. Display Calculation Method\033[0m" << endl;
        cout << "  \033[1;31m4. Exit Application\033[0m" << endl;
        cout << "******************************************************" << endl;
        cout << "Enter your choice (1-4): ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                calculateSubjectGPA();
                break;
            case 2:
                calculateSemesterCGPA();
                break;
            case 3:
                displayCalculationMethod();
                break;
            case 4:
               
                      
                displayJKishoreKumar();
                cout << endl;
                cout << "\033[0m";
                exit(EXIT_SUCCESS);
            default:
                cout << "\033[1;31m";
                cout << "Invalid input. Please enter a number between 1 and 4." << endl;
                cout << "\033[0m";
                cout << "Press Enter to continue...";
                cin.ignore();
                cin.get();
        }
    }
}

void calculateSubjectGPA() {
    clearScreen();
    int numSubjects;
    cout << "******************************************************" << endl;
    cout << "            \033[1;32mCalculate Subject GPA\033[0m                     " << endl;
    cout << "******************************************************" << endl;
    cout << "Enter the number of subjects: ";
    cin >> numSubjects;

    float credits[numSubjects];
    float points[numSubjects];

    float totalPoints = 0, totalCredits = 0;

    for (int i = 0; i < numSubjects; ++i) {
        cout << "Subject " << i + 1 << ":" << endl;
        cout << "  - Enter credit: ";
        cin >> credits[i];
        cout << "  - Enter point: ";
        cin >> points[i];
        totalPoints += credits[i] * points[i];
        totalCredits += credits[i];
    }

    cout << "******************************************************" << endl;
    cout << "Total GPA: " << (totalPoints / totalCredits) << endl;
    cout << "Press Enter to continue...";
    cin.ignore();
    cin.get();
}

void calculateSemesterCGPA() {
    clearScreen();
    int numSemesters;
    cout << "******************************************************" << endl;
    cout << "          \033[1;33mCalculate Semester CGPA\033[0m                     " << endl;
    cout << "******************************************************" << endl;
    cout << "Enter the number of semesters: ";
    cin >> numSemesters;

    float semesterGPA[numSemesters];
    float totalGPA = 0;
    float totalGradingPoints = 0;

    for (int i = 0; i < numSemesters; ++i) {
        cout << "Semester " << i + 1 << ":" << endl;
        cout << "  - Enter GPA: ";
        cin >> semesterGPA[i];
        cout << "  - Enter total grading points: ";
        float Points;
        cin >> Points;
        totalGradingPoints+=Points;
        totalGPA += (semesterGPA[i]*Points);
    }

    cout << "******************************************************" << endl;
    cout << "CGPA: " << (totalGPA / totalGradingPoints) << endl;
    cout << "Press Enter to continue...";
    cin.ignore();
    cin.get();
}

void displayCalculationMethod() {
    clearScreen();
    cout << "******************************************************" << endl;
    cout << "          \033[1;35mMethod of Calculating GPA & CGPA\033[0m            " << endl;
    cout << "******************************************************" << endl;
    cout << "GPA = Sum of (Credit * Point) / Total Credits" << endl;
    cout << "CGPA = Sum of (GPA * Total Grading Points) / Sum of Total Grading Points" << endl;
    cout << "******************************************************" << endl;
    cout << "Press Enter to continue...";
    cin.ignore();
    cin.get();
}

void displayJKishoreKumar() {
    clearScreen();
  cout << "Thank you for using the GPA & CGPA Calculator. Goodbye!" << endl;
                cout << "\033[1;33m";
                cout << "Done by ";
    cout << "\033[1;31mJ";
    cout << "\033[1;33m.";
    cout << "\033[1;32mK";
    cout << "\033[1;34mI";
    cout << "\033[1;35mS";
    cout << "\033[1;36mH";
    cout << "\033[1;31mO";
    cout << "\033[1;33mR";
    cout << "\033[1;32m";
    cout << " ";
    cout << "\033[1;34mK";
    cout << "\033[1;35mU";
    cout << "\033[1;36mM";
    cout << "\033[1;31mA";
    cout << "\033[1;33mR";
    cout << "\033[1;32m";
    cout << " ";
}
