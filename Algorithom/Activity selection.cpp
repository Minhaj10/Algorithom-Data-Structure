#include <bits/stdc++.h>
using namespace std;

struct Activitiy
{
    int start, finish;
};


bool activityCompare(Activitiy s1, Activitiy s2)
{
    return (s1.finish < s2.finish);
}


void printMaxActivities(Activitiy arr[], int n)
{

    sort(arr, arr+n, activityCompare);

    cout << "Following activities are selected n";


    int i = 0;
    int flag=0;



    for (int j = 1; j < n; j++)
    {
      if (arr[j].start >= arr[i].finish)
      {
          flag++;
          i = j;
      }
    }
    cout<<"Total activity "<<flag+1<<endl;
}

int main()
{
   Activitiy ar[10000];
   int n;
   cin>>n;
   for(int i=0;i<n;i++){
    cin>>ar[i].start;
    cin>>ar[i].finish;
   }

    printMaxActivities(ar, n);
    return 0;
}
