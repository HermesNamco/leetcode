class Solution {
public:
    bool robot(string command, vector<vector<int>>& obstacles, int x, int y) {		//采用先排序，后搜索的思想,耗时长，内存占用小

        int tempX = 0;
        int tempY = 0;

        string::iterator com = command.begin();
        sort(obstacles.begin(),obstacles.end(),compare);
        vector<vector<int>>::iterator ob = obstacles.begin();

        while(tempX <= x && tempY <= y){

            switch(*com){
                case 'U':
                    ++ tempY;
                    ++ com;
                    break;
                case 'R':
                    ++ tempX;
                    while(ob != obstacles.end() && (*ob)[0] < tempX)
                        ++ ob;
                    ++ com;
                    break;
                default :
                    com = command.begin();
            }

            vector<vector<int>>::iterator temp = ob;
            while(ob != obstacles.end() && (*ob)[0] == tempX){
                if((*ob)[1] > tempY)
                    break;
                if((*ob)[1] == tempY)
                    return false;
                ++ ob;
            }
            ob = temp;
            if(tempX == x && tempY ==y)
                return true;
        }

        return false;
    }

    static bool compare(vector<int> a,vector<int> b){
        if(a[0] > b[0])
            return false;
        else if(a[0] < b[0])
            return true;
        else{
            if(a[1] > b[1])
                return false;
            else
                return true;
        }
    }
};