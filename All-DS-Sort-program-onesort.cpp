//Bubble sort impliment using array
#include<iostream>
using namespace std;

    void Bubblesort()
    {
         int n;
        cout<<"Enter the size of an array:";
        cin>>n;
        int arr[n];
        cout<<"Enter the value Ascending or jumbled order :"<<endl;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

         for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<n-i-1;j++)
            {
                if(arr[j]<arr[j+1])
                {
                    int temp;
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
        cout<<"Discending order array element are:"<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<endl;
        }
        
    } 

    //Insertion sort using array 

    void InsertionSort()
    {
        int n;
        cout<<"Enter the size of an array:";
        cin>>n;
        int arr[n];
        cout<<"Enter the value of Only Jumble order:"<<endl;
        for(int i=0;i<n;i++)
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

        cout<<"The all element Ascendig order is :"<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<endl;
        }

    }
   

//Selection Sort impliment using array

    void SelectionSort(int min)
    {
        int n;
        cout<<"Enter the size of an array :";
        cin>>n;
        int arr[n];
        cout<<"Enter the value of Ascending order :"<<endl;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }


        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(arr[j]>arr[min])
                {
                    min=j;
                }
            }
            if(min!=i)
            {
                int temp;
                temp=arr[min];
                arr[min]=arr[i];
                arr[i]=temp;
            }
        }

         cout<<"The all element is Discending order :"<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<endl;
        }
    }

    
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
                case 1:Bubblesort();
                break;
                case 2: InsertionSort();
                break;
                case 3:SelectionSort(0);
                break;

            }
        }
         while(choise!=5);
        return 0;
    }