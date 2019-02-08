/*
*Source：http://pkuic.openjudge.cn/dg1/5/
*Auther：Shz
*Data  : February 8, 2019  
*/
#include<iostream>
#include<algorithm>

using namespace std;

char ch[70];
int a[70],n,ans;

int find(int l,int r)
{
	if(l==r) return a[l];
	int sum=0;
	for(int i=l;i<r;++i) 
	    if(ch[i]=='+') 
            sum=max(sum,find(l,i)+find(i+1,r));
	    else if(ch[i]=='*')
            sum=max(sum,find(l,i)*find(i+1,r));
            
	return sum;
}
int main()
{
	int i;
    
	scanf("%d",&n);
	for(i=1;i<=n;++i) {
        scanf("%d %c",&a[i],&ch[i]);
        a[n+i]=a[i];
        ch[n+i]=ch[i];
    }
	for(i=1;i<=n;++i) { 
        ans=max(ans,find(i,i+n-1));
	    printf("%d\n",ans);
    }
	return 0;
}