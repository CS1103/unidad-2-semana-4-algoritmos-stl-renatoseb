//
// Created by RENATO RODRIGUEZ on 30/04/2020.
//

#ifndef SEM4_1_P612_H
#define SEM4_1_P612_H

#include<string>
#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;

void p612(vector<string> words){
    vector<int> pesos;
    for(auto &word_:words) {
        size_t cont = 0;
        string word_cp = word_;
        while (prev_permutation(word_cp.begin(), word_cp.end())) {
            cont++;
        }
        pesos.push_back(cont);
    }
    while(!is_sorted(pesos.begin(),pesos.end())) {
        auto it = words.begin();
        for (auto i = pesos.begin(); i != pesos.end(); ++i) {
            if (*i > *(i + 1) && i != pesos.end() - 1) {
                std::swap(*i, *(i + 1));
                std::swap(*it,*(it + 1));
            }
            ++it;
        }
    }
    std::cout << std::endl;
    for(auto &item:words){
        std::cout << item << std::endl;
    }
}
#endif //SEM4_1_P612_H
