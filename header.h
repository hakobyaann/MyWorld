#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <string>
#include <unistd.h>

void time();
bool sun(int);
bool tree(int);
void movement();

class Grass
{
public: 
    long long amount = 100;
    int mrass(bool sun)
    {
        if (sun == false)
        {
            amount += 2;
        }
        return amount;
    }
};

class Frog
{   
public: 
    std::vector<int>stomach;
    int eats(Grass food, bool light)
    {
        while (stomach.size() <= 5)
        {    
            stomach.push_back(food.mrass(light));
            food.amount -= 5;
        }
        return food.amount;
    }
};

void movement()
{
    std::vector<int>place(6, 0);
    for (int i = 0; i < place.size(); ++i)
    {
        if (i % 2)
        {
            sleep(1);
            std::cout << "The Froggy moves to the left" << std::endl;
        }
        else
        {
            sleep(1);
            std::cout << "The Froggy moves to the right" << std::endl;

        }
    }
}
