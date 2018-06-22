//
//  level2_productMatrix.cpp
//  programmers_training
//
//  Created by Chanwoo Noh on 2017. 10. 22..
//  Copyright © 2017년 Chanwoo Noh. All rights reserved.
//

#include <vector>
using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;
    answer.resize(arr1.size());
    for (int i = 0; i < answer.size(); i++) {
        answer[i].resize(arr2[0].size(), 0);
        for (int j = 0; j < answer[i].size(); j++) {
            for (int k = 0; k < arr1[0].size(); k++) {
                answer[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
    return answer;
}