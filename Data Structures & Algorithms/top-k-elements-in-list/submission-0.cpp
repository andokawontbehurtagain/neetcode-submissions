class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       unordered_map<int, int> countMap;
       for(int x:nums){
        countMap[x]++;
       }
      vector<vector<int>> buckets(nums.size() + 1);
       for (auto [num, count] : countMap) {
    // count chính là index của thùng!
    buckets[count].push_back(num);
} 
vector<int> res;
for (int i = nums.size(); i >= 0; i--) {
    for (int num : buckets[i]) {
        res.push_back(num);
        if (res.size() == k) return res; // Đã đủ K phần tử thì trả về ngay
    }
}
return res;
 } 
};
