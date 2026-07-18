//Program 1: Input and Display a String


#include<iostream>
#include<string>
using namespace std;
int main(){
  string str;
 cout<<"enter any string"<<endl;
getline(cin,str);
cout<<"your string is"<<" "<<endl;
return 0;

// programe 2 string length
#include<iostream>
#include<string>
using namespace std;
int main(){
  string std;
cout<<"enter your string"<<endl;
getline(cin,str);

cout<<"length of your string is <<" "<<str.length()<<endl;
  return 0;
}



//programe 3  reverse of string 
#include<iostream>
#include<string>
using namespace std;
int main(){
  string std;
cout<<"enter your string " <<endl;
  getline(sin,str);

int s=0;
int e=str.length()-1;
while(s<e){
swap(str[s],str[e]);
s++;
e--;
}
cout<<"reversed of string is"<<str;
return 0;
}




//programe 4 check palindrom
#include<iostream>
#include<string>
using namespace std;
 int main(){
   string str, temp;
cout<<"enter your string "<<endl;
getline(cin,str);
temp=str;
 int s=0;
int e=str.length()-1;
while(s<e){
swap(temp[s],temr[e]);
s++;
e--;
}
if(str==temp){
cout<<temp<<" "<<"is a palindrom"<<endl;
}
else{
cout<<temp<<" "<<"its not a palindrom"<<endl;
}
return 0;
 }


  
//programe 5 count vowel

#include<iostream>
#include<string>
using namespace std;
int main(){
     string str;
        int count=0;
     cout<<"enter your string "<<endl;
     getline(cin,str);
     //int count=0;
     for(int i=0;i<str.length();i++){
         char ch= tolower(str[i]);
         if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
             count++;
         }
         }
         cout<<"no. of vowel is "<<count <<endl;
     
     return 0;
}




//programe 6 count word
#include<iostream>
#include<string>
using namespace std;
int main (){
  string str;
cout<<"enter sentence"<<endl;
getline(cin,str);

int word=0;
for(int i=0;i<str.length();i++){
if( str[i]!=' '&&(i==0||str[i-1]=' ')){
word++;
}
}
cout<<"no of word is"<< str<<endl;

  return 0;
}

  

   
