# 🧠 LeetCode Solutions by Prateek Singh

This repository contains my solutions to LeetCode problems, organized by difficulty. Each solution includes code and, where helpful, explanations and complexity analysis.

## 📊 Stats
- 🔢 Problems Solved: 3 (to start)
- 🧩 Languages: C++, Python, Java
- 🚀 Goal: Solve 200+ questions by [Date]

## 🗂️ Folders
- `easy/` – beginner-level problems
- `medium/` – intermediate challenges
- `hard/` – advanced questions
- `utils/` – code templates/snippets

## 🧾 Problem Format

Each file is named as:
\`\`\`
[ProblemNumber]-[Kebab-Case-Title].[ext]
\`\`\`

### Example:
\`\`\`cpp
// File: easy/0001-two-sum.cpp

/*
1. Two Sum
LeetCode Problem Link: https://leetcode.com/problems/two-sum/

Approach: Hash map
Time Complexity: O(n)
Space Complexity: O(n)
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        for (int i = 0; i < nums.size(); ++i) {
            if (m.count(target - nums[i])) return {m[target - nums[i]], i};
            m[nums[i]] = i;
        }
        return {};
    }
};
\`\`\`

## 📅 Progress Tracker
| # | Title | Difficulty | Language | Status |
|---|-------|------------|----------|--------|
| 1 | Two Sum | Easy | C++ | ✅ |
| 49 | Group Anagrams | Medium | Python | ✅ |
| 297 | Serialize/Deserialize Binary Tree | Hard | Java | ✅ |
