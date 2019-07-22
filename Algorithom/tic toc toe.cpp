#include<bits/stdc++.h>
using namespace std;
char arr[3][3]=
{

    {
        '1','2','3'
    },

    {
        '4','5','6'
    },

    {
        '7','8','9'
    },
};
void printmatrix()
{

    for(int i=0;i<3;i++){

        cout<<" ___ ___ ___"<<endl;
        cout<<"|   |   |   |"<<endl;
        cout<<"| "<<arr[i][0]<<" | "<<arr[i][1]<<" | "<<arr[i][2]<<" |"<<endl;
        cout<<"|___|___|___|"<<endl;

    }
}
bool validity(char in){
    return in>='1' && in<='9';

}
bool used(char in){
      for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]==in){
                return false;
            }

        }
      }
      return true;
}
void insertin(char in,char playersym){
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]==in){
                arr[i][j]=playersym;
            }
        }
     }
}
int main()
{
    cout<<"Game starting"<<endl;
     printmatrix();
     char player1,player2;
     cout<<"player 1 choose your symbol-";
     cin>>player1;
     cout<<"player 2 choose your symbol-";
     cin>>player2;
     cout<<"Oooooh yeah! game started"<<endl;

     int cnt=0;
     bool primaryplayer=true;
     while(cnt<9){
            if(primaryplayer){
        cout<<"Player 1 turn-->";
        char ch;
        cin>>ch;
        bool valid=validity(ch) && !used(ch);
        if(valid){
            insertin(ch,playersym);
            primaryplayer =false;
            cnt++;
        }
        else cout<<"invalid"<<endl;
            }
        else {
                cout<<"Player 2 turn-->";
        char ch;
        cin>>ch;
        bool valid=validity(ch) && !used(ch);
        if(valid){
            insertin(ch,playersym);
            primaryplayer =false;
            cnt++;
        }
        else cout<<"input invalid"<<endl;
        }
     }
}
