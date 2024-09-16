#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>
#include <optional>
#include <cmath>
#include <tuple>
#include <unordered_map>
#include <set>
#include <stack>
#include <climits>
#include <cstdio>
#include <bitset>
#include <limits>
#include <utility>



// algorithms folder
#include "algorithms/uniquePathsWithObstacles.cpp"
#include "algorithms/middleNode.cpp"
#include "algorithms/3sum.cpp"
#include "algorithms/coinChange.cpp"
#include "algorithms/graph.cpp"
#include "algorithms/minPathSum.cpp"
#include "algorithms/dp/leetcode/dungeonGame.cpp"
#include "algorithms/overlapIntervals.cpp"
#include "algorithms/nthNode.cpp"
#include "algorithms/swapPairs.cpp"
#include "algorithms/threeSumClosest.cpp"
#include "algorithms/coinChangeII.cpp"
#include "algorithms/longestPalindrome.cpp"
#include "algorithms/pascalTriangle.cpp"
#include "algorithms/maxProfit.cpp"
#include "algorithms/minCostClimbingStairs.cpp"
#include "algorithms/dp/leetcode/longestPalindromeSubstring.cpp"
#include "algorithms/subarrayOfTargetSum.cpp"
#include "algorithms/numOfSubarrays.cpp"
#include "algorithms/minTravelCost.cpp"
#include "algorithms/maxSubStringLength.cpp"
#include "algorithms/addChildSum.cpp"
#include "algorithms/dp/leetcode/maximalSquare.cpp"
#include "algorithms/waysToPoint.cpp"
#include "algorithms/convertStrings.cpp"
#include "algorithms/paintFence.cpp"
#include "algorithms/dp/minMovesOnChessboard.cpp"
#include "algorithms/dp/uniqueWaysOfCoins.cpp"
#include "algorithms/dp/leetcode/stringInterleaving.cpp"
#include "algorithms/dp/sumOfSubsetToTarget.cpp"
#include "algorithms/dp/leetcode/maxSumAfterPartitioning.cpp"
#include "algorithms/dp/knapsack.cpp"
#include "algorithms/dp/leetcode/longestCommonSubsequence.cpp"
#include "algorithms/dp/leetcode/findTargetSumWays.cpp"
#include "algorithms/dp/leetcode/maxProduct.cpp"
#include "algorithms/dp/cuttingRod.cpp"
#include "algorithms/tree/traversal.cpp"
#include "algorithms/array/leetcode/nextGreaterElements.cpp"
#include "algorithms/dp/leetcode/lengthOfLongestSubsequence.cpp"
#include "algorithms/dp/leetcode/minimumTotal.cpp"
#include "algorithms/array/leetcode/dailyTemperatures.cpp"
#include "algorithms/primesAndFactors.cpp"
#include "algorithms/dp/leetcode/longestPalindromeSubseq.cpp"
#include "algorithms/dp/leetcode/minStepsOn2KeysKeyboardRec.cpp"
#include "algorithms/dp/leetcode/burstBalloons.cpp"
#include "algorithms/tree/leetcode/distanceK.cpp"
#include "algorithms/tree/leetcode/levelOrder.cpp"
#include "algorithms/bitsManipulation.cpp"
#include "algorithms/subsetToTarget.cpp"
#include "algorithms/ 8Queens.cpp"
#include "algorithms/dp/leetcode/canPartition.cpp"
#include "algorithms/dp/leetcode/minimizeTheDifference.cpp"
#include "algorithms/dp/leetcode/lengthOfLIS.cpp"
#include "algorithms/dp/leetcode/deleteAndEarn.cpp"
#include "algorithms/dp/coinsCanonicalWays.cpp"
#include "algorithms/dp/tsp.cpp"
#include "algorithms/dp/leetcode/maxSatisfaction.cpp"
#include "algorithms/array/leetcode/mergeSortedArray.cpp"
#include "algorithms/array/leetcode/canonicalSubsets.cpp"
#include "algorithms/array/leetcode/subsetsWithDup.cpp"
#include "algorithms/array/leetcode/sortedSquares.cpp"
#include "algorithms/dp/leetcode/minFallingPathSum.cpp"
#include "algorithms/dp/leetcode/cuttingSticks.cpp"
#include "algorithms/dp/leetcode/numDecodings.cpp"
#include "algorithms/dp/leetcode/jumpGame2.cpp"
#include "algorithms/dp/leetcode/combinationSum4.cpp"
#include "algorithms/backtrack/leetcode/combine.cpp"
#include "algorithms/backtrack/leetcode/permute.cpp"
#include "algorithms/backtrack/leetcode/permuteUnique.cpp"
#include "algorithms/backtrack/leetcode/palindrome.cpp"
#include "algorithms/backtrack/leetcode/combinationSum3.cpp"
#include "algorithms/backtrack/leetcode/combinationSum2.cpp"
#include "algorithms/backtrack/leetcode/wordSearch.cpp"
#include "algorithms/backtrack/leetcode/findSubsequences.cpp"
#include "algorithms/backtrack/leetcode/generateParentheses.cpp"
#include "algorithms/backtrack/leetcode/restoreIpAddresses.cpp"
#include "algorithms/backtrack/leetcode/letterCasePermutation.cpp"
#include "algorithms/backtrack/leetcode/allPathsSourceTarget.cpp"
#include "algorithms/backtrack/leetcode/letterCombinations.cpp"
#include "algorithms/backtrack/uv/cd.cpp"
#include "algorithms/backtrack/uv/marcus.cpp"
#include "algorithms/backtrack/leetcode/solveNQueens.cpp"
#include "algorithms/backtrack/leetcode/tilingRectangle.cpp"
#include "algorithms/backtrack/leetcode/isAdditiveNumber.cpp"
#include "algorithms/backtrack/leetcode/getMaximumGold.cpp"
#include "algorithms/backtrack/leetcode/uniquePaths.cpp"
#include "algorithms/backtrack/leetcode/solveSudoku.cpp"
#include "algorithms/backtrack/leetcode/addOperators.cpp"
#include "algorithms/dp/leetcode/integerBreak.cpp"
// #include "algorithms/dp/leetcode/makeSquare.cpp"
#include "algorithms/dp/leetcode/canPartitionKSubsets.cpp"
#include "algorithms/dp/leetcode/countBits.cpp"
#include "algorithms/dp/leetcode/canCross.cpp"
#include "algorithms/array/leetcode/numRescueBoats.cpp"
#include "algorithms/graph/leetcode/numIslands.cpp"
#include "algorithms/graph/leetcode/orangesRotting.cpp"
#include "algorithms/graph/leetcode/floodFill.cpp"
#include "algorithms/graph/leetcode/canFinish.cpp"
#include "algorithms/graph/leetcode/canReach.cpp"
#include "algorithms/graph/leetcode/isBipartite.cpp"
#include "algorithms/graph/leetcode/shortestPath.cpp"
#include "algorithms/graph/leetcode/pacificAtlantic.cpp"
#include "algorithms/graph/leetcode/longestIncreasingPath.cpp"
#include "algorithms/graph/leetcode/ladderLength.cpp"
#include "algorithms/graph/leetcode/minimumEffortPath.cpp"
#include "algorithms/graph/leetcode/swimInWater.cpp"
#include "algorithms/graph/leetcode/findLadders.cpp"
#include "algorithms/graph/leetcode/shortestPathAllKeys.cpp"
#include "algorithms/graph/connectedComponents.cpp"
#include "algorithms/graph/leetcode/minimumMoves.cpp"
#include "algorithms/graph/leetcode/slidingPuzzle.cpp"
#include "algorithms/graph/articulationPoints.cpp"
#include "algorithms/graph/leetcode/containsCycle.cpp"
#include "algorithms/graph/leetcode/minPushBox.cpp"
#include "algorithms/graph/sf_dijkstra.cpp"
#include "algorithms/graph/leetcode/criticalConnections.cpp"
#include "algorithms/graph/leetcode/findCheapestPrice.cpp"
#include "algorithms/graph/leetcode/networkDelayTime.cpp"
#include "algorithms/graph/leetcode/findRedundantConnection.cpp"
#include "algorithms/graph/leetcode/minCostConnectPoints.cpp"
#include "algorithms/graph/leetcode/maximumDetonation.cpp"
#include "algorithms/graph/leetcode/shortestPathBinaryMatrix.cpp"
#include "algorithms/graph/leetcode/shortestPathLength.cpp"
#include "algorithms/graph/leetcode/removeInvalidParentheses.cpp"
#include "algorithms/graph/leetcode/minimumObstacles.cpp"
#include "algorithms/graph/atcoder/walk.cpp"
#include "algorithms/graph/onlinejudge/dungeon.cpp"
#include "algorithms/graph/scc.cpp"
#include "algorithms/graph/kruskal.cpp"
// codeforces
#include "algorithms/codeforces/erasingZeroes.cpp"
#include "algorithms/codeforces/goodPrefixes.cpp"
#include "algorithms/codeforces/hitTheLottery.cpp"
#include "algorithms/codeforces/fairDivision.cpp"
#include "algorithms/codeforces/twoArraysAndSwaps.cpp"
#include "algorithms/codeforces/redAndBlue.cpp"
#include "algorithms/codeforces/boredom.cpp"
#include "algorithms/codeforces/elephant.cpp"
#include "algorithms/codeforces/fillingShapes.cpp"
#include "algorithms/codeforces/brokenKeyboard.cpp"
#include "algorithms/codeforces/vitamins.cpp"
#include "algorithms/codeforces/boyOrGirl.cpp"
#include "algorithms/codeforces/legs.cpp"
#include "algorithms/codeforces/youngExplorers.cpp"
// online judge
#include "algorithms/onlinejudge/dp/wedding.cpp"
#include "algorithms/onlinejudge/dp/sdi.cpp"
#include "algorithms/onlinejudge/dp/howDoYouAdd.cpp"
#include "algorithms/onlinejudge/dp/chestOfDrawers.cpp"
#include "algorithms/onlinejudge/dp/luggage.cpp"
#include "algorithms/onlinejudge/graph/dominator.cpp"
#include "algorithms/onlinejudge/graph/callingCircles.cpp"
#include "algorithms/onlinejudge/dp/cuttingSticks.cpp"
#include "algorithms/onlinejudge/graph/wetlandsOfFlorida.cpp"
#include "algorithms/onlinejudge/graph/comeGo.cpp"


int main()
{
  
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "--- ... ---\n";

    // ["1+2*3+4*5","12*3-4-5"]
    auto r = algorithms::backtrack::leetcode::add_operators::addOperators("105", 5);
    for(auto s : r.first)
      cout << s << "\n";

    std::cout << "runtime: " << r.second << "ms\n";  
    

    // 1+2*3+4*5*6+7-89
    // cout << algorithms::backtrack::leetcode::add_operators::evaluate(2, "1+2*3+4*5*6", 27); // should be 127 got 122




}