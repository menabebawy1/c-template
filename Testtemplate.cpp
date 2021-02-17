#include <iostream>
using namespace std;
#include "template.hpp"

int main()
{
    Bag<string> string_bag;
    Bag<int> int_bag;
}

    //className object; //non-template
    //className object(a,b); //non-template and paramterized
    //className <ItemType> object; //template
    //className <ItemType> object(a,b); //template and paramterized

    //BSTdict dictionary1; //non-template
    //BSTdict dictionary1(a,b); //non-template and paramterized
    //BSTdict<string> dictionary1; //template
    //BSTdict<string> dictionary1(a,b); //template and paramterized