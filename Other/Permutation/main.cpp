#include <iostream>

using namespace std;


void writearray(int a[],int si)
{
    for(int i =0;i<si;i++)
    {
        cout<<a[i]<<",";
    }
    cout<<endl;
}

void permutace(int n, int a[ ],int formersize)
{
    //cout<<n<<" "<<a<<" "<<formersize<<endl;
    if (n==1)
    {
        writearray(a,formersize);
    }
    else
        {
        for (int i=0; i < n-1; i++)
            {
                permutace(n-1, a,formersize);
                if (n %2 ==0)
                    {
                        swap(a[i], a[n-1]);
                    }
                else
                    {
                        swap(a[0], a[n-1]);
                    }
            }

            permutace(n-1, a,formersize);
        }
}

int main()
{
    int x [] = {6,4,5,5,5,24,2,2,42,4,3,9,3,66,3,3,42,414,2};
    permutace(sizeof(x)/sizeof(int),x,sizeof(x)/sizeof(int));
    return 0;
}
