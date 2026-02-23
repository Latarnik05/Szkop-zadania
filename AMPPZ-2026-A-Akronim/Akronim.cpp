#include <iostream>
#include <vector>
using namespace std;

int main(){
    
    /*for(int i = 65;i<91;i++){
        char a = i;
        cout<<a<<endl;
    }*/
    int n;
    char litera;
    cin>>n; // Podaj liczbe slow
    string slowo; //wyraz uzywany podaj
    vector<string>T;
    string wyraz;
    int maksimum = 2000;
    int zbior_liter[26] = {0};
    for(int i = 0;i<n;i++)
    {
        cin>>slowo;
        litera = slowo[0];
        zbior_liter[litera - 65] = 1;
        T.push_back(slowo);
    }
    slowo = T[0];
    for(int i  = 0; i<n;i++){
        int wielkosc = T[i].size();
        wyraz = T[i];
        int licznik = 0;
        for(int e = 0;e<wielkosc;e++){
           if(zbior_liter[wyraz[e]-65] == 0 )break;
           else licznik++;
        }
        if(licznik == wielkosc and maksimum >licznik){
            maksimum = licznik;
            slowo = wyraz;
        }
    }
    if(maksimum == 2000)cout<<-1;
    else 
    {
        cout<<maksimum<<endl;
        for(int c = 0;c<maksimum;c++)
        {
            for(int x = 0;x<T.size();x++){
                if(T[x][0] == slowo[c]){
                cout<<T[x]<<" ";
                break;
                }
            }
        }
    }
    return 0; 
}

