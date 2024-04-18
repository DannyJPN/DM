#include <iostream>
#include <stdlib.h>
#include <string>
#include <strings.h>
#include <sstream>

using namespace std;

int main()
{
    int count =0;
    int finish = 1000000;
    stringstream sst;
    for(char z = 'A';z<='Z';z++)
    {
            for(int i = 0;i<finish;i++)
        {
        sst<<i;
        if(sst.str().find('7')==string::npos)
        {
            cout<<sst.str()<<z<<"77"<<endl;
            count++;
        }
        sst.str("");
        }
    }




    cout<<"COUNT: "<<count<<endl;

    cout<<"COUNT total: "<<count*56<<endl;

    cout<<"COUNT total: "<<count*7<<endl;

//_____________________________________________________________


    return 0;
}
