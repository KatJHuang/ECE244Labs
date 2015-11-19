/* 
 * File:   TreeTest.cpp
 * Author: catherinehuang
 *
 * Created on November 18, 2015, 11:19 PM
 */

#include <cstdlib>

#include "TreeDB.h"
#include "DBentry.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    TreeDB db;
    DBentry *dbe = new DBentry ("www.mcgill.ca", 123456, true);
    db.insert(dbe);
    dbe = new DBentry ("www.google.ca", 34543, true);
    db.insert(dbe);
    dbe = new DBentry ("www.ms.ca", 234, false);
    db.insert(dbe);
    dbe = new DBentry ("www.apple.ca", 3455, true);
    db.insert(dbe);
    dbe = new DBentry ("www.apple.ca", 3455, true);
    db.insert(dbe);
    
    cout << endl;
    db.countActive();
    db.print();
    
    cout << endl;
    cout << *(db.find("www.ms.ca"));
    db.printProbes();
    
    cout << endl;
    db.remove("www.google.ca");
    cout << "removed google" << endl;
    db.print();
    
    //find google
    if (!db.find("google"))
        cout << "google is not found" << endl;
    
    //update
    
    
    return 0;
}
