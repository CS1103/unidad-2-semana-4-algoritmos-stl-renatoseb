//
// Created by RENATO RODRIGUEZ on 29/04/2020.
//

#ifndef SEM4_1_P229_H
#define SEM4_1_P229_H

#include<vector>
#include<string>
#include<iostream>
#include<algorithm>


void p229(vector<int> v){
    size_t cont = 0;
    while(!is_sorted(v.begin(),v.end())) {
        for (auto i = v.begin(); i != v.end(); ++i) {
            if (*i > *(i + 1) && i != v.end() - 1) {
                std::swap(*i, *(i + 1));
                cont++;
            }
        }
    }
    std::cout << "Se hizo " << to_string(cont) << " permutaciones.";
}

#endif //SEM4_1_P229_H
