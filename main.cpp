#include <iostream>
#include <string>
#include "State.h"
#include <list>
using namespace std;

// add a function to display thr ordered list
void add(list<int> &l, double x)
{
    list<int>::iterator it;
    list<int>::iterator previous;
//    cout<<l.front() << endl;
    if (l.empty() || (l.front() > x)) {
        l.push_front(x);
       // k.push_front(h);
    }
    else{
        previous = l.begin();
        for (auto it = l.begin(); it != l.end(); ++it){
            if (*it > x)
                break;
            else previous =  it;
        }
        l.insert(++previous,x);
        //k.insert(++previous,h);
    }
}
void print(list<int> l)
{
    for (auto it = l.begin(); it !=l.end(); it++){
        cout <<*it << "% ";
    }
}
// add a function to insert the state object into the ordered list.
int main()
{
    list <State> myList;
    list <State>::iterator it;
    string name;
    double energy;
    long long int Size;
    list<int> ordered;
    list <State> orderedStateList;
    State tx("Texas",13480.8, 7487580672000);
    tx.findPercentage();

    State ca("California",6922.8, 4563554688000);
    ca.findPercentage();

    State la("Louisiana",4200.4, 1445216256000);
    la.findPercentage();

    State fl("Florida",4003.1, 1805265792000);
    fl.findPercentage();

    State il("Illinois",3612.9, 1614549657600);
    il.findPercentage();

    State pa("Pennsylvania",3413.0, 1283967590400);
    pa.findPercentage();

    State oh("Ohio",3404.5, 1249649280000);
    oh.findPercentage();

    State ny("New York",3354.2, 1520933990400);
    ny.findPercentage();

    State ga("Georgia",2727.6, 1656673920000);
    ga.findPercentage();

    State mi("Michigan",2610.6, 2696287334400);
    mi.findPercentage();

    myList.push_back(tx);
    myList.push_back(ca);
    myList.push_back(la);
    myList.push_back(fl);
    myList.push_back(il);
    myList.push_back(pa);
    myList.push_back(oh);
    myList.push_back(ny);
    myList.push_back(ga);
    myList.push_back(mi);

    //add(myList,tx.getPercerntage());
    for (it = myList.begin(); it !=myList.end(); it++){

          add(ordered, (*it).getPercerntage());
          (*it).display();

    }
    // add the object to the ordered list
cout <<endl<< "Percentage of each state's land area:" << endl;
print(ordered);
cout << endl << endl;


    return 0;
}
