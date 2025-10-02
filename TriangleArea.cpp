class Solution {
public:
    double areaT(int x1, int x2, int x3, int y1, int y2, int y3){
        double area = abs(x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2));
        return area/2.0;
    }

    double largestTriangleArea(vector<vector<int>>& points) {
        int n = points.size();
        double max_area = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                for (int k = j + 1; k < n; k++) {
                    max_area = max(max_area, areaT(
                        points[i][0], points[j][0], points[k][0],
                        points[i][1], points[j][1], points[k][1]
                    ));
                }
            }
        }
        return max_area;
    }
};
