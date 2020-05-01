//
// Created by RENATO RODRIGUEZ on 30/04/2020.
//

#ifndef SEM4_1_P482_H
#define SEM4_1_P482_H

#include<vector>
#include<algorithm>
#include<iostream>
void p482(std::vector<int> &v, std::vector<float> &v_){
    while(!is_sorted(v.begin(),v.end())) {
        auto it = v_.begin();
        for (auto i = v.begin(); i != v.end(); ++i) {
            if (*i > *(i + 1) && i != v.end() - 1) {
                std::swap(*i, *(i + 1));
                std::swap(*it,*(it + 1));
            }
            ++it;
        }
    }
    std::cout << std::endl;
    for(auto &item:v_){
        std::cout << item << std::endl;
    }
}
#endif //SEM4_1_P482_H
