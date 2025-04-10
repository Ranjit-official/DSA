/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function(x) {
    let copy = "";
    for (let i of x.toString().split('').reverse()) {
        copy += i
    }
    if (copy == x) {
        return true;

    }
    return false;
};

console.log(isPalindrome(121))