#include <iostream>
using namespace std;
void userGreeting(string username, string subject)
{
    // function body or function definition
    cout << "================================================" << endl;
    cout << "\t Hello ! " << username << endl;
    cout << "\t Welcome to " << subject << " Programming Class" << endl;
    cout << "================================================" << endl;
}

// function that has returntype but has no params
int sum()
{
    int value1, value2;
    cout << "Enter value1: ";
    cin >> value1;
    cout << "Enter value2: ";
    cin >> value2;
    int result = value1 + value2;
    cout << "Result is:" << result << endl;
    return result;
}

/*  float riels = usd * 4000;
 return riels;  */

float exchangeUSDToRiels(float usd)
{
    return usd * 4000;
}

int main()
{
    system("cls");
    // userGreeting("Bona Liza","C++");
    // userGreeting("KoKo","Python");

    /*   int result = sum();
      cout<<"Add 100 to the result variables "<<endl;
      result+=100;
      cout<<"Final result is : "<<result<<endl;
      // Another way of calling the function to use
      cout<<sum()<<endl;  */
    // call function that has returntype and has parameters
    int usd;
    cout << "Enter usd value: ";
    cin >> usd;
    cout << "USD is : " << usd << endl;
    float riels = exchangeUSDToRiels(usd);
    cout << "Riels =" << riels << "riels ";
    // riels = riels+10000;

    return 0;
}