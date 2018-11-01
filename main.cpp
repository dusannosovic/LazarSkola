#include <iostream>
#define MAXSIZE 30
using namespace std;
int n;
int A[MAXSIZE][MAXSIZE];

bool MinUVrsti(int i,int j){
    int min = A[i][j];
    for(int k = 0;i<n;i++){
        if(A[i][k] < min)
            return false;
    }
    return true;
}
bool MinUDij1(int i, int j){
    int min = A[i][j];
    int k = i;
    int m = j;
    if(i>j){
        while(i<n){
            if(A[k][m]<min)
                return false;
            k++;
            m++;
        }
        return true;
    }
    else if(j>i){
        while(j<n){
            if(A[k][m]<min)
                return false;
            k++;
            m++;
        }
        return true;
    }else if(j==i){
        while(j<n&&i<n){
            if(A[k][m]<min)
                return false;
            k++;
            m++;
        }
        return true;
    }
    return false;
}
int main()
{
    cout<<"Unesite vrednost n";
    cin>>n;
    cout<<endl;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cin>>A[i][j];
        }
    }
    if(MinUVrsti(1,1)){
        cout<<"Jeste";
    }else{
        cout<<"Nije";
    }
    if(MinUDij1(1,2)){
        cout<<"Najmanji u dijagonali";
    }else{
        cout<<"Nije najmanji u dijagonali";
    }
    return 0;
}
