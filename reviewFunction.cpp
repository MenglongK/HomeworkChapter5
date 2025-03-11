#include <iostream>
using namespace std;
void printLogo(){
    cout<<"____            _                   "<<endl;
    cout<<"|  _ \\ _____   _(_) _____      _____"<<endl; 
    cout<<"| |_) / _ \\ \\ / / |/ _ \\ \\ /\\ / / __|"<<endl;
    cout<<"|  _ <  __/\\ V /| |  __/\\ V  V /\\__ \\"<<endl;
    cout<<"|_| \\_\\___| \\_/ |_|\\___| \\_/\\_/ |___/"<<endl;
}
int main()
{
    system("cls");
    int option; 
    printLogo(); 
    cout<<"Choose your option: "; cin>>option; 
    cout<<"Your option is : "<<option<<endl; 
    return 0;
}