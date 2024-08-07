#include <vector>

namespace algorithms::dp::leetcode
{
    /*
      https://leetcode.com/problems/find-minimum-time-to-finish-all-jobs
      You are given an integer array jobs, where jobs[i] is the amount of time it takes to complete the ith job.
      There are k workers that you can assign jobs to. Each job should be assigned to exactly one worker. 
      The working time of a worker is the sum of the time it takes to complete all jobs assigned to them. 
      Your goal is to devise an optimal assignment such that the maximum working time of any worker is minimized.
      Return the minimum possible maximum working time of any assignment.
      Constraints:
        1 <= k <= jobs.length <= 12
        1 <= jobs[i] <= 107
      hint: We can select a subset of tasks and assign it to a worker then solve the subproblem on the remaining tasks  
    */
    int minimumTimeRequired(std::vector<int> jobs, int k) 
    { 
        return 0; 
    }
}