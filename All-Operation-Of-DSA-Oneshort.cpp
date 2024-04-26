//Impliment data structure Insertion Operation using array at the beginning.

#include<iostream>
using namespace std;
    int arr[20],n,i=0,x;
       // int arr[20],n,i=0,x;

    int InsertionAtThebeginning()
    {
        cout<<"Enter the size of an array:";
        cin>>n;
        cout<<"Enter the value of an array:";
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int x,i=0;
        cout<<"Enter the element at the beginning:";
        cin>>x;
        for(int i=n;i>0;i--)
        {
            arr[i]=arr[i-1];
        }
        arr[0]=x;
        n++;
        cout<<"Print the all element of an array;"<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<endl;
        }

    
    }

//Impliment data structure Insertion Operation using array at the end.

    int InsertionAtTheEnd()
    {
        int arr[20],n,i=0;
        cout<<"Enter the size of an array:";
        cin>>n;
        cout<<"Enter the value of an array:";
        for ( i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int x;
        cout<<"Enter the value at the end:";
        cin>>x;
        arr[i]=x;
        n++;
        cout<<"print the element of all:";
        for( i=0;i<n;i++)
        {
            cout<<arr[i]<<endl;
        }
    }

//Impliment data structure Insertion Operation at the any given possition using array

    int InsertioAtTheAnyGivenPossition()
    {
        int n;
        cout<<"Enter  the size of an array:";
        cin>>n;
        int arr[20],i=0;
        cout<<"Enter the value of an arry;";
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];

        }
        int pos,x;
        cout<<"Enter the possition of array:";
        cin>>pos;
        cout<<"Enter the value of an array:"; 
        cin>>x;
        for(int i=n;i>=pos-1;i--)
        {
            arr[i]=arr[i-1];         
        }
        arr[pos-1]=x;
        n++;
        cout<<"Element print of an array:";
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<endl;
        }
    }

//WAP in which tack the input of array size and array value or perform Sorting Data Ascending Order

    int SortingDataAscendingOrder()
    {
         int arr[20],n,i=0;
        cout<<"Enter the size of an array :";
        cin>>n;
        cout<<"Enter the value of an array:";
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        i=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(arr[i]>arr[j])
                {
                    int temp;
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
        cout<<"Print sorted array is :";
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<endl;
        }
    }

//WAP in which tack the input of array size and array value or perform Sorting Data Discending Order
    int SortingDataDiscendingOrder()
    {
         int arr[20],n,i=0;
        cout<<"Enter the size of an array :";
        cin>>n;
        cout<<"Enter the value of an array:";
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        i=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(arr[i]<arr[j])
                {
                    int temp;
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
        cout<<"Print sorted array is :";
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<endl;
        }
    }

//WAP in which tack the input of array size and array value or perform trevarsal operation
    int TrevarsalData_AndPrintdata()
    {
         int n;
        cout<<"Enter the size of an array:";
        cin>>n;
        int arr[n],i=1;
        cout<<"Enter the value of an array:";
        for(i=1;i<=n;i++)
        {
            cin>>arr[i];
        }
        i=1;
        cout<<"Print all element of an array:";
        for(i=1;i<=n;i++)
        {
            cout<<arr[i]<<endl;
        }
    }
//WAP in which tack the input of array size and array value user or in which search linear
    int LinearSearch()
    {
        int arr[20],n,i=0;
        cout<<"Enter the size of an array:";
        cin>>n;
        cout<<"Enter the value of an array:";
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int search;
        cout<<"Enter the element to serarch in array:";
        cin>>search;
        for(int i=0;i<n;i++)
        {
            if(arr[i]=search)
            {
                cout<<"Yes Element found at array index : "<<i<<"  value : "<<search;
                break;
            }
            
        }
        if(i==n)
        {
            cout<<"Element not found in array:";
        }
    }

//Impliment the data structure  binary searching operation iterative using array


    int BinaryIterativeSearch(int low,int high)
    {
        while(low<=high)  
        {
            int mid=(low+high)/2;
            if(arr[mid]==x)
            {
                return mid;
            }
            else if(arr[mid]>x)
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return -1;

    }


    void data()
    {
         cout<<"Enter the size of an array:";
        cin>>n;
        cout<<"Enter the value ascending order or descending order :";
        for(int i=0;i<n;i++)
            {
                cin>>arr[i];
            }
         cout<<"Enter value to search in array:";
        cin>>x;
        int result;
        result=BinaryIterativeSearch(0,n-1);
        if(result==-1)
        {
            cout<<"Sorry result not found in array:";
            
        }
        else
        {
            cout<<"Yes Element found in array:"<<result;
        }
       
    }
    
//Impliment the data structure  binary searching operation recursive using array

    int BinaryRecursiveSearch(int low,int high)
    {
        if(low>high)
        {
            return -1;
        }
        int mid=(low+high)/2;
        if(arr[mid]==x)
        {
            return mid;
        }
        else if(arr[mid]>x)
        {
            return BinaryRecursiveSearch(low,mid-1);
        }
        else
        {
            return BinaryRecursiveSearch(mid+1,high);
        }
    }


    void getdata()
    {
         cout<<"Enter the size of an array:";
        cin>>n;
        cout<<"Enter the value of an array:";
        for(int i=0;i<n;i++)
            {
                cin>>arr[i];
            }
         cout<<"Enter value to search in array:";
        cin>>x;
        int result;
        result=BinaryIterativeSearch(0,n-1);
        if(result==-1)
        {
            cout<<"Sorry result not found in array:";
            
        }
        else
        {
            cout<<"Yes Element found in array index :"<<result<<"   value:"<<x;
        }    
    }

    //Impliment Deletion at the beginning using array

    int DeletionAtTheBeginning()
    {
        int arr[20],n,i=0;
        cout<<"Enter the size of an array :";
        cin>>n;
        cout<<"Enter the value of an array :";
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n-1;i++)
        {
            arr[i]=arr[i+1];

        }
        n--;
        cout<<"print the element are :";
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<endl;
        }
    }

    //Impliment Deletion at the Ending using array

    int DeletionAtTheEnd()
    {
        int arr[20],n,i=0;
        cout<<"Enter the size of an array:";
        cin>>n;
        cout<<"Enter the value of an array:";
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        n--;
        cout<<"print the After Deletion array:";
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<endl;
        }
    }
    
    int main()
    {
         

        int choise;
        
        do{
            
            cout<<"\n\n__________________________Manu______________________________"<<endl;
            cout<<"\n1.Trevarsl data and print data";
            cout<<"\n2.Insertion at the beginning"<<"\n3.Insertion at the end"<<"\n4.Insertion at any given possition";
           cout<<"\n5.sorting Ascending order data DS";
           cout<<"\n6.sorting Discending order data DS";
           cout<<"\n7.Linear Search using array";
           cout<<"\n8.Binary search Iterative Method using array";
           cout<<"\n9.Binary search Recursive Method using array";
           cout<<"\n10.Deletion at the beginning using array";
            cout<<"\n11.Deletion at the End using array";
           cout<<"\n__________________________________________________________________"<<endl;

            cout<<"\nEnter your choise: ";
            cin>>choise;
            switch(choise)
        {
            case 1:TrevarsalData_AndPrintdata();
            break;
            case 2:InsertionAtThebeginning();
            break;
            case 3:InsertionAtTheEnd();
            break;
            case 4:InsertioAtTheAnyGivenPossition();
            break;
            case 5:SortingDataAscendingOrder();
            break;
            case 6:SortingDataDiscendingOrder();
            break;
            case 7:LinearSearch();
            break;
            case 8:BinaryIterativeSearch(0,n-1),data();
            break;
            case 9:BinaryRecursiveSearch(0,n-1),getdata();
            break;
            case 10:DeletionAtTheBeginning();
            break;
            case 11:DeletionAtTheEnd();
            break;
           
            
        }

        }
        
        while(choise!=15);
        
        
        
        return 0;
    }
