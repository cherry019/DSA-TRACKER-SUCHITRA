# DSA-TRACKER-SUCHITRA

# 🧠 Problem 1: Two Sum

## 📘 Problem Statement
Given an array of integers `nums` and an integer `target`, return the indices of the two numbers such that they add up to `target`.

---

## 📚 DSA Pattern
- Brute Force: Nested Loops
- Optimal: Hashing using HashMap (Java) / unordered_map (C++)

---

## 🧪 Test Cases

| Input            | Target | Output  |
|------------------|--------|---------|
| [2, 7, 11, 15]    | 9      | [0, 1]  |
| [3, 2, 4]         | 6      | [1, 2]  |
| [3, 3]            | 6      | [0, 1]  |
| [1, 2, 3]         | 7      | []      |

---

## 💡 Brute Force Approach

**Logic**: Check every pair `(i, j)` such that `nums[i] + nums[j] == target`

**Time Complexity**: `O(n²)`  
**Space Complexity**: `O(1)`

---

## ⚡ Optimal Approach

**Logic**: Use a HashMap to store visited elements and their indices.  
For each `num`, check if `target - num` is already in the map.

**Time Complexity**: `O(n)`  
**Space Complexity**: `O(n)`

## 📂 Code Files

- `TwoSum_Brute.java`
- `TwoSum_Optimal.java`
- `TwoSum_Brute.cpp`
- `TwoSum_Optimal.cpp`



# ⚡ Problem 2: Maximum Subarray (Kadane's Algorithm)

## 📘 Problem Statement
Given an integer array `nums`, find the contiguous subarray (containing at least one number) which has the **largest sum** and return its sum.

---

## 📚 DSA Pattern
- Brute Force: Prefix Sum on all subarrays
- Optimal: Kadane’s Algorithm (Dynamic Programming)

---

## 🧪 Test Cases

| Input                       | Output |
|----------------------------|--------|
| [-2,1,-3,4,-1,2,1,-5,4]     | 6      |
| [1]                        | 1      |
| [5,4,-1,7,8]               | 23     |
| [-1,-2,-3,-4]              | -1     |

---

## 💡 Brute Force Approach

**Logic**: Try every possible subarray and compute the sum.

**Time Complexity**: `O(n²)`  
**Space Complexity**: `O(1)`

---

## ⚡ Optimal Approach (Kadane’s Algorithm)

**Logic**: Track current max ending at index `i`, and update global max.

**Time Complexity**: `O(n)`  
**Space Complexity**: `O(1)`

---

## 📂 Code Files

- `MaxSubarray_Brute.java`
- `MaxSubarray_Optimal.java`
- `MaxSubarray_Brute.cpp`
- `MaxSubarray_Optimal.cpp`



# 🔢 Problem 3: Sort Colors (0s, 1s, and 2s)

## 📘 Problem Statement
You are given an array `nums` consisting only of integers `0`, `1`, and `2`.

Your task is to **sort the array in-place**, so that all `0`s come first, followed by all `1`s, and then all `2`s.



---

## 💡 Example Test Cases

| Input             | Output         |
|------------------|----------------|
| `[0,2,1,2,0,1]`   | `[0,0,1,1,2,2]` |
| `[2,2,2,1,0]`     | `[0,1,2,2,2]`   |
| `[1,1,1]`         | `[1,1,1]`       |
| `[2,0,1]`         | `[0,1,2]`       |

---

## 🧠 DSA Pattern

- Brute Force: **Count sort**
- Optimal: **Dutch National Flag Algorithm** (Three pointers)

---

## 🔍 Brute Force Approach

1. Count number of 0s, 1s, and 2s.
2. Overwrite array in the correct count order.

### ✅ Time Complexity: `O(n)`  
### ✅ Space Complexity: `O(1)`

---

## ⚡ Optimal Approach (Dutch National Flag)

1. Use three pointers: `low`, `mid`, and `high`.
2. Traverse the array once and place elements in correct partition:
   - `0 → swap to front`
   - `1 → skip`
   - `2 → swap to end`

### ✅ Time Complexity: `O(n)`  
### ✅ Space Complexity: `O(1)`

---

## 🧪 Multiple Test Cases (Used in Code)


Input:  [0, 2, 1, 2, 0, 1]
Output: [0, 0, 1, 1, 2, 2]

Input:  [2, 0, 1]
Output: [0, 1, 2]

Input:  [1, 1, 1]
Output: [1, 1, 1]

Input:  [2, 2, 2, 1, 0]
Output: [0, 1, 2, 2, 2]
 

## 📂 Code Files 

-  `SortColors_Brute.java`
- `SortColors_Optimal.java`
- `SortColors_Brute.cpp`
- `SortColors_Optimal.cpp`




# 🟡 Problem 4: Move All Zeros to End

## 📘 Problem Statement
Given an integer array `nums`, move all `0`s to the end while maintaining the relative order of the non-zero elements.

📌 Do it **in-place** with **O(1)** extra space.

---

## 💡 Example Test Cases

| Input             | Output           |
|------------------|------------------|
| `[0,1,0,3,12]`    | `[1,3,12,0,0]`    |
| `[0,0,1]`         | `[1,0,0]`         |
| `[1,2,3]`         | `[1,2,3]`         |
| `[0,0,0]`         | `[0,0,0]`         |

---

## 🧠 DSA Pattern
- Two Pointer
- In-place array manipulation

---

## 💭 Brute Force Approach

1. Create a temp array or overwrite with non-zero elements.
2. Fill remaining with 0s.

### ⏱️ Time: O(n)  
### 📦 Space: O(n)

---

## ⚡ Optimal Approach (Two Pointers)

1. Use a pointer to track non-zero insert position.
2. Traverse and swap as needed.

### ⏱️ Time: O(n)  
### 📦 Space: O(1)

---

## ✅ Code Files

- `MoveZeros_Brute.java`
- `MoveZeros_Optimal.java`
- `MoveZeros_Brute.cpp`
- `MoveZeros_Optimal.cpp`

---

# 🔥 Problem 5: Maximum Product Subarray

## 📘 Problem Statement
Given an integer array `nums`, find the contiguous subarray (containing at least one number) which has the **largest product**, and return that product.

---

## 💡 Example Test Cases

| Input                  | Output |
|------------------------|--------|
| `[2,3,-2,4]`           | `6`    |
| `[-2,0,-1]`            | `0`    |
| `[0,2]`                | `2`    |
| `[-2,3,-4]`            | `24`   |

---

## 🧠 DSA Pattern
- Kadane's Algorithm variant (track min & max)
- Sliding Window + Dynamic Product Tracking

---

## 💭 Brute Force Approach

1. Try all subarrays
2. Keep track of max product

### ⏱️ Time: `O(n²)`  
### 📦 Space: `O(1)`

---

## ⚡ Optimal Approach (Modified Kadane’s)

1. Track:
   - `maxSoFar`
   - `minSoFar` (to handle negative flips)
2. Update result at each step

### ⏱️ Time: `O(n)`  
### 📦 Space: `O(1)`

---

## ✅ Code Files

- `MaxProduct_Brute.java`
- `MaxProduct_Optimal.java`
- `MaxProduct_Brute.cpp`
- `MaxProduct_Optimal.cpp`

---

## 📌 Tags
`Array`, `Kadane`, `hash map`, `Prefix Product`, `Sliding Window`,`Two pointers`




