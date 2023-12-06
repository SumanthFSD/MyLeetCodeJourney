class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      int n = s.length();
      int maxLength = 0;
      unordered_set<char> charSet;
      int left = 0;
      
      for (int right = 0; right < n; right++) {
          if (charSet.count(s[right]) == 0) {
              charSet.insert(s[right]);
              maxLength = max(maxLength, right - left + 1);
          } else {
              while (charSet.count(s[right])) {
                  charSet.erase(s[left]);
                  left++;
              }
              charSet.insert(s[right]);
          }
      }
        
      return maxLength;


      // Naive implementation
        // int maxLength = 0;
        // for(int i=0;i<s.length();i++){
        //     int tempLength = 0;
        //     unordered_map<char,bool> charMap;
        //     for(int j=i;j<s.length();j++){
        //       // cout << s[j] << charMap[s[j]];
        //         if(charMap[s[j]]){
        //           // cout << s[j] << charMap[s[j]];
        //           break;
        //         }
        //         tempLength++;
        //         charMap[s[j]] = true;   
        //     }
        //     // cout << endl;
        //     if(tempLength > maxLength){
        //         maxLength = tempLength;
        //     }
        // }
        // return maxLength;
    }
};