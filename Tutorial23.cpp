#include <iostream>
using namespace std;
class Shop
{
private:
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void intitCounter()
    {
        counter = 0;// Here the counter will be different for the different objects.
    }
    void getItem();
    void SetPrice();
    void DisplayPrice();
};

void Shop ::SetPrice()
{
    cout << "Enter Id of your item no "<<counter+1<<endl;
    cin >> itemId[counter];
    cout << "Enter the price of your Item\n";
    cin >> itemPrice[counter];
    counter++;
}

void Shop ::DisplayPrice()
{
    for (int i = 0; i < counter; i++)
    {
        cout <<"The Price of item with Id "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
    }
    
}

int main()
{
    Shop dukaan ;// Here dukaan is the object of the clASS Shop
    dukaan.intitCounter(); // By calling this function the counter is initialized to 0.
    dukaan.SetPrice();
    dukaan.SetPrice();
    dukaan.SetPrice();
    dukaan.DisplayPrice(); // Displays the data of the array.

    return 0;
}
