#include "AzimuthMonitoring.hpp"
#include <iostream>
int main()
{
    AzimuthMonitoring a;
    std::vector<string> vec = {"LEFT","RIGHT","LEFT 90","LEFT 45"};
    cout<<"The test shows : "<<a.getAzimuth(vec)<<endl;
    return 0;
}


