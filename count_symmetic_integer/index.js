//You are given two positive integers low and high.

// An integer x consisting of 2 * n digits is symmetric
// if the sum of the first n digits of x is equal to the sum of the last n digits of x.Numbers with an odd number of digits are never symmetric.

// Return the number of symmetric integers in the range[low, high].

/**
 * @param {number} low
 * @param {number} high
 * @return {number}
 */
var countSymmetricIntegers = function(low, high) {
    let counter = 0;
    for (let i = low; i <= high; i++) {
        let copy = i.toString()
        let len = copy.length
        if (len % 2 == 0) {
            let front = copy.slice(0, len / 2)
            let back = copy.slice(len / 2)
            let count1 = 0;
            let count2 = 0;
            for (m of front.split('')) {
                count1 += Number(m)
            }
            for (m of back.split('')) {
                count2 += Number(m)
            }
            if (count1 == count2) {
                counter++;
            }
        }
    }
    return counter;
};

console.log(countSymmetricIntegers(1200, 1230))