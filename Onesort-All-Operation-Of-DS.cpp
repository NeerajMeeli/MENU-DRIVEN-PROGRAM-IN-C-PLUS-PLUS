// Implimentation of Trevarsal Operation Using arrry DS

#include<iostream>
using namespace std;
    int n;
    int arr[10],search,i;

    int TrevarsalOperation()
    {
         int n;
        cout<<"Enter the size of an array:";
        cin>>n;
        int arr[n],i=0;
        cout<<"Enter the value of an array:";
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];

        }
        cout<<"Trevers the all element :";
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<endl;
        }
    }

    // Insertion at the beginning using array

    int InsertionAtTheBeginning()
    {
        int n;
        cout<<"Enter the size of an array:";
        cin>>n;
        int arr[n],i=0;
        cout<<"Enter the value of an array:";
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int x;
        cout<<"Enter the value of at the beginning:";
        cin>>x;
        
        for(int i=n;i>0;i--)
        {
            arr[i]=arr[i-1];
        }
        arr[0]=x;
        n++;
        cout<<"Insertion at the beginning After print the balue:";
            for(int i=0;i<n;i++)
            {
                cout<<arr[i]<<endl;
            }
    }

    //Insertion at the end using array

    int InsertionAtTheEnd()
    {
        int n;
        cout<<"Enter the size of an array:";
        cin>>n;
        int arr[n],i=0;
        cout<<"Enter the value of an array:";
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int x;
        cout<<"Enter the value at the end:";
        cin>>x;
        arr[i]=x;
        n++;
        cout<<"After insert at the end value print :";
        for(i=0;i<n;i++)
        {
            cout<<arr[i]<<endl;
        }
    }

    // Insertion at the any given possition using array

    int InsertionAtTheAnyGivenPossition()
    {
        int n;
        cout<<"Enter the size of an array:";
        cin>>n;
        int arr[n],i=0;
        cout<<"Enter the value of an array:";
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int possition,value;
        cout<<"Enter choise any given possition :";
        cin>>possition;
        cout<<"Enter the value of Insertion :";
        cin>>value;
        for(int i=n;i>=possition-1;i--)
        {
            arr[i+1]=arr[i];
        }
        arr[possition-1]=value;
        n++;
        cout<<"After insertion print the all element :";
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<endl;
        }


    }

    // Sorting Ascending ordre using array

    int SortingAscendingOrder()
    {
        int n;
        cout<<"Enter the size of an array:";
        cin>>n;
        int arr[n],i=0;
        cout<<"Enter the value of jumbled order : ";
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

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

            cout<<"After print the value of Ascending order :";
            for(int i=0;i<n;i++)
                {
                    cout<<arr[i]<<endl;
                }
        
    }

    // Sorting Descending order using array

    int SrtingDescendingOrder()
    {
        int n;
        cout<<"Enter the size of an array :";
        cin>>n;
        int arr[n],i=0;
        cout<<"Enter the value of jumbled order :";
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

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

        cout<<"After print the Descending order value:";
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<endl;
        }

    }

    // Linear search uing array

    int LinearSearch()
    {
        int n;
        cout<<"Enter the size of an array:";
        cin>>n;
        int arr[n],i;
        cout<<"Enter the value of an array:";
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        int search;
        cout<<"Enter the value of search in array:";
        cin>>search;

        for(int i=0;i<n;i++)
        {
            if(arr[i]=search)
            {
                cout<<"Yes Element found in array index :"<<i<<"  Value :"<<search;
                break;
            }
           
           
        }

        if(i==search)
        {
            cout<<"Sorry Element not found in array:";
        }

    }

    // Binary Search Iterative method using array
    

    int BinarySearchIterativeMethod(int low,int high)
    {
        while(low<=high)
        {
            
            int mid=arr[i];
            mid=(low+high)/2;
            if(arr[mid]==search)
            {
                return mid;
            }
            else if(arr[mid]>search)
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

     void BinarySearchInputData()
    {
        int n;
        cout<<"Enter the size of an array:";
        cin>>n;
        
        cout<<"Enter the value of Ascending order or descending order :";
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        
        cout<<"Enter the value to search in array:";
        cin>>search;
        
        int result;
        result=BinarySearchIterativeMethod(0,n-1);
        if(result==-1)
        {
            cout<<"Element not found in array:";
        }
        else
        {
            cout<<"Element found in array index :"<<result<<"  Value :"<<search;
        }
        
       
    }

    // Binary search Recursive method using array

    int BinarySearchRecursiveMethod(int low,int high)
    {
        if(low>high)
        {
            return -1;
        }
        else
        {
            int mid=(low+high)/2;
            if(arr[mid]==search)
            {
                return mid;
            }
            else if(arr[mid]>search)
            {
                return BinarySearchRecursiveMethod(low,mid-1);
            }
            else
            {
                return BinarySearchRecursiveMethod(mid+1,high);
            }
        }
    }

    void RecusiveInput()
    {
        int n;
        cout<<"Enter the size of an array:";
        cin>>n;
        cout<<"Enter the value of only Ascending order :";
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        cout<<"Enter the value to search in array:";
        cin>>search;

        int result;
        result= BinarySearchRecursiveMethod(0,n-1);
        if(result==-1)
        {
            cout<<"Element not found in array:";
        }
        else
        {
            cout<<"Element found in array Index :"<<result<<"  value :"<<search;
        }

    }

    // Deletion at the beginning using array

    int DeletionAtTheBeginning()
    {
        int n;
        cout<<"Enter the size of an array:";
        cin>>n;
        int arr[n],i=0;
        cout<<"Enter the value of an array:";
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        for(int i=0;i<n-1;i++)
        {
            arr[i]=arr[i+1];
        }
        
        n--;

        cout<<"After print the value of array:";
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<endl;
        }
    }

    // Deletion at the end using array

    int DeletionAtTheEnd()
    {
        int n,i=0;
        cout<<"Enter the size of an array:";
        cin>>n;
        int arr[n];
        cout<<"Enter the value of an array:";
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        n--;
        
        i=0;
        cout<<"After Deletion at the end element print :";
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<endl;
        }
    }

   
    int main()
    {
        int choise;
        do{
        cout<<"\n___________________________MENU______________________________";
        cout<<"\n1.Trevarsal operation of data sturcture\n2.Insertion at the beginning\n";
        cout<<"\n3.Insertion at the end\n4.Insertion at any given possition\n5.Sorting Ascending order\n";
        cout<<"\n6.Sorting Descending order\n7.Linear Search Using array\n8.Iterative search method\n";
        cout<<"\n9.Recursive search method\n10.Deletion at the beginning\n11.Deletion at the end"<<endl;
        cout<<"\n_________________________________________________________________"<<endl;
        cout<<"Enter Your choise  :  ";
        cin>>choise;
        switch(choise)
            {
                case 1:TrevarsalOperation();
                break;
                case 2:InsertionAtTheBeginning();
                break;
                case 3:InsertionAtTheEnd();
                break;
                case 4:InsertionAtTheAnyGivenPossition();
                break;
                case 5:SortingAscendingOrder();
                break;
                case 6:SrtingDescendingOrder();
                break;
                case 7: LinearSearch();
                break;
                case 8:BinarySearchIterativeMethod(0,n-1),BinarySearchInputData();
                break;
                case 9:BinarySearchRecursiveMethod(0,n-1),RecusiveInput();
                break;
                case 10:DeletionAtTheBeginning();
                break;
                case 11:DeletionAtTheEnd();
                break;

            }
        }
        while(choise!=13);

       
        return 0;
    }

    