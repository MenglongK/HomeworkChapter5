#include <iostream>
using namespace std;
void printLogo()
{
    cout << " ____        ___  _                             _      " << endl;
    cout << " |  _ \\      / _ \\/ |   ___ ___  _ __  ___  ___ | | ___" << endl;
    cout << " | |_) |____| | | | |  / __/ _ \\| '_ \\/ __|/ _ \\| |/ _ \\" << endl;
    cout << " |  __/_____| |_| | | | (_| (_) | | | \\__ \\ (_) | |  __/" << endl;
    cout << " |_|         \\___/|_|  \\___\\___/|_| |_|___/\\___/|_|\\___|" << endl;
}
void pintMenu()
{
    cout << "\n1. Money Exchange Program" << endl;
    cout << "2. Worker Salary Caculator" << endl;
    cout << "3. Sum/Mul of 1...n" << endl;
    cout << "4. Exit " << endl;
}
void pressEnterToContinue()
{
    cout << "-----------<<Press Enter to Continue>>------------" << endl;
    cin.ignore(); // clear buffer
    cin.get();
}
float exchangeUSDKHR(bool isUSDToKHR); // function prototype or declaration (using when funtion(moneyExchangeProgram) is on function(exchangeUSDKHR)) using when we want code look clean
void moneyExchangeProgram()
{
    while (true)
    {
        system("cls");
        int op;
        cout << "1. Exchange from USD -> KHR" << endl;
        cout << "2. Exchange from KHR -> USD " << endl;
        cout << "3. Exit " << endl;
        cout << ">>Choose exchange option(1-3):";
        cin >> op;
        if (op == 1)
        {
            // USD -> KHR
            cout << "[USD -> KHR]" << endl;
            cout << "Result =" << exchangeUSDKHR(true) << " riels " << endl;
        }
        else if (op == 2)
        {
            // KHR -> USD
            cout << "[KHR -> USD]" << endl;
            cout << "Result =" << exchangeUSDKHR(false) << "$" << endl;
        }
        else if (op == 3)
        {
            cout << "Exit from exchange program!" << endl;
            pressEnterToContinue();
            break;
        }
        else
        {
            cout << "Invalid option!! " << endl;
        }
        pressEnterToContinue();
    }
}
double findWorkerSalary(float hours, float wage, char gender)
{
    float salary = hours * wage;
    float remainPercent = 1; //1=100%
    if(salary>=1000){
        if(gender == 'm' || gender == 'M') remainPercent = 0.5; 
        else remainPercent = 0.7;
    }
    return salary * remainPercent;
    // if (salary >= 1000)
    // {
    //     if (gender == 'm' || gender == 'M')
    //     {
    //         salary = salary * 0.5;
    //         // salary *=0.5;
    //     }
    //     else
    //     {
    //         salary = salary * 0.7;
    //     }
    // }
}

void caculateWorkerSalary(){
    string name, position;
    char gender;
    float hours, wage;
    while (true)
    {   
        system("cls");
        cout<<"=======[Input worder information]======="<<endl;
        cout<<"Enter worker name: "; cin>>name;
        cout<<"Enter worker gender: "; cin>>gender;
        cout<<"Enter positon: "; cin>>position;
        cout<<"Enter hours: "; cin>>hours;
        cout<<"Enter wage: "; cin>>wage;
        
        cout<<"==========<<Worker Summary>>========"<<endl;
        cout<<"Worker name is: "<<name<<endl;
        cout<<"Worker gender is: "<<gender<<endl;
        cout<<"Worker position is: "<<position<<endl;
        cout<<"Hours: "<<hours<<endl;
        cout<<"Wage: "<<wage<<endl;
        cout<<"Salary is: "<<findWorkerSalary(hours, wage, gender)<<" $"<<endl;

        //add logic to continue or exit the program
        cout<<"<<<Press Enter to continue , 'q' | Q to exit>>>"<<endl;
        cin.ignore();
        char quitOption = cin.get();
        // this method for input only 'q'
        // if(cin.get() == 'q') break;

        // this method for input 'q' or 'Q'
        if(quitOption == 'q' || quitOption == 'Q') break;
    }
}


float exchangeUSDKHR(bool isUSDToKHR)
{
    float amount;
    string currency = (isUSDToKHR) ? "($)" : "(riels)";
    cout << "Enter Amount " << currency << " Exchange : "; // ternary operators
    cin >> amount;
    cout << "\nAmount= " << amount << currency << endl;
    if (isUSDToKHR == true)
    {
        return amount * 4000;
    }
    else
    {
        // KHR -> USD
        return amount / 4000;
    }
}

int main()
{
    int option;

    do
    {
        system("cls");
        printLogo();
        pintMenu();
        cout << ">> Choose your option: ";
        cin >> option;
        switch (option)
        {
        case 1:
            moneyExchangeProgram();
            break;
        case 2:
            caculateWorkerSalary();
            break;
        case 3:
            // addition();
            break;
        case 4:
        {
        }
        break;
        default:
            cout << "Invalid option! Choose again!! " << endl;
            break;
        }
    } while (option != 4);

    return 0;
}