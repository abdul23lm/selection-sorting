#include <iostream>
#include <iomanip>
using namespace std;

void SelectionSort (int Array[], const int Size)
{
    int i,j,small, temp;
    for (i=0;i<Size;i++)
    {
        small=i;
        for (j=0;j<Size;j++)
        {
            if (Array[j]>Array[small])
            {
                small = j;
                temp=Array[i];
            Array[i] = Array[small];
            Array[small]=temp;
            }
        }
    }
}

int main()
{
    int NumList [10]={12,29,56,4,31,9,17,19,48,3};
    int temp;
    cout<<"*======================================Tugas Praktikum Sorting======================================*"<<endl;
    cout<<" Struktur Data & Pemrograman"<<endl;
    cout<<" Latihan 2 - Selection Sorting"<<endl;
    cout<<" Created By Abdul Latif Munjiat (1610631170004)"<<endl;
    cout<<" Kelas 3'A Fasilkom Unsika\n"<<endl;
    cout<<" \nData Sebelum Diurutkan\n"<<endl;
    for (int d=0; d<10; d++)
    {
        cout<<setw(3)<<NumList[d];
    }
    cout<<"\n\n";
    SelectionSort(NumList,10);
    cout<<"Data Setelah Diurutkan \n";
    for (int a=0; a<10; a++)
        cout<<setw(3)<<NumList[a]<<" ";
            cout<<endl;
}



