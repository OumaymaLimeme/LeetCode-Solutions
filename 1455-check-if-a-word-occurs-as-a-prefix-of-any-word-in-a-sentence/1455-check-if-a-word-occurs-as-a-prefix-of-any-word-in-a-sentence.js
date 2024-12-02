/**
 * @param {string} sentence
 * @param {string} searchWord
 * @return {number}
 */
var isPrefixOfWord = function(sentence, searchWord) {

    let array=sentence.split(" ");
    console.log("fff",array)
    var index = array.findIndex(el => el.startsWith(searchWord));
    if (index==-1) return -1;
    return index+1;

    
    
};