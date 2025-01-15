#include <vector>
#include <string>

std::string smash(const std::vector<std::string>& words)
{
  if (words.size()==0) return "";
  std:: string s;
  for(std::string word : words) 
    s+=word+" ";
    s.pop_back();
  return s;
}

