#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    int r1,r2,result =0;
    int range[] ={-1,2,3,4,5,6};
    unsigned int steps = UINT_MAX/500;
    srand(time(NULL));
    int sum = 0;
    double EX = (-1+3+4+5+6)/6.0;
    double EY = 2*(-1+2+3+4+5+6)/6.0;
    double EXYsum=EX+EY/6;

    cout<<EX<<endl;
    cout<<EY<<endl;
    cout<<EXYsum<<endl;

for(int j =0;j<50;j++)
{
sum=0;

    for(int i = 0;i<steps;i++)
    {
        result = range[rand()%6];
        if(result == 2)
        {
            result=0;
            //cout<<result;
            result+= r1=range[rand()%6];
            //cout<<"+";
            //cout<<r1;
            result+= r2 =range[rand()%6];
            //cout<<"+";
            //cout<<r2;
            //cout<<"=";
        }

            sum+=result;


    }
cout<<"Center value:"<<sum<<"\t\tSuma:"<<(steps*EXYsum)<<"\t\tDiff: "<<(sum-steps*EXYsum)<<endl;
}







    return 0;
}
