#include<bits/stdc++.h>
using namespace std;

void spiralprint(int a[1000][1000],int m,int n){
    int startRow=0;
    int startCol=0;
    int endRow=m-1;
    int endCol=n-1;

    while(startRow<=endRow && startCol<=endCol){

        //Top row
        for(int i=startCol;i<=endCol;i++){
            cout<<a[startRow][i]<<" ";
        }
        startRow++;

        for(int i=startRow;i<=endRow;i++){
            cout<<a[i][endCol]<<" ";
        }
        endCol--;

        if(endRow>startRow){
            for(int i=endCol;i>=startCol;i--){
            cout<<a[endRow][i]<<" ";
            }
            endRow--;
        }

        if(endCol>startCol){
            for(int i=endRow;i>=startRow;i--){
            cout<<a[i][startCol]<<" ";
            }
            startCol++;
        }

    }
}

int main(){
    int m,n;
    cin>>m>>n;
    int a[1000][1000]={0};
    int val=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            val++;
            a[i][j]=val;
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    spiralprint(a,m,n);
}
