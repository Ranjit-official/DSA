/**
 * @param {string} s
 * @return {number}
 */
var romanToInt = function(s) {

    let value = [
        [
            'I',
            1
        ],
        [
            'V',
            5
        ],
        [
            'X',
            10
        ],
        [
            'L',
            50
        ],
        [

            'C',
            100
        ],
        [
            'D',
            500
        ],
        [
            'M',
            1000
        ]
    ]
    let count = 0;
    let max = 1;
    for (i of s.split('').reverse()) {
        for (let j = 0; j < value.length; j++) {

            if ((value[j][0] === i) && (max > value[j][1])) {
                count -= value[j][1]
                break;
            }
            if (value[j][0] === i) {
                count += value[j][1]
                max = value[j][1]
                break;
            }
        }
    }
    return count;
};
console.log(romanToInt("MCMXCIV"));
// for (i of s.split('').reverse()) {
//     for (j of value) {
//         if (j[0] === i) {
//             count += j[1]
//         }
//     }
// }
// let map = new Map()
// map.set('I', 1);
// map.set('V', 5);
// map.set('X', 10);
// map.set('L', 50);
// map.set('C', 100);
// map.set('D', 500);
// map.set('M', 1000);