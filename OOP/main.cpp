#include <vector>
#include <set>

int main(void) {
    
    return 0;
}

class Competition {
    std::vector<int> scores;
    std::set<std::pair<int, size_t>> ordered_works;

    void change_score(size_t participant_id, int change) {
        ordered_works.erase({scores[participant_id], participant_id});
        scores[participant_id] += change;
        ordered_works.insert({scores[participant_id], participant_id});
    }

public:
    Competition(size_t participant_count) {
        scores.assign(participant_count, 0);
        for (size_t i = 0; i < participant_count; ++i)
            ordered_works.insert({0, i});
    }

    void like(size_t participant_id) {
        change_score(participant_id, 1);
    }

    void dislike(size_t participant_id) {
        change_score(participant_id, -1);
    }

    std::vector<size_t> get_best_works(size_t K) const {
        std::vector<size_t> result;
        std::set<std::pair<int, size_t> >::const_reverse_iterator it;
        for (it = ordered_works.rbegin();
             it != ordered_works.rend() && result.size() < K; ++it) {
            result.push_back(it->second);
        }
        return result;
    }
};