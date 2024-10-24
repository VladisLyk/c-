#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct User
{
    string firstName;
    string lastName;

    int age;
    bool isStudent;
};

main()
{

    vector<User> users;
    bool nextAdding = true; 

    while (nextAdding)
    {
        User user;

        cout << "Enter first name: ";
        cin >> user.firstName;

        cout << "Enter last name: ";
        cin >> user.lastName;

        cout << "Enter your age: ";
        cin >> user.age;

        cout << "You are student (+ or -): ";
        string isStudentStr;
        cin >> isStudentStr;
        user.isStudent = (isStudentStr == "+");

        cout << endl << "Entered user:";
        cout << "Name: " << user.firstName << " " << user.lastName << endl;
        cout << "Age: " << user.age << endl;
        cout << "Student: " << (user.isStudent ? "Yes" : "No") << endl;
        cout << endl;

        cout << "\n" << "Add new user? (+ or -)" << endl;
        string newUser;
        cin >> newUser;

        users.push_back(user);

        if(newUser != "+") {

            nextAdding = false;

            for (size_t i = 0; i < users.size(); i++)
            {
                User user = users[i];

                cout << "-----------------" << endl;
                cout << "User #" << i+1 << endl;
                cout << " First name: " << user.firstName << endl;
                cout << " Last name: " << user.lastName << endl;
                cout << " Age: " << user.age << endl;
                cout << " Student: " << (user.isStudent ? "Yes" : "No") << endl;

                (users.size() <= i+1) ? cout << "-----------------" << endl : cout << endl ;
            }
        }
    }
}
