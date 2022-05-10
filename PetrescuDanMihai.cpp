#include <bits/stdc++.h>
using namespace std;

class Server
{
    string nume, mesaj;
public:
    Server()
    {
        nume="nedefinit";
        mesaj="nedefinit";
    }

    Server(string numee, string mesajj)
    {
        nume=numee;
        mesaj=mesajj;
    }

    Server(Server const &Client)
    {
        nume= Client.nume;
        mesaj= Client.mesaj;

    }

    string getNume()
    {
        return nume;
    }
    string getMesaj()
    {
        return mesaj;
    }
    void setName(string numeee)
    {
        nume=numeee;
    }
    void setMesaj(string mesajjj)
    {
        mesaj=mesajjj;
    }
    
    
};

int main() 
{
    
    
    vector<Server> Baza1,Baza2;
    Server ob1;
    string name, message;
    
    cout<<"introduceti numele si mesajul clientului sub forma:"<<'\n';
    cout<<"nume"<<'\n'<<"mesaj"<<'\n';
    while(getline(cin, name))
    {   
        getline(cin,message);
        
        ob1.setName(name);
        ob1.setMesaj(message);
        Baza2.push_back(ob1);
        
       }

    for (int i = 0; i < Baza2.size(); i++)
    {
        cout << Baza2[i].getNume() << " " << Baza2[i].getMesaj() << '\n';
    }

    return 0;

}
