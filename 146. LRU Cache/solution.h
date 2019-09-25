#include <list>
#include <unordered_map>

using namespace std;

class LRUCache {
public:
    LRUCache(int capacity) : capacity(capacity) { }

    int get(int key) {
        if (pos.find(key) != pos.end()) {
            int value = pos[key]->second;
            put(key, value);
            return value;
        }
        return -1;
    }

    void put(int key, int value) {
        if (pos.find(key) != pos.end())
            recent.erase(pos[key]);
        else if (recent.size() >= capacity) {
            int old = recent.back().first;
            recent.pop_back();
            pos.erase(old);
        }
        recent.push_front(make_pair(key, value));
        pos[key] = recent.begin();
    }
private:
    int capacity;
    list<pair<int, int>> recent;
    unordered_map<int, list<pair<int, int>>::iterator> pos;
};
/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */