/*
Given NxN square, produce all paths from upper left to lower
right as sequence of D for down, R for right.

Visually you can see this is all sequences of length 2(N-1) with equal number of D and R.
*/

#include <stdio.h>
#include <vector>
#include <stdlib.h>

void paths_helper(char* buf, int i, int d, int r)
{
    if (d == 0 && r == 0)
    {
        printf("%s\n", buf);
        return;
    }
    if (d > 0)
    {
        buf[i] = 'd';
        paths_helper(buf, i + 1, d - 1, r);
    }
    if (r > 0)
    {
        buf[i] = 'r';
        paths_helper(buf, i + 1, d, r - 1);
    }
}

void paths(int n)
{
    std::vector<char> buf(2 * (n - 1) + 1, 0);
    paths_helper(&buf[0], 0, n - 1, n - 1);
}

int main(int, char** argv)
{
    paths(atoi(argv[1]));
}
