#include<iostream>
#include<queue>
using namespace std;

class heap
{ 
    //max heap
   public :
   int arr[100];
   int size=0;
   

   void insert(int value)
   {
      size=size+1;
      int index=size;
      arr[index]=value;
      while (index>1)
      {
      int parent = index/2;
      if(arr[parent]<arr[index])
      {
      swap(arr[parent],arr[index]);
      index = parent;
      }
      else
        return ;

   }
   }
    void deletefromheap()
    {   // put last element in first idex
           arr[1]=arr[size];

           // step 2  remove the last element
           size--;
           int i=1;
           // step 3 put the root node in its correct position
           while(i<size)
           {   int leftindex=i*2;
               int rightindex=i*2+1;
               if(leftindex<=size && arr[i]<arr[leftindex])
               {
                swap(arr[i],arr[leftindex]);
                i=leftindex;
               }
               // here else if solve all the cases but some case it failed like for array 55 50 60 30 so i am using if condition here
               if(rightindex<=size && arr[i]<arr[rightindex])
               {
                swap(arr[i],arr[rightindex]);
                i=rightindex;
               }
               else
                 return ;

           }

    }

    void print()
    {
       for(int i=1;i<=size;i++)
       cout<<arr[i]<<" ";
       cout<<endl;
    }


};

void heapify(int arr[],int n,int i)
{
     int largest=i;
     int leftindex=i*2;
     int rightindex=i*2 +1;
     if(leftindex<=n && arr[largest]<arr[leftindex])
       largest=leftindex;
    if(rightindex<=n && arr[largest]<arr[rightindex])
    largest=rightindex;

// if any of above if codition satisfy the it is not heap  and largest value change to either left index or right index

    if(largest!=i)
    {
        swap(arr[i],arr[largest]);
        //after swapping again check the remaining is heap or not 
        heapify(arr,n,largest);

    }



}

void heapsort(int arr[],int n)
{
    int t= n;
    while(t>1)
    {  //step1 swap
        swap(arr[1],arr[t]);
        t--;
        //step2 root ko shi position pr leke jana h
        heapify(arr,t,1);


    }
   

}

int main()
{
  heap h;
  h.insert(55);
  h.insert(54);
  h.insert(53);
  h.insert(50);
  h.insert(52);
  h.print();
  h.deletefromheap();
  h.print();

  int arr[6]={-1,54,53,55,52,50};
  int n=5;
  //heap creation from array
  for (int i=n/2;i>0;i--)
  {
  heapify(arr,n,i);
  }
  for(int i=1;i<=n;i++)
  cout<<arr[i]<<" ";
  cout<<endl;

  heapsort(arr,n);
  //sorted array is
  for(int i=1;i<=n;i++)
  cout<<arr[i]<<" ";




  // using priority queue to  build a heap

  //max heap
  priority_queue<int> pq;
  pq.push(4);
  pq.push(1);
  pq.push(5);
  pq.push(3);
  // it is max heap by default
  cout<<"top element is : "<<pq.top()<<endl;  


  //minheap
  priority_queue<int,vector<int>,greater<int> > minheap;
  minheap.push(4);
  minheap.push(1);
  minheap.push(5);
  minheap.push(3);
  cout<<"top element is: "<<minheap.top()<<endl;
}
