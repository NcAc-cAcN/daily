class Solution {
    public:
        vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
      vector<pair<string,string>> res;
      unordered_map<string,int> valid = {
          {"electronics",0},
          {"grocery",1},
          {"pharmacy",2},
          {"restaurant",3},
      };
    
      set<char> valid_chars = {
          'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n',
          'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B',
          'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P',
          'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '_','1','2','3','4','5','6','7','8','9','0'};
    
      for (int i = 0; i < code.size(); i++) {
        bool add = true;
        if (isActive[i] && (valid.find(businessLine[i]) != valid.end()) && code[i]!="") {
          for (char j : code[i]) {
            if (valid_chars.find(j) == valid_chars.end()) {
              add = false;
            }
          }
    
         if(add) res.push_back({code[i],businessLine[i]});
        }
      }
    
      sort(res.begin(),res.end(),[&](const pair<string,string>& a,const pair<string,string>& b){
        if(valid.at(a.second) !=valid.at(b.second))return valid.at(a.second)<valid.at(b.second);
        return a.first < b.first;
      });
    
      vector<string> final_res;
      for(auto& [r,s]:res){
        final_res.push_back(r);
      }
      
      return final_res;
        }
    };