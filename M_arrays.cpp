
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int t,n,m,x;
int a[100005];
int main(){
   cin>>t;
   while(t--){
   	int ans=0;
   	memset(a,0,sizeof(a));
     cin>>n>>m;
     for(int i=1;i<=n;i++){
        cin>>x;
		a[x%m]++;	
	 }
	 if(a[0])ans++;
	 for(int i=1;i<=m/2;i++){
	 	if(a[i]!=0&&a[i]==a[m-i])
	 	 ans++;
	 	 else
	 	 ans+=abs(a[i]-a[m-i]); 
	 }
	 cout<<ans<<endl;
}
	 return 0;
}