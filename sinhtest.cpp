/*khanghaicode da loiihunter*/
/*--------------------------*/
/*ai doc duoc la gay*/
/*khong code thi thoi t la mot con cho*/
#include<bits/stdc++.h>
using namespace std;
const int tests=100;
long long randum(long long l,long long r){
    return rand()%(r-l+1) +l;
}
void sinhinp(){
    ofstream inp("input.inp");

    inp.close();
}
int main(){
    srand(time(0));
    for(int  test=1;test<=tests;test++){
        sinhinp();
        system("hai.exe");
        system("trau.exe");
        if(system("fc ans.out output.out")){
            cout<<"Do ngu do an hai Huyen Anh that vong\n";
            system("pause");
            return 0;
        }
        else cout<<"Test "<<test<<": Dung roi gioi qua Huyen Anh tu hao\n";
    }
    cout<<"Troi oi dung het roi, pitien rat tu hao :>>";
    system("pause");
}
