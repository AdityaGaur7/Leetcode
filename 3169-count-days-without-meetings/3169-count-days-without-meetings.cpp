class Solution {
public:
    int countDays(int d, vector<vector<int>>& m) {
       
        if (m.empty()) return d;
    
    vector<pair<int, int>> interv;
    for (const auto& meet : m) {
        interv.emplace_back(meet[0], meet[1]);
    }

    sort(interv.begin(), interv.end());

    vector<pair<int, int>> pair;
    pair.push_back(interv[0]);
    for (int i = 1; i < interv.size(); ++i) {
        if (interv[i].first <= pair.back().second) {
            pair.back().second = max(pair.back().second, interv[i].second);
        } else {
            pair.push_back(interv[i]);
        }
    }

    int av = 0;
    int pr = 0;

    for (const auto& inte : pair) {
        av += inte.first - pr - 1;
        pr = inte.second;
    }

    av += d - pr;

    return av;

    }
};