//
// Created by RENATO RODRIGUEZ on 30/04/2020.
//

#ifndef SEM4_1_P11136_H
#define SEM4_1_P11136_H

void p11136(){
    list<int> fact;
    int monto = 0;
    int days;
    cin >> days;
    for(size_t i = 0; i<days; ++i){
        int c_fact; cin >> c_fact;
        for(size_t i = 0; i<c_fact;++i){
            int imp; cin >> imp;
            fact.push_back(imp);
        }
        fact.sort();
        int mayor = fact.back();
        int menor = fact.front();
        monto += mayor - menor;
        fact.pop_back(); fact.pop_front();
    }
    cout << monto <<  endl;

}
#endif //SEM4_1_P11136_H
