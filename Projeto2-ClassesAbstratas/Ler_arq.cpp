#include <iostram>
#include <string>
#include <sstring>
#include <fstream>

void leitura(istream entrada){

    while(fin.good()){
        getline(fin,linha);
        if(!fin.good()){
            break;
        }
        cout << linha << endl;
        linha += " ";
        ss = stringstream(linha);
        ss >> cmd;
        cout << cmd << endl;

        if(cmd.compare("dim") == 0){
            int larg, alt;
            ss >> larg >> alt;
            //  tela = Screen(larg, alt);
            cout << "larg = " << larg << endl;
            cout << "alt  = " << alt << endl;

        }
    }
}
