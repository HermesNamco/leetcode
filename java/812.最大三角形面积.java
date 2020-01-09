class Solution {
    public double largestTriangleArea(int[][] points) {
        double max = 0;
        double tmp = 0;
        for(int i = 0;i < points.length;i ++)
            for(int j = i + 1;j < points.length;j ++)
                for(int k = j + 1;k < points.length;k ++){
                    tmp = 0.5*((points[i][0]*points[j][1]-points[j][0]*points[i][1])+(points[j][0]*points[k][1]-points[k][0]*points[j][1])+(points[k][0]*points[i][1]-points[i][0]*points[k][1]));
                    tmp = Math.abs(tmp);
                    if(tmp > max)
                        max = tmp;
                }
      return max;              
    }
}