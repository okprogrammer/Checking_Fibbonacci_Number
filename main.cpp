#include<iostream>

using namespace std;

bool checkMember(int n){

  /* Don't write main().
   * Don't read input, it is passed as function argument.
   * Return output and don't print it.
   * Taking input and printing output is handled automatically.
  */
  int a[n+1],cot=0,i;
  for(i=1;i<=n;i++)
  {
  if(i==1){
    a[1]=1;
  }
  else if(i==2)
  {
    a[2]=1;
  }
  else
    a[i]=a[i-1]+a[i-2];

  }
  for(int i=1;i<=n;i++) {
    if(a[i]==n)
      cot++;
  }
  if(cot!=0)
  {
    return true;
  }
  if(cot==0)
  {
    return false;
  }

}
int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    cout<<(bool)checkMember(n)<<endl;
    return 0;
}
