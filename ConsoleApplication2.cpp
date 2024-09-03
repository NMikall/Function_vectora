#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <set>
#include <vector>
#include <list>
#include <iterator>
#include "queue"
#include "stack"
#include "deque"
#include <cmath>

using namespace std;

vector<int> vec(vector<int>& vectors, int n) {
    for (int j = 0; j < vectors.size(); j++) {
        vectors[j] += n;
    }
    return vectors;
}