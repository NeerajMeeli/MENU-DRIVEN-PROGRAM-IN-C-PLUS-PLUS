//Bubble sort impliment using array
#include<iostream>
using namespace std;
    int arr[20],n;

    void Bubblesort()
    {
        cout<<"Enter the size of an array:";
        cin>>n;
        cout<<"Enter the value of array:";
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

         for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<n-i-1;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    int temp;
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
        
    }

    void print()
    {
        
         cout<<"Ascending order array are:";
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<endl;
        }
    }
   

    //Insertion sort using array 

    void InsertionSort()
    {
        int arr[20],n;
        cout<<"Enter the size of an array:";
        cin>>n;
        cout<<"Enter the value of an array:";
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=1;i<n;i++)
        {
            int key=arr[i];
            int j=i-1;
            while(key<arr[j]&&j>=0)
            {
                arr[j+1]=arr[j];
                 j--;
            }
            arr[j+1]=key;

        }

        cout<<"Print the Sorted array is :";
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<endl;
        }

    }
   

//Selection Sort impliment using array

    // void SelectionSort()
    // {
    //     int arr[20],n;
    //     void getdata()
    //     {
    //         cout<<"Enter the size of an array:";
    //         cin>>n;
    //         cout<<"Enter the value of an arrry:";
    //         for(int i=0;i<n;i++)
    //         {
    //             cin>>arr[i];
    //         }
    //     }

    // }

    

    int main()
    {
         int choise;
        do
        {
       
        cout<<"\n___________________________Menu________________________________";
        cout<<"\n1.Bubble Sort \n2.Insertion Sort \n3.Selection Sort ";
        cout<<"\n_________________________________________________________________\n";
        cout<<"Plese Enter Your Choise :";
        cin>>choise;
        switch(choise)
            {
                case 1:Bubblesort(),print();
                break;
                case 2: InsertionSort();
                break;
                //case 3:getdata();
                //break;

            }
        }
         while(choise!=5);
        return 0;
    }