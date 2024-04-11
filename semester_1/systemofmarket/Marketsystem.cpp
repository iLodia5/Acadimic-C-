#include <iostream>

using namespace std;

class Market
{
private:
    string user_name[100];
    string listname[100];
    string password[100];
    string listpass[100];
    int numberofuser, inputitems = -1;
    int flag = 0;
    int postion = -1, temp = -1, inputquntity, totalprice[100], totalquntity[100], finalprice = 0;
    int basket = 0;
    string boughtitems[100];

    // for sale

    string name_item[100];
    int quntity[100];
    float price[100];

    int index = -1;

public:
    void Register()
    {
        flag += 1;
        cout << "---------------Register-------------" << endl;
        cout << "Enter hte number of the users : ";
        cin >> numberofuser;

        for (int i = 0; i < numberofuser; i++)
        {
            cout << "\tUser name :";
            cin >> user_name[i];
            cout << "\tPassword : ";
            cin >> password[i];
        }
        for (int i = 0; i < numberofuser; i++)
        {
            listname[i] = user_name[i];
            listpass[i] = password[i];
        }
    }
    void login()
    {
        if (flag > 0)
        {

            cout << "------------------login-------------" << endl;
            string logname, logpass; // the enter name and pass
            cout << "\tUser name: ";
            cin >> logname;
            cout << "\tPassword: ";
            cin >> logpass;

            for (int j = 0; j < numberofuser; j++)
            {
                if (logname == listname[j] && logpass == listpass[j])
                {
                    cout << "Welcome " << listname[j] << endl;
                    return;
                }
                if (logname != listname[j] || logpass != listpass[j])
                {
                    cout << "you don't have account" << endl;
                    return;
                }
            }
        }
        else
        {
            cout << endl
                 << "You need to register at first" << endl;
        }
    }
    void input()
    {
        if (flag > 0)
        {

            cout << "number of items to add to storage: ";
            cin >> inputitems;
            for (int i = 0; i < inputitems; i++)
            {

                cout << "Enter the name of item " << i + 1 << " : ";
                cin >> name_item[++index];
                cout << "Etner the quntity of item " << i + 1 << " : ";
                cin >> quntity[index];
                cout << "Enter the price of the item " << i + 1 << " : ";
                cin >> price[index];
            }
        }
        else
        {
            cout << endl
                 << "You need to Register at first" << endl;
        }
    }
    void showstorge()
    {
        if (flag > 0)
        {

            if (inputitems != -1)
            {

                cout << endl;
                cout << "----------------show storge-------------" << endl;

                for (int i = 0; i < index + 1; i++)
                {
                    cout << endl
                         << "item " << i + 1 << endl;
                    cout << "\tName of item: " << name_item[i] << endl;
                    cout << "\tQuntity of item : " << quntity[i] << endl;
                    cout << "\tPrice of item : " << price[i] << " $" << endl;
                    cout << endl;
                }
            }
            else
            {
                cout << endl
                     << "You need to input some items to the Storage" << endl;
            }
        }
        else
        {
            cout << endl
                 << "you need to Register at first " << endl;
        }
    }
    void update();
    void showreport()
    {
        cout << "Your total items is : " << endl
             << endl;
        for (int i = 0; i < basket; i++)
        {
            cout << "\t" << boughtitems[i] << ","
                 << "\t" << totalquntity[i] << ","
                 << "\t" << totalprice[i] << "$" << endl;
        }
        cout << "------------------------------------------------------------" << endl;
        cout << "\t"
             << "\t"
             << "Total price : " << finalprice << "$" << endl;
    }
};
Market m;
int main()
{
    int choice = 1;

    while (choice <= 6 && choice >= 1)
    {
        cout << endl
             << endl;

        cout << "--------------Main Menu-------------" << endl;

        cout << "\t1-Register" << endl
             << "\t2-Login" << endl
             << "\t3-Input" << endl
             << "\t4-sale" << endl
             << "\t5-Show storge" << endl
             << "\t6-Show report" << endl
             << "\t7-Exit" << endl;

        cout << "Enter a number from 1 to 5 : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            m.Register();
            break;
        case 2:
            m.login();
            break;
        case 3:
            m.input();
            break;
        case 4:
            m.update();
            break;
        case 5:
            m.showstorge();
            break;
        case 6:
            m.showreport();
            break;

        default:
            break;
            cout << "Thanks for Buying for out market :)" << endl;
        }
    }

    return 0;
}
void Market::update()
{

    if (flag > 0)
    {

        if (inputitems != -1)
        {
            cout << "Enter the number of things you want to buy : ";
            cin >> temp;

            cout << "\n----------the storage---------------" << endl;
            m.showstorge();
            cout << endl
                 << endl
                 << "Enter the number of item to buy it (choose by number) ! " << endl;

            for (int j = 0; j < temp; j++)
            {
                cout << "item : ";
                cin >> postion;
                cout << "Enter quntity : ";
                cin >> inputquntity;
                for (int i = postion - 1; i <= index; i++)
                {
                    if (inputquntity >= quntity[i])
                    {
                        cout << "This quntity is not avilable !" << endl;
                        break;
                    }
                    else
                    {
                        cout << ":)" << endl;
                        boughtitems[basket] = name_item[i];
                        totalprice[basket] = inputquntity * price[i];
                        totalquntity[basket] = inputquntity;
                        finalprice += totalprice[basket];

                        if (quntity[i] == 0)
                        {

                            name_item[i] = name_item[i + 1];
                            quntity[i] = quntity[i + 1];
                            price[i] = price[i + 1];
                        }
                        else
                        {
                            quntity[i] -= inputquntity;
                            cout << ":<" << endl;
                        }
                        basket++;
                    }
                }
                for (int i = 0; i < index; i++)
                {
                    if (quntity[i] == 0)
                    {
                        index--;
                    }
                }
            }
        }
        else
        {
            cout << "the sotorge is empty !" << endl;
        }
    }
    else
    {
        cout << "Try to register at first !!" << endl;
    }
}