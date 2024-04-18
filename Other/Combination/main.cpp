#include <iostream>

using namespace std;



void combination(int n,)
{


int i, select[k];
select[i = 0] = -1;
while (i>=0) {
if (++select[i]>=n) // zvys o 1
{ i--; continue; }
if (++i<k) {
select[i] = select[i-1]; // jen serazene!
continue;
}
// zpracujeme kombinaci (select[0],...,select[k-1])
i--;
}

}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
