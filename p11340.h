//
// Created by RENATO RODRIGUEZ on 30/04/2020.
//

#ifndef SEM4_1_P11340_H
#define SEM4_1_P11340_H

void p11340(){
    map<char,int> caracteres;
    int cases; cin >> cases;
    for(size_t i=0; i<cases; ++i){
        int n_caracteres; cin >> n_caracteres;
        for(size_t i=0; i<n_caracteres ; ++i){
            char c_; int val_;
            cin >> c_ >> val_;
            caracteres.insert(pair<char,int>(c_,val_));
        }
    }
    float monto = 0;
    int lines; cin >> lines; lines++;
    while(lines--){
        string line;
        getline(cin,line);
        for(auto item:line){
            if(item == caracteres.find(item)->first) {
                monto += caracteres.find(item)->second;
            }
        }
    }
    cout << fixed << setprecision(2) << monto/100 << "$";
}
#endif //SEM4_1_P11340_H
