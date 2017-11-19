#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;
class Person{
public:
    string first,last;
    Person(string f, string l): first(f), last(l){}
};
bool operator<(const Person& a, const Person& b){
    if(a.last==b.last) return a.first<b.first;
    else return a.last<b.last;
}
int main(){
    string first, last;
    vector<Person> v;
    map<string,int> m;
    while(cin>>first>>last){
        v.push_back(Person(first,last));
        m[first]++;
    }
    sort(v.begin(), v.end());
    for(Person p: v){
        cout<<p.first;
        if(m[p.first]>1) cout<<" "<<p.last;
        cout<<endl;
    }
    return 0;
}