#include <iostream>
using namespace std;
void view_task(int count, string task[10])
{
    cout << "\n``````````````````````````````````````````````````\n";
     cout << "\n Tasks to do for today: \t Completed or Not";
    cout << "\n``````````````````````````````````````````````````\n";
    for (int a = 0; a < count; a++)
    {
        cout << "\n task" << a << " :- " << task[a] << "\n";
    }
    cout << "\n------------------------------------------\n";
}
int main()
{
    string task[10];
    int choice = 1, count = 0, c;
    while (choice != 0)
    {
        cout << "-------------------------------------------------\n";
        cout << "\t!!!!! To do list!!!!!!";
        cout << "\n------------------------------------------------\n";
        cout << "\n 1- Add task";
        cout << "\n 2- view task";
        cout << "\n 3- delete task ";
        cout<<"\n 4- mark a task as completed";
        cout << "\n 0- Terminate the program";
        cout << "\n -------------------------------------------------\n";
        cout << "\n enter your choice: ";
        cin >> choice;
        if (choice == 1)
        {
            if (count > 9)
            {
                cout << "$$$$$Task list is FULL$$$$$";
            }
            else
            {
                cout << "enter your task: ";
                cin.ignore();
                getline(cin, task[count]);
                count++;
            }
        }
        if (choice == 2)
        {
            if(count==0)
            {
                cout<<"\n::::::To do list is empty:::::\n";
            }
            else{
            view_task(count, task);

            }
        }
        if (choice == 3)
        {
            int d;
            cout << "enter the task to be deleted: ";
            cin >> d;
            if (d < 0 || d > 9)
            {
                cout << "Please enter the valid task no";
            }
            else
            {
                for (int b = d; b < count; b++)
                {
                    task[b] = task[b + 1];
                }
            }
            count--;
        }
        if(choice==4)
        {
            int a,p;
            cout<<"enter the task no which is completed: ";
            cin>>a;
            task[a]=task[a]+"\t\t\t~~~~completed";
            view_task(count, task);

        }
        if (choice == 0)
        {
            cout << "------- Terminating task--------";
        }
    }
    return 0;
}