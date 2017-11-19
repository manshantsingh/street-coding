#include <bits/stdtr1c++.h>
using namespace std;
int main(){
    map<char, string> m{
        {'a',"@"},
        {'b',"8"},
        {'c',"("},
        {'d',"|)"},
        {'e',"3"},
        {'f',"#"},
        {'g',"6"},
        {'h',"[-]"},
        {'i',"|"},
        {'j',"_|"},
        {'k',"|<"},
        {'l',"1"},
        {'m',"[]\\/[]"},
        {'n',"[]\\[]"},
        {'o',"0"},
        {'p',"|D"},
        {'q',"(,)"},
        {'r',"|Z"},
        {'s',"$"},
        {'t',"']['"},
        {'u',"|_|"},
        {'v',"\\/"},
        {'w',"\\/\\/"},
        {'x',"}{"},
        {'y',"`/"},
        {'z',"2"},
    };
    string line;getline(cin,line);
    for(char c: line){
        auto it=m.find(tolower(c));
        if(it!=m.end()) cout<<it->second;
        else cout<<c;
    }
    cout<<endl;
    return 0;
}