class Solution {
public:
    bool areSentencesSimilar(string sentence1, string sentence2) {
        // Split sentence1 and sentence2 into words
        vector<string> s1, s2;
        string a = "", b = "";
        
        // Split sentence1 into words and store in s1
        for(int i = 0; i < sentence1.size(); i++)  {
            if(sentence1[i] != ' ') 
                a += sentence1[i];
            else {
                s1.push_back(a);
                a = "";
            }
        }
        s1.push_back(a);  // Push the last word
        
        // Split sentence2 into words and store in s2
        for(int i = 0; i < sentence2.size(); i++)  {
            if(sentence2[i] != ' ') 
                b += sentence2[i];
            else {
                s2.push_back(b);
                b = "";
            }
        }
        s2.push_back(b);  // Push the last word
        
        int j = s1.size();  // Size of sentence1 words
        int k = s2.size();  // Size of sentence2 words
        int i = 0;  // Start pointer
        
        // If one sentence is larger than the other, check if the shorter one can fit into the longer one
        while (i < s1.size() && i < s2.size() && s1[i] == s2[i]) i++;  // Compare from the start
        while (j > i && k > i && s1[j-1] == s2[k-1]) {  // Compare from the end
            j--;
            k--;
        }
      //  if((j-i+1!=0) && (k-i+1!=0) ) return false ;
        // If the remaining size of s1 or s2 is greater than 0, they are not similar
        if (i == j || i == k){ return true;}
        return false;
    }
};
