//Using recurssion

#include <stdio.h>
 
// We use recursive function to find total ways to reach the n'th stair from the bottom of the stairs
// Here, m is the max no of steps that a man can take
int totalWays(int n, int m)
{
    //If the input given is invalid 
    if (n < 0) {
        return 0;
    }
 
    // If the user want to stay at bottom stair only
    if (n == 0) {
        return 1;
    }
 
    int count = 0;
    for (int i = 1; i <= m; i++) {
        count += totalWays(n - i, m);
    }
 
    return count;
}

//Driver Code
 
int main(void)
{
    int n,m;
    printf("Enter total no. of stairs and maximum no of steps:");
    scanf("%d  %d",&n,&m);
 
    printf("Total ways to reach the %d'th stair with at most %d steps are %d",
            n, m, totalWays(n, m));
 
    return 0;
}

//Input: 
//Enter total no. of stairs and maximum no of steps:
//30 2

//Output:1346269
