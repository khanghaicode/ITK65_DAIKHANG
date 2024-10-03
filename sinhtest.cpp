/*khanghaicode da loiihunter*/
/*--------------------------*/
/*Ai doc cai nay la gay*/
/*Whoever reads this is gay*/
/*Celui qui lit ceci est gay*/
/*Тот, кто это читает тот гей*/
/*これを読んだ人はゲイです*/
/*Wer das liest, ist schwul*/
/*读到此文的人都是同性恋*/
/*ใครอ่านเป็นเกย์*/
/*Den som läser detta är gay*/
/*이 글을 읽는 사람은 게이입니다*/
/*من يقرأ هذا فهو مثلي الجنس*/
/*khong code thi thoi t la mot con cho*/
/*chim trong man dem nazuna cuu lay toi*/
#include<bits/stdc++.h>
using namespace std;
const int TESTS=100;
long long randum(long long l,long long r){
    return rand()%(r-l+1) +l;
}
void sinhinp(){
    ofstream inp("input.inp");

    inp.close();
}
int main(){
    srand(time(0));
    for(int  test=1;test<=TESTS;test++){
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
