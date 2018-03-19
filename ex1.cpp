#include <iostream>
#include <string>

using namespace std;

int main()
{

    int beersBottles = 200;
    int winesBottles = 300;
    int beersOrder = 0;
    int beersDelivery = 0;
    int winesDelivery = 0;
    int winesOrder = 0;
    string input;

    while(true)
    {
        cin >> input;
        if(input == "END")
        {
            break;
        }

        string drink = input.substr(0, input.find(":"));
        int cnt = stoi(input.substr(input.find(":") + 1));
        
        if(drink == "Beers")
        {
            beersBottles += cnt;
            if(cnt > 0)
                beersDelivery++;
            else if(cnt < 0)
                beersOrder++;
        }
        else if (drink == "Wines")
        {
            winesBottles += cnt;
            if(cnt > 0)
                winesDelivery++;
            else if(cnt < 0)
                winesOrder++;
        }
        
    }
    
    cout << "Wines: " << winesBottles << endl;
    cout << "Deliveries: " << winesDelivery << endl;
    cout << "Orders: " << winesOrder << endl;
    cout << "Beers: " << beersBottles << endl;
    cout << "Deliveries: " << beersDelivery << endl;
    cout << "Orders: " << beersOrder << endl;


    return 0;
}

