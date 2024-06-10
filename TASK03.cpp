#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Function to display the menu options
void displayMenu() {
    cout << " list" << endl;
    cout << "1. Adding Task" << endl;
    cout << "2. Viewing Tasks" << endl;
    cout << "3. Removing Task" << endl;
    cout << "4. Exit" << endl;
}

int main() {
    vector<string> work;
    int ch;

    do {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> ch;

        switch(ch) {
            case 1:
                {
                    string task;
                    cout << "Enter the task to add: ";
                    cin.ignore(); // Ignore previous newline character
                    getline(cin, task);
                    work.push_back(task);
                    cout << "Task added successfully!" << endl;
                    break;
                }
            case 2:
                {
                    if (work.empty()) {
                        cout << "No tasks in the list." << endl;
                    } else {
                        cout << "Tasks:" << endl;
                        for (size_t i = 0; i < work.size(); ++i) {
                            cout << i+1 << ". " << work[i] << endl;
                        }
                    }
                    break;
                }
            case 3:
                {
                    if (work.empty()) {
                        cout << "No tasks in the list." << endl;
                    } else {
                        size_t index;
                        cout << "Enter the index of the task to remove: ";
                        cin >> index;
                        if (index >= 1 && index <= work.size()) {
                            work.erase(work.begin() + index - 1);
                            cout << "Task removed successfully!" << endl;
                        } else {
                            cout << "Invalid index!" << endl;
                        }
                    }
                    break;
                }
            case 4:
                cout << "Exiting" << endl;
                break;
            default:
                cout << "Invalid choice try again." << endl;
        }
    } while(ch != 4);

    return 0;
}
