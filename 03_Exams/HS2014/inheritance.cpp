#include "inheritance.h"

void inheritanceLaunch(){
    //Base Class constructed
    //Second Class constructed
    //Third Class constructed
    //thirdClass tC{};


    //Base Class constructed
    //Second Class constructed
    //Third Class constructed
    thirdClassSpecial tcS{};

    //empty
    secondClass sC{tcS};

    //empty
    secondClass &bC{tcS};

    cout << "\n\n";

   // tcS.talk();
    bC.talk();
   // bC.talk();

    cout << "\n\n";

    tcS.greeting();
    sC.greeting();
    bC.greeting();

    cout << "\n\n";
}