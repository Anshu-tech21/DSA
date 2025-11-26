#include<iostream>
#include<vector>
using namespace std;

vector<pair<int,int>> linearSearch(int D[][3],int row , int col,int k){
    vector<pair<int,int>> p;
    for (int i =0 ; i<row;i++){
        for(int j = 0 ; j<col; j++){
            if(k == D[i][j]){
               //cout << "Key found at position (" << i << ", " << j << ")\n";
                p.push_back({i,j});
            }
        }
    }

    if(p.empty()){
        cout<<"Key not found in matrix ";
    }else{
        cout<<"Key found at Position";
         for (auto &p : p) {
            cout << "(" << p.first << ", " << p.second << ")\n";
        }
    }
    return p;
}

int main(){
   // int D[3][3]={{1,1,1},{2,2,2},{3,3,3}};
      int D[3][3];
    int row = 3;
    int col = 3;
    int k;

    //cout<<n;
    //cout<<D[2][2];

    /*for (int i =0 ; i<row;i++){
        for(int j = 0 ; j<col; j++){
            cout<<D[i][j]<<" ";
        }
        cout<<endl;
    }*/

    for(int i = 0 ; i<row ; i++){
        for(int j = 0 ; j < col ; j++){
            cout << "Enter element at position (" << i << "," << j << "): ";
            cin>>D[i][j];
        }
        cout<<endl;
    }

    for (int i =0 ; i<row;i++){
        cout<<"| ";
        for(int j = 0 ; j<col; j++){
            
            cout<<D[i][j]<<" ";
        }
        cout<<"|"<<endl;
    }

    cout<<"Enter the key : ";
    cin>>k;

    linearSearch(D,row,col,k);
    
}