#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<vector<int>> matrix;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>matrix[i][j];
        }
    }

    int count=0;
    int ans=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(matrix[i][j]==1)
            {
                  int k=i;
                  int l=j;
              
                while (l!=0)
                {
                    count++;
                    l++;
                
                }
                
                
                
            }

        }
}
}