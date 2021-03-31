#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;


void powerset(string input,int index,string output){

   ll len=input.length();
   if(len==index){
    return;
   }

   cout<<output<<endl;

   for(ll i=index+1;i<len;i++){
    output+=input[i];
    powerset(input,i,output);
    output.erase(output.size()-1);
   }
   return;

}
int main(){
   string s1,s2="";
   cin>>s1;
   powerset(s1,-1,s2);
}
