/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    var map = new Map()
    for (let i = 0; i < nums.length; i++) {
        if (map.has(target - nums[i])) {
            return [i, map.get(target - nums[i])]
        }
        map.set(nums[i], i)
    }
};

let answer = twoSum([3, 2, 4], 6)
console.log(answer)

// use map can be fast 0ms time execution