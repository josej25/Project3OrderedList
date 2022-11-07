/*
     Class to implement a states's name,energy usage, size and
     and the percentage of land needed.

     Name: Jojo Jose
     Date: 10/22/22
*/
#include <string>

using namespace std;

#ifndef STATE_H
#define STATE_H

class State
{
    public:
        State();
        State(string, double,long long int);
        string getName();
        void setName(string);
        void setEnergy(double);
        void setSize(long long int);
        double getEnergy();

        long long int getSize();
        double getPercerntage();

        void findPercentage();
        void display();

    protected:

    private:
        string m_name;
        double m_energy;
        long long int m_size;
        double m_percentage;
};

#endif // STATE_H
