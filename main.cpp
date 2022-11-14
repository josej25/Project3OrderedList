#include <iostream>
#include <string>
#include "State.h"
#include <list>

using namespace std;

// add a function to display thr ordered list
void add(list<State> &l, State &x)
{
    list<State>::iterator it;
    list<State>::iterator previous;
//    cout<<l.front() << endl;
    if (l.empty() || (l.front().getPercerntage() > x.getPercerntage())) {
        l.push_front(x);
       // k.push_front(h);
    }
    else{
        previous = l.begin();
        for (auto it = l.begin(); it != l.end(); ++it){
            if ((*it).getPercerntage() > x.getPercerntage())
                break;
            else previous =  it;
        }
        l.insert(++previous,x);
        //k.insert(++previous,h);
    }
}
void print(list<State> l)
{
    for (auto it = l.begin(); it !=l.end(); it++){
        cout << (*it).getName()<< ": "<<(*it).getPercerntage() << "% "<< endl;
    }
}
// add a function to insert the state object into the ordered list.
int main()
{
    list <State> myList;
    list<State>::iterator it;
    string name;
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
    add(myList,tx);
    add(myList,ca);
    add(myList,la);
    add(myList,fl);
    add(myList,il);
    add(myList,pa);
    add(myList,oh);
    add(myList,ny);
    add(myList,ga);
    add(myList,mi);



    //add(myList,tx.getPercerntage());
 //   for (it = myList.begin(); it !=myList.end(); it++){

   //       add(myList, tx);
     //     (*it).display();

    //}
    // add the object to the ordered list
cout <<endl<< "Percentage of each state's land area:" << endl;
print(myList);
cout << endl << endl;


    return 0;
}
