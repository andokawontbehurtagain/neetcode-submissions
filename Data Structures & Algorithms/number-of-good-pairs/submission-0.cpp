#include <iostream>
#include <vector>
#include <unordered_map>

class Solution {
public:
    int numIdenticalPairs(std::vector<int>& nums) {
        // Khai báo một bảng đếm (Hash Map)
        // Key: số trong mảng, Value: số lần số đó đã xuất hiện
        std::unordered_map<int, int> dem;
        
        int count = 0; // Biến lưu tổng số cặp trùng nhau

        // Duyệt từng số trong mảng từ trái sang phải
        for (int x : nums) {
            // Bước 1: Nếu số x đã xuất hiện trước đó
            // thì nó tạo thêm số cặp bằng đúng số lần nó đã xuất hiện
            count += dem[x];

            // Bước 2: Cập nhật số lần xuất hiện của x tăng thêm 1
            dem[x]++;
        }

        return count; // Trả về kết quả
    }
};