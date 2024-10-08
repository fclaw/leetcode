#include <cassert>
#include <optional>
#include <string>
#include <iostream>


namespace algorithms::graph::onlinejudge::jungle
{

#define loop(x, s, n) for(int x = s; x < n; x++)
typedef std::vector<int> vi;
typedef std::vector<vi> vvi;
typedef std::vector<vvi> table;

const int inf = 5 * 1e+05;
const int Max_Hour = 24;
const int Max_Rest = 16;
const int start_at = 6;
const char jungle = '*';


    /** https://onlinejudge.org/external/115/11545.pdf, 
     * state: cPos, cTime, cWTime; transition: move forward/rest */
    bool isNight(int t) { return t >= 0 && t <= 6 || t >= 18 && t <= 23; }
    int adjustTime(int t) { return t <= Max_Hour - 1 ? t : t % Max_Hour; }
    int minTimeRequired(const std::string& s, int i, int t, int wt, table& memo) 
    {
        if(s[i] == 'D')
          return 0;
         
        if(isNight(wt) && s[i] == jungle)
          return inf;

        int &time = memo[i][t][wt];
        if(~time) return memo[i][t][wt];

        time = inf;
        if(t < Max_Rest)
        {
            int move = 1 + minTimeRequired(s, i + 1, t + 1, adjustTime(wt + 1), memo);
            int rest = 8 + minTimeRequired(s, i, 0, adjustTime(wt + 8), memo);
            time = std::min(move, rest);
        }
        else time = 8 + minTimeRequired(s, i, 0, adjustTime(wt + 8), memo);
        return memo[i][t][wt] = time;
    }
    
    void submit(std::optional<char*> file)
    {
        if(file.has_value()) 
          assert(std::freopen(file.value(), "r", stdin) != nullptr);

        /** The first line of input contains a positive integer T ≤ 100. Each of the next T lines contains a string
         *  of length at least 2 and at most 1000. The string will always begin with an S and end with a D.
         *  The characters in between will be either a ‘.’ or ‘*’, quotes for clarity. Here a ‘.’ represents a plain land
         *  and ‘*’ a jungle. It takes exactly one hour to travel from one position to the next and the Pilgrim
         *  never travels backward. Note that he is always located at the left most position of a particular land
         * and when he travels to the next land, he travels for a full hour to the reach the left most position of the next land.
         * Note that he starts his journey from the position marked S and finishes at D. 
         * On the first day of his journey, he is located on S at 6 AM. 
         * Dark hours are considered to be the time between 6 PM to 6 AM inclusive */
        int tc, c = 0;
        std::string journey;
        std::cin >> tc;
        while(--tc >= 0)
        {
            std::cin >> journey;
            table memo(1020, vvi(20, vi(30, -1)));
            int ans = minTimeRequired(journey, 0, 0, start_at, memo);
            printf("Case #%d: %d\n", ++c, ans >= inf ? -1 : ans);
        } 
    }
}