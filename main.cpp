#include <iostream> //to deal with input and output
#include <fstream>  //to deal with files
#include <iomanip>  //to deal with float values
#include <string.h>
using namespace std;
void menu();
class ManageMenu
{
protected:
    string userName;

public:
    ManageMenu()
    {
        cout << "\n\n\n\n\n\n\n\n\n\n\t Enter Your Name to Continue as an Admin: ";
        cin >> userName;
        system("CLS");
        menu();
    }
    ~ManageMenu()
    {
    }
};

// tavelling oops
// travelling mangement system
using namespace std;
class Customers
{
public:
    // general attributes of a customer
    string name, gender, address;
    int age, mobileNo;
    static int customerID;
    char all[900];

    void getDetails() // to fill the detatils by customer
    {
        ofstream file("old-customer.txt", ios::app); // to write output on file and appending the data
        cout << "Enter Customer ID: ";
        cin >> customerID;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
        cout << "Gender: ";
        cin >> gender;
        cout << "Enter Mobile Number: ";
        cin >> mobileNo;
        cout << "Enter Address: ";
        cin >> address;
        // like inserting the data into the file
        file << "\nCustomer ID: " << customerID << "\nName: " << name << "\nAge: " << age << "\nMobile Number: " << mobileNo << "\nAdress: " << address << "\nGender: " << gender << endl;
        file.close();
        cout << "\nSAVED \nNOTE: We save your details record for future purpose\n"
             << endl;
    }
    void showDetails()
    {
        ifstream file("old-customers.txt");
        if (!file)
            cout << "File Error!" << endl;
        while (!(file.eof()))
        {
            file.getline(all, 900);
            cout << all << endl;
        }
        file.close();
    }
};
int Customers::customerID;
class Cabs
{
public:
    int cabChoice;
    int kilometers;
    float cabCost;
    static float finalCabCost;

    void cabDetails()
    {
        cout << "We collabrated with fastest, safest, and smartest cab services around the country" << endl;
        cout << "-------------Brungi Cabs--------------" << endl;
        cout << "1. Rent a Standard Cab - Rs. 15 for 1KM" << endl;
        cout << "2. Rent a Luxury Cab - Rs. 25 for 1KM" << endl;

        cout << "/nTo calculate the cost for your jouney:" << endl;
        cout << "Enter which kind of cab you need:";
        cin >> cabChoice;
        cout << "Enter kilometers you have to travel:";
        cin >> kilometers;
        int hireCab;
        // if we selected the 1 can
        if (cabChoice == 1)
        {
            cabCost = kilometers * 15;
            cout << "\nYour tour cost" << cabCost << "  rupees for a Standard Cab" << endl;
            cout << "Press 1 to hire this cab: or";
            cout << "Press 2 to select another cab: ";
            cin >> hireCab;
            system("CLS"); // to clear the terminal

            if (hireCab == 1) // to conform
            {
                finalCabCost = cabCost;
                cout << "\nYou have succesfully hired a Standard can" << endl;
                cout << "Go to Menu and take the receipt" << endl;
            }
            else if (hireCab == 2) // again it gives us the chance
            {
                cabDetails();
            }
            else // if we gave invalid input
            {
                cout << "Invalid Input: Redirecting to previous munu \nPlease Wait!" << endl;
                // Sleep(999);it slow downs the process
                system("CLS");
                cabDetails();
            }
        }
        else if (cabChoice == 2)
        {
            cabCost = kilometers * 25;
            cout << "\nYour tour cost" << cabCost << "  rupees for a Luxury Cab" << endl;
            cout << "Press 1 to hire this cab: or";
            cout << "Press 2 to select another cab: ";
            cin >> hireCab;
            system("CLS"); // to clear the terminal

            if (hireCab == 1)
            {
                finalCabCost = cabCost;
                cout << "\nYou have succesfully hired a Luxury cab" << endl;
                cout << "Go to Menu and take the receipt" << endl;
            }
            else if (hireCab == 2)
            {
                cabDetails();
            }
            else
            {
                cout << "Invalid Input: Redirecting to previous munu \nPlease Wait!" << endl;
                // Sleep(999);
                system("CLS");
                cabDetails();
            }
        }
        else
        {
            cout << "Invalid Input: Redirecting to previous munu \nPlease Wait!" << endl;
            // Sleep(999);
            system("CLS");
            menu();
        }

        cout << "\nPress 1 to Redirect Main menu:";
        cin >> hireCab;
        system("CLS");
        if (hireCab == 1)
        {
            menu();
        }
        else
        {
            menu();
        }
    }
};
float Cabs::finalCabCost;
class Booking
{
public:
    int choiceHotel;
    int packChoice;
    static float hotelCost;
    void hotels()
    {
        string hotelNo[] = {"Asha", "Avenue", "Chetan"};
        for (int i = 0; i < 3; i++)
        {
            cout << i + 1 << ". Hotel" << hotelNo[i] << endl;
        }
        cout << "\nCurrently we collabrated with above hotels!" << endl;
        cout << "Press any key to back or \nEnter number of the hotel you want to book: ";
        cin >> choiceHotel;
        system("CLS");
        if (choiceHotel == 1)
        {
            cout << "----------WELCOME TO HOTEL ASHA--------" << endl;
            cout << "The Garden, food and beverages. Enjoy all you can drink, Stay cool and get chilled in the summer sun." << endl;
            cout << "Packages offered by Asha:\n"
                 << endl;
            cout << "1. Standard Pack" << endl;
            cout << "\tAll basic facilities you nedd just for: RS 5000.00" << endl;
            cout << "2. Premium Pack" << endl;
            cout << "\tEnjoy Premium: RS 10000.00" << endl;
            cout << "3.Luxury Pack" << endl;
            cout << "\tLive a luxury at Avendra: RS 15000.00" << endl;
            cout << "\nPress another key to back or\nEnter package number you want to book: ";
            cin >> packChoice;
            if (packChoice == 1)
            {
                hotelCost = 5000.00;
                cout << "\nYou have succesfully booked Standard Pack at Avendra" << endl;
                cout << "Gotto Menu and take the receipt" << endl;
            }
            else if (packChoice == 2)
            {
                hotelCost = 10000.00;
                cout << "\nYou have succesfully booked Premium Pack at Avendra" << endl;
                cout << "Gotto Menu and take the receipt" << endl;
            }
            else if (packChoice == 3)
            {
                hotelCost = 15000.00;
                cout << "\nYou have succesfully booked Luxury Pack at Avendra" << endl;
                cout << "Gotto Menu and take the receipt" << endl;
            }
            else
            {
                cout << "Invalid Input Redirecting to Previous Menu \nPlease Wait!" << endl;
                // Sleep(1100);
                system("CLS");
                hotels();
            }
            int gotomenu;
            cout << "\nPress 1 to redirect main menu: ";
            cin >> gotomenu;
            if (gotomenu == 1)
            {
                menu();
            }
            else
            {
                menu();
            }
        }
        else if (choiceHotel == 2)
        {
            cout << "----------WELCOME TO HOTEL Avenue--------" << endl;
            cout << "The Garden, food and beverages. Enjoy all you can drink, Stay cool and get chilled in the summer sun." << endl;
            cout << "Packages offered by Avenue:\n"
                 << endl;
            cout << "1. Standard Pack" << endl;
            cout << "\tAll basic facilities you nedd just for: RS 5000.00" << endl;
            cout << "2. Premium Pack" << endl;
            cout << "\tEnjoy Premium: RS 10000.00" << endl;
            cout << "3.Luxury Pack" << endl;
            cout << "\tLive a luxury at Avendra: RS 15000.00" << endl;
            cout << "\nPress another key to back or\nEnter package number you want to book: ";
            cin >> packChoice;
            if (packChoice == 1)
            {
                hotelCost = 5000.00;
                cout << "\nYou have succesfully booked Standard Pack at Avendra" << endl;
                cout << "Gotto Menu and take the receipt" << endl;
            }
            else if (packChoice == 2)
            {
                hotelCost = 10000.00;
                cout << "\nYou have succesfully booked Premium Pack at Avendra" << endl;
                cout << "Gotto Menu and take the receipt" << endl;
            }
            else if (packChoice == 3)
            {
                hotelCost = 15000.00;
                cout << "\nYou have succesfully booked Luxury Pack at Avendra" << endl;
                cout << "Gotto Menu and take the receipt" << endl;
            }
            else
            {
                cout << "Invalid Input Redirecting to Previous Menu \nPlease Wait!" << endl;
                // Sleep(1100);
                system("CLS");
                hotels();
            }
            int gotomenu;
            cout << "\nPress 1 to redirect main menu: ";
            cin >> gotomenu;
            if (gotomenu == 1)
            {
                menu();
            }
            else
            {
                menu();
            }
        }
        else if (choiceHotel == 3)
        {
            cout << "----------WELCOME TO HOTEL CHETAN--------" << endl;
            cout << "The Garden, food and beverages. Enjoy all you can drink, Stay cool and get chilled in the summer sun." << endl;
            cout << "Packages offered by CHETAN:\n"
                 << endl;
            cout << "1. Standard Pack" << endl;
            cout << "\tAll basic facilities you nedd just for: RS 5000.00" << endl;
            cout << "2. Premium Pack" << endl;
            cout << "\tEnjoy Premium: RS 10000.00" << endl;
            cout << "3.Luxury Pack" << endl;
            cout << "\tLive a luxury at Avendra: RS 15000.00" << endl;
            cout << "\nPress another key to back or\nEnter package number you want to book: ";
            cin >> packChoice;
            if (packChoice == 1)
            {
                hotelCost = 5000.00;
                cout << "\nYou have succesfully booked Standard Pack at Avendra" << endl;
                cout << "Gotto Menu and take the receipt" << endl;
            }
            else if (packChoice == 2)
            {
                hotelCost = 10000.00;
                cout << "\nYou have succesfully booked Premium Pack at Avendra" << endl;
                cout << "Gotto Menu and take the receipt" << endl;
            }
            else if (packChoice == 3)
            {
                hotelCost = 15000.00;
                cout << "\nYou have succesfully booked Luxury Pack at Avendra" << endl;
                cout << "Gotto Menu and take the receipt" << endl;
            }
            else
            {
                cout << "Invalid Input Redirecting to Previous Menu \nPlease Wait!" << endl;
                // Sleep(1100);
                system("CLS");
                hotels();
            }
            int gotomenu;
            cout << "\nPress 1 to redirect main menu: ";
            cin >> gotomenu;
            if (gotomenu == 1)
            {
                menu();
            }
            else
            {
                menu();
            }
        }
    }
};
float Booking::hotelCost;
class Charges : public Booking, Cabs, Customers
{
public:
    void printBill()
    {
        ofstream file("receipt.txt");
        file << "-------------ABC Travel Agency--------" << endl;
        file << "--------------Receipt-----------------" << endl;
        file << "Customer ID: " << Customers::customerID << endl
             << endl;
        file << "Description\t\t Total" << endl;
        file << "Hotel cost:\t\t" << fixed << setprecision(2) << Booking::hotelCost << endl;
        file << "Travel (cab) cost: \t" << fixed << setprecision(2) << Cabs::finalCabCost << endl;
        file << "_____________________________" << endl;
        file << "Total Charges:\t\t" << fixed << setprecision(2) << Booking::hotelCost + Cabs::finalCabCost << endl;
        file << "________________________" << endl;
        file << "-----------THANK YOU-------" << endl;
        file.close();
    }
    void showBill()
    {
        ifstream file("receipt.txt");
        if (!file)
        {
            cout << "file opening error" << endl;
        }
        while (!file.eof())
        {
            file.getline(all, 999);
            cout << all << endl;
        }
        file.close();
    }
};
void menu()
{
    int mainChoice;
    int inChoice;
    int gotoMenu;

    cout << "\t\t              *ABC Travels *\n"
         << endl;
    cout << "----------------------------Main Menu----------------" << endl;
    cout << "\t--------------------------" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t" << endl;
    cout << "\t\tCustomer Mangement  -> 1\t" << endl;
    cout << "\t\tCabs Management     -> 2\t" << endl;
    cout << "\t\tBooking Management   ->3\t" << endl;
    cout << "\t\tCharges & Bill       ->4\t" << endl;
    cout << "\t\tExit                 ->5\t" << endl;
    cout << "\t\t\t\t\t\t\t\t\t" << endl;
    cout << "\t1|___________-___________________________" << endl;
    cout << "\nEnter Your Choice: ";
    cin >> mainChoice;
    system("CLS");
    Customers a1;
    Cabs a2;
    Booking a3;
    Charges a4;

    if (mainChoice == 1)
    {
        cout << "------Customer------\n"
             << endl;
        cout << "1. Enter New Customer" << endl;
        cout << "2. See Old Customers" << endl;

        cout << "\nEnter Choice: ";
        cin >> inChoice;
        system("CLS");
        if (inChoice == 1)
        {
            a1.getDetails();
        }
        else if (inChoice == 2)
        {
            a1.showDetails();
        }
        else
        {
            cout << "Invalid Input Redirecting to Previous Menu \nPlease Wait!" << endl;
            // Sleep(1100);
            system("CLS");
            menu();
        }
        cout << "\nPress 1 to Redirect main menu: ";
        cin >> gotoMenu;
        system("CLS");
        if (gotoMenu == 1)
        {
            menu();
        }
        else
        {
            menu();
        }
    }
    else if (mainChoice == 2)
    {
        a2.cabDetails();
    }
    else if (mainChoice == 3)
    {
        cout << "---> Book a luxury Hotel using the system <---" << endl;
        a3.hotels();
    }
    else if (mainChoice == 4)
    {
        cout << "--->Get your receipt <----" << endl;
        a4.printBill();
        cout << "Your receipt is already printed you can get it from file path\n"
             << endl;
        cout << "to display the your receipt in the screen, Enter 1: or Enter another key to back main menu: ";

        cin >> gotoMenu;
        if (gotoMenu == 1)
        {
            system("CLS");
            a4.showBill();
            cout << "\nPress 1 to redirect main menu: ";
            cin >> gotoMenu;
            system("CLS");
            if (gotoMenu == 1)
            {
                menu();
            }
            else
            {
                menu();
            }
        }
        else
        {
            system("CLS");
            menu();
        }
    }
    else if (mainChoice == 5)
    {
        cout << "---GOOD-BYE--" << endl;
        // Sleep(999);
        system("CLS");
        menu();
    }
    else
    {
        cout << "Invalid Input Redireecting to Previous Menu \nPlease Wait!" << endl;
        // Sleep(1100);
        system("CLS");
        menu();
    }
}
int main()
{

    ManageMenu startObj;

    return 0;
}
