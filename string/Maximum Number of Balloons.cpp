class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int freq_b=0,freq_a=0,freq_l=0,freq_o=0,freq_n=0;
      for(int i =0;i<text.size();i++){
        if(text[i] == 'b'){
            freq_b++;
        }
        else if(text[i] == 'a'){
            freq_a++;
        }
        else if(text[i] == 'l'){
            freq_l++;
        }
        else if(text[i] == 'o'){
            freq_o++;
        }
        else if(text[i] == 'n'){
            freq_n++;
        }
      } 
      return min(freq_b,min(freq_a,min(freq_l/2,min(freq_o/2,freq_n)))); 
    }
};
