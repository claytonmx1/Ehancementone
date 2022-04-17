#include<iostream>
#include<string>
using namespace std;

// displaying the menu for our software
void displaymenu()
{
    cout << " 1.Find Factorial Of Number\n";
    //cout << " 2.Extra Space\n";
    //cout << " 3.Extra space \n";
}
void Factorial()
{
    //setting our variables
    int num, i;
    int product = 1;

    //outputting intructions for the user to input a number and then getting the users input and assigning it to num
    cout << "Enter a number:\n" << endl;
    cin >> num;

    //for loop that loops through to find the factorial for the number inputed by the user
    for (i = num; i > 0; i--)
        product = product * i;
    cout << "The factorial for " << num << "is: \n" << product;
    Factorial();
}
//void extra()
//
 //   cout << "add the slection of new menu item here \n";
//}
//void extra()
//{
//    cout << "add the selection of new menu item here 3\n";
//}

int main()
{

    string st[20];
    int itemcount = 0;

    displaymenu();
    int userschoice;
    string confirm;
    do
    {
        cout << "Enter Menu Option :";
        cin >> userschoice;
        switch (userschoice)
        {
        case 1: Factorial(); break;
            //case 2: Extra(); break;
            //case 3: Extra(); break;
        default: cout << "invalid"; break;
        }
        cout << "Enter y to continue:";
        cin >> confirm;
    } while (confirm == "y" || confirm == "Y");
    return 0;
}
