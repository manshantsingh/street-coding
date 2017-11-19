#include <iostream>
#include <string>
#include <sstream>
#include <set>
#include <cctype>
using namespace std;
string lower(string str){
    for(char & c: str){
        c=tolower(c);
    }
    return str;
}
int main(){
    string line;
    set<string> used;
    while(getline(cin,line)){
        istringstream iss(line);
        ostringstream out;
        string word;
        while(iss>>word){
            string lw=lower(word);
            if(used.find(lw)==used.end()){
                out<<" "<<word;
                used.insert(lw);
            }
            else out<<" .";
        }
        if(line.size()>1)cout<<out.str().substr(1);
        cout<<endl;
    }
    return 0;
}