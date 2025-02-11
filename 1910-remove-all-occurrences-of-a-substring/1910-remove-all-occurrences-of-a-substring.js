/**
 * @param {string} s
 * @param {string} part
 * @return {string}
 */

var removeOccurrences = function(s, part) {
    
    while(true) {
       if(s.includes(part)) {
         s=s.replace(part,"");
       }
       else break; 
    }
    return s;
};