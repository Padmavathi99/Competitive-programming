#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool isSubSequence(string str1, string str2, int m, int n) 
{ 
   int j = 0;  
 
   for (int i=0; i<n&&j<m; i++) 
       if (str1[j] == str2[i]) 
         j++; 
 return (j==m); 
} 

int main(){
    bool isSubSequence(string str1, string str2, int m, int n);
	string s,t;
	char ch='a';
	int i,n,c=0;
	cin>>s>>t;
	
	
	if(t.length()>s.length()){
		cout<<"need tree";
		return 0;
	}
	/*if(s.length()==t.length()){
		for(i=0;i<s.length();i++){
			if(t.find_first_of(s[i])==-1){
				cout<<"need tree";
				return 0;
			}
		}
			cout<<"array";
			return 0;
	}*/
	//if(s.length()>t.length()){
	
		if(isSubSequence(t,s,t.length(),s.length())){
		    cout<<"automaton";
		    return 0;
		}
		
		
			for(i=0;i<t.length();i++){
				if(s.find_first_of(t[i])==-1){
					cout<<"need tree";
					return 0;
				}
				
			}
			if(s.length()==t.length()){
			   sort(s.begin(),s.end());
			   sort(t.begin(),t.end());
			   
			   if(s==t){
				cout<<"array";
				return 0;
			   }
			   else{
			       cout<<"need tree";
			       return 0;
			   }
			    
			}
			
			
			for(i=0;i<s.length();i++){
			    
				if(t.find_first_of(s[i])==-1){
				    s.erase(s.begin()+i);
				    i--;
				    
				}
				
			}
			for(i=0;i<t.length();i++){
			    if(count(s.begin(),s.end(),t[i])<count(t.begin(),t.end(),t[i])){
			       cout<<"need tree ";
			       return 0;
			    }
                			      
			        
			}
			cout<<"both";
				
			
	//}
		return 0;

}
