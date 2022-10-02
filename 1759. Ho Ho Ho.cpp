//Bee 1759
<<<<<<< HEAD
=======
//I have updated this to git "developer" branch.
//Thanks you github
//This is from testing branch.

>>>>>>> 52fcccd407b8588b470c070b00e38d090589dab5

#include <iostream>
using namespace std;

void ho(){
    cout<<"Ho";
}

int main() {
    
    int N;
    cin>>N;

    for(int i = 1; i <= N; i++){
        ho();
        if(i < N)cout<<" ";
        else if(i == N)cout<<"!"<<endl;
    }

    return 0;
}
