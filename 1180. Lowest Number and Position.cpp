// Bee 1180
#include <iostream>
#include <limits.h>
using namespace std;

void input_array(int arr[], int size){
    for(int i = 0; i < size; i++){
        cin>>arr[i];
    }
}

int main() {
     
    int ans = INT_MAX, N, postion;
    cin>>N;
    int storage[999];

    input_array(storage, N);

    for(int i = 0; i < N; i++){
        if(storage[i] < ans){
            ans = storage[i];
            postion = i;
        }
    }

    cout<<"Menor valor: "<<ans<<endl;
    cout<<"Posicao: "<<postion<<endl;
    //Bee 1180

    return 0;
}
