#include "header.h"

Grass food;
Frog frggy;

int main()
{   
    time();
    return 0;   
}

void time()
{
    int i = 1;
    while (1)
    {
        std::cout << "Time " << i << " o'clock" <<std::endl;
        sleep(1);
        ++i;
        if (i >= 11)
        {
            i = 1;
        }
        bool lights = sun(i);
        bool air = tree(i);
        std::cout << (lights == 0 ? "It's Night" : "It's Daytime") << std::endl;
        if (lights == true)
        {
            std::cout << "Froggy is awake!" << std::endl;
            std::cout << "Froggy is breathing >>" << std::endl;
            if (froggy.stomach.empty())
            {
                sleep(1);
                std::cout << "After eating the grass " << froggy.eats(food, lights) << std::endl;
            }
            else
            {
                movement();
            }
    
        }
        else if (lights == false)
        {
            sleep(1);
            std::cout << "Froggy is slepping..." << std::endl;
            std::cout << "Froggy isn't breathing ." << std::endl;

            while (froggy.stomach.size() != 1 && !(froggy.stomach.empty()))
            {
                froggy.stomach.pop_back();
            }
        }

        sleep(1);
        std::cout << "The amount of grass " << food.mrass(lights) << std::endl;
        sleep(1);
        std::cout << "The size of Froggy's stomach " << froggy.stomach.size() << std::endl;
        sleep(1);
        std::cout << "The tree creates " << (air == 0 ? "no air" : "fresh air") << std::endl;
    }
}

bool sun(int t)
{
    if (t >= 6)
    {
        return true;
    }
    return false;
}

bool tree(int t)
{
    if (t >= 6)
    {
        return true;
    }
    return false;
}
