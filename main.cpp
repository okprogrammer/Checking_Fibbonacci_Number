#include <iostream>
#include<vector>
/* 0 -4 -6 0 -7 -6
-1 -2 -6 -8 -3 -1
-8 -4 -2 -8 -8 -6
-3 -1 -2 -5 -7 -4
-3 -5 -3 -6 -6 -6
-3 -6 0 -8 -6 -7 */
using namespace std;


int main(){
    int b[4][4]={{0}};
    vector< vector<int> > arr(6,vector<int>(6));
    for(int arr_i = 0;arr_i < 6;arr_i++){
       for(int arr_j = 0;arr_j < 6;arr_j++){
          cin >> arr[arr_i][arr_j];
       }
    }

    for(int i=0;i<4;i++)
{
    for(int j=0;j<4;j++)
    {
        b[i][j]=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
    }
}

for(int i=0;i<4;i++)
{
    for(int j=0;j<4;j++)
    {
        if(b[i][j]>b[0][0])
            b[0][0]=b[i][j];

    }
}
cout<<b[0][0]<<endl;
    return 0;
}
