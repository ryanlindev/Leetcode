class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int height = grid.size();
        int width = grid[0].size();
        int perimeter = 0;
        
        for (int y = 0; y < height; y++) {
            for (int x = 0; x < width; x++) {
                if (!grid[y][x])
                    continue;
                    
                perimeter += 4
                    - (int)(y > 0 && grid[y-1][x])
                    - (int)(y < height - 1 && grid[y+1][x])
                    - (int)(x > 0 && grid[y][x-1])
                    - (int)(x < width - 1 && grid[y][x+1]);
            }
        }
        return perimeter;
    }
};
