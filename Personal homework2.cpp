#include<iostream>
#include<stdio.h>
using namespace std;
int Maxsum(const int array[], int n)
{
    int temp, sum;
    sum = 0;
    for (int i = 0; i < n; i++)
    {
        temp = 0;
        for (int j = i; j < n; j++)
        {
            temp += array[j];
            if (temp > sum)
                sum = temp;
        }
    }
    return sum;
}

int main()
{
    int n;
    scanf_s("%d", &n);
    int arry[10];
    for (int i = 0; i < n; i++)
    {
        scanf_s("%d", &arry[i]);
    }
    int maxSum = Maxsum(arry, n);
    cout <<  maxSum << endl;
    system("pause");
    return 0;
}
