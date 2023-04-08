
#include <bits/stdc++.h>
int drow[] = {0, -1, 0, 1};
int dcol[] = {-1, 0, 1, 0};
class Solution
{
public:
    int numEnclaves(vector<vector<int>> &grid)
    {
        int m = grid.size();
        int n = grid[0].size();
        for (int i = 0; i < m; i++)
        {
            int j = 0;
            queue<pair<int, int>> q;
            if (grid[i][j] == 1)
            {
                q.push({i, j});
                grid[i][j] = 2;
                while (!q.empty())
                {
                    int r = q.front().first;
                    int c = q.front().second;
                    q.pop();
                    for (int i = 0; i < 4; i++)
                    {
                        int row = r + drow[i];
                        int col = c + dcol[i];
                        if (row >= 0 && row < n && col >= 0 && col < m)
                        {
                            if (grid[row][col] == 1)
                            {
                                grid[row][col] = 2;
                                q.push({row, col});
                            }
                        }
                    }
                }
            }

            j = n - 1;
            // queue<pair<int, int>> q;
            if (grid[i][j] == 1)
            {
                q.push({i, j});
                grid[i][j] = 2;
                while (!q.empty())
                {
                    int r = q.front().first;
                    int c = q.front().second;
                    q.pop();
                    for (int i = 0; i < 4; i++)
                    {
                        int row = r + drow[i];
                        int col = c + dcol[i];
                        if (row >= 0 && row < n && col >= 0 && col < m)
                        {
                            if (grid[row][col] == 1)
                            {
                                grid[row][col] = 2;
                                q.push({row, col});
                            }
                        }
                    }
                }
            }
        }

        for (int j = 0; j < n; j++)
        {
            int i = 0;
            queue<pair<int, int>> q;
            if (grid[i][j] == 1)
            {
                q.push({i, j});
                grid[i][j] = 2;
                while (!q.empty())
                {
                    int r = q.front().first;
                    int c = q.front().second;
                    q.pop();
                    for (int i = 0; i < 4; i++)
                    {
                        int row = r + drow[i];
                        int col = c + dcol[i];
                        if (row >= 0 && row < n && col >= 0 && col < m)
                        {
                            if (grid[row][col] == 1)
                            {
                                grid[row][col] = 2;
                                q.push({row, col});
                            }
                        }
                    }
                }
            }

            i = m - 1;
            // queue<pair<int, int>> q;
            if (grid[i][j] == 1)
            {
                q.push({i, j});
                grid[i][j] = 2;
                while (!q.empty())
                {
                    int r = q.front().first;
                    int c = q.front().second;
                    q.pop();
                    for (int i = 0; i < 4; i++)
                    {
                        int row = r + drow[i];
                        int col = c + dcol[i];
                        if (row >= 0 && row < n && col >= 0 && col < m)
                        {
                            if (grid[row][col] == 1)
                            {
                                grid[row][col] = 2;
                                q.push({row, col});
                            }
                        }
                    }
                }
            }
        }
        int count = 0;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 1; j < n - 1; j++)
            {
                if (grid[i][j] == 1)
                    count++;
            }
        }
        return count;
    }
};