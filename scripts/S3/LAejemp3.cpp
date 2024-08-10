#include <iostream>
using namespace std;

long long int invertirNum(long long int n)
{
    long long int inverso=0;
    while(n>0)
    {
        inverso = inverso*10 + n%10;
        n/=10;
    }
    return inverso;
}

bool esCapicua(long long int n)
{
    return n==invertirNum(n);
}


int main()
{
    long long int evaluados[10] = {900464009, 914103031, 925979529, 935935606, 963839025, 966173734, 978119539, 982727289, 989950857, 999958817};

    for (int i=0; i<10; i++)
    {
        if (esCapicua(evaluados[i]))
        {
            cout << evaluados[i] <<" SI es capicua"<< endl;
        }
        else if (!esCapicua(evaluados[i])) //falso*falso = positivo, -> if si procederá a escribir, que el nuemro no es capicua
            {
                cout << evaluados[i] <<" NO es capicua"<< endl;

            }
    }    
    return 0;
}
