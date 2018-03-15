// Bar Star

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    int ordersBeer = 0;
    int deliveriesBeer = 0;
    int ordersWine = 0;
    int deliveriesWine = 0;
    int beers = 200;
    int wines = 300;
    
    while(true)
    {
        cin >> input;
        if(input.find("Beers") != -1)
        {
            int btls = stoi(input.substr(input.find(":") + 1, input.size()));
            beers += btls;
            if(btls > 0)
                ordersBeer++;
            else
                deliveriesBeer++;
        }
        else if(input.find("Wines") != -1)
        {
            int btls = stoi(input.substr(input.find(":") + 1, input.size()));
            wines += btls;
            if(btls > 0)
                ordersWine++;
            else
                deliveriesWine++;
        }
        else if(input.find("END") != -1)
        {
            cout << "Wines: " << wines << endl;
            cout << "Deliveries: " << deliveriesWine << endl;
            cout << "Orders: " << ordersWine << endl;
            cout << "Beers: " << beers << endl;
            cout << "Deliveries: " << deliveriesBeer << endl;
            cout << "Orders: " << ordersBeer << endl;
            break;
        }
        else
        {
            cout << "Invalid input. Try again!" << endl;
        }
    }
    return 0;
}
