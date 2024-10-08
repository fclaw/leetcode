#include <string>
#include <vector>
#include <map>
#include <queue>
#include <unordered_set>

namespace algorithms::graph::leetcode::doublets
{

using dist = std::unordered_map<std::string, int>;
using graph = std::map<std::string, std::vector<std::string>>;
using words = std::unordered_set<std::string>;


    /**
     * https://leetcode.com/problems/word-ladder
     * https://onlinejudge.org/external/101/10150.pdf
     * A Doublet is a pair of words that differ in exactly one letter; 
     * for example, “booster” and “rooster” or “rooster” and “roaster” or “roaster” and “roasted”
     * A transformation sequence from word beginWord to word endWord using a dictionary wordList 
     * is a sequence of words beginWord -> s1 -> s2 -> ... -> sk such that:
     * Every adjacent pair of words differs by a single letter.
     * Every si for 1 <= i <= k is in wordList. Note that beginWord does not need to be in wordList.
     * sk == endWord
     * Given two words, beginWord and endWord, and a dictionary wordList, 
     * return the number of words in the shortest transformation sequence from beginWord to endWord, 
     * or 0 if no such sequence exists. 
     * Hint: BFS state is string */
    const int start = 97;
    const int end = 122;
    bool finished = false;
    std::string tmp;
    int ans = 0;
    void bfs(words& ws, const std::string& sink, std::queue<std::pair<std::string, int>>& q)
    {
        while(!q.empty() && 
              !finished)
        {
            auto v = q.front();
            q.pop();
            std::string word = v.first;
            int dist = v.second;
            if(word == sink)
            {
              finished = true;
              ans = dist;
              break;
            }
           auto it = ws.find(word);  
           if(it != ws.end() && !finished)
            {
                for(int i = 0; i < word.size(); i++)
                  for(int j = start; j <= end; j++)
                    if((char)j != word[i])
                    {
                      tmp = word;
                      tmp[i] = (char)j;
                      q.push({tmp, dist + 1});
                    }
            }
            ws.erase(word);
        }
    }
    int ladderLength(std::string beginWord, std::string endWord, const std::vector<std::string>& wordList) 
    {
        std::queue<std::pair<std::string, int>> q;
        words ws(wordList.begin(), wordList.end());
        q.push({endWord, 1});
        bfs(ws, beginWord, q);
        return ans;
    }   
    
}