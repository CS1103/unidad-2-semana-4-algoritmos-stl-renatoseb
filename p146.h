//
// Created by RENATO RODRIGUEZ on 29/04/2020.
//

#ifndef SEM4_1_P146_H
#define SEM4_1_P146_H

#include<vector>
#include<algorithm>
#include<string>
using namespace std;

void p146(string it){
    vector<char> vec;
    for(size_t i=0; i<it.size();++i){
        vec.push_back(it[i]);
    }
    next_permutation(vec.begin(),vec.end());
    for(auto &item:vec){
        cout << item;
    }
    cout << endl;
};
#endif //SEM4_1_P146_H
