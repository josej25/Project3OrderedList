#include "State.h"
#include <cmath>
#include <iostream>
#include<math.h>
#include <string>
using namespace std;
State::State()
{
    //ctor
}
State::State(string name, double energy, long long int Size)
{
m_name = name;
m_energy = energy;
m_size = Size;

}

void State::findPercentage()
{
    double panelsNeeded = ceil(m_energy/ 51); //change  51 to a constant
   // cout << panelsNeeded << endl;
    //compute the panel are needed
    double panelArea = (panelsNeeded * 18)*1000000000;
   // cout << panelArea << endl;
    //compute the percentage based on the panel area and size;
    m_percentage = (panelArea/ m_size) * 100;

}
double State::getPercerntage()
{
    return m_percentage;
}
string State::getName()
{
    return m_name;
}
double State::getEnergy()
{
    return m_energy;
}
void State::setName(string name)
{
    m_name= name;
}
void State::setEnergy(double energy)
{
    m_energy= energy;
}
void State::setSize(long long int Size)
{
    m_size= Size;
}
void State::display()
{
    cout << m_name << ", " << m_energy << ", " << m_size<< endl;
}


