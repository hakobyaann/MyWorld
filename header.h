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
    int mrass(bool);
};

class Frog
{   
public: 
    std::vector<int>stomach;
    int eats(Grass, const bool);
};
