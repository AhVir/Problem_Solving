#include<bits/stdc++.h>
using namespace std;

int main(){
    string text = "My name is tanvir, you are tanvir, i'm tanvir, we all are tanvir, tanvir tanvir tanvir";
    regex rg("tanvir");

    //searching on a string
    if(regex_search(text, rg)) cout << "Test contains the word 'tanvir'" << endl;

    //finding number of occurrence 
    auto tanvir_begins = sregex_iterator(text.begin(), text.end(), rg);
    auto tanvir_ends = sregex_iterator();


    cout << "#occurrence = " << distance(tanvir_begins, tanvir_ends) << "." << endl;

    //printing all the occurrences
    for(auto i = tanvir_begins; i != tanvir_ends; i++){
        smatch match = *i;
        string matchedString = match.str();
        cout << matchedString << " ";
    }
    cout << endl;


    //printing without the target words
    // -1 -> prints without the matched words, works as a splitters
    //  0 -> prints the matched words
    copy(sregex_token_iterator(text.begin(), text.end(), rg, 0), sregex_token_iterator(), ostream_iterator<string>(cout, " "));
    cout << endl;


    // string s = "this subject has a submarine as a subsequences";
    // regex rgx("sub");
    // cout << "Entire matches: " << endl;
    // regex_token_iterator<string::iterator> strItr(s.begin(), s.end(), rgx);
    // while(strItr != rend) cout << *strItr++ << ", "; 
    // cout << endl;

    return 0;
}