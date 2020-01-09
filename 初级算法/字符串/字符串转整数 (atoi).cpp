class Solution {
public:
    int myAtoi(string str) {
        string::iterator pos = str.begin();
        int num = 0;
        int flag = 0;
        while(*pos == ' ')	//去除字符串前的空格
            ++ pos;
        if(*pos == '-'){	//取出数字前的正负号
            flag = 1;
            ++ pos;
        }else if(*pos == '+'){
            ++ pos;
        }
        while(*pos == '0')	//去掉数字前的0
            ++ pos;
        if(*pos > '9' || *pos < '0')	//若正负号后不为数字则返回0
            return 0;
        while(*pos >= '0' && *pos <= '9'){
            num = num * 10 + (*pos - '0');	//累计数字
            if(num < 0)				//溢出判断
                return flag ? -2147483648 : 2147483647;
            if(num*pow(-1,flag) == -2147483648)	//两个边界判断
                return num;
            if(num*pow(-1,flag) == 2147483647)
                return num;
            if(*(pos+1) >= '0' && *(pos+1) <= '9'){	//下一个值为数字再进行溢出判断，这里溢出判断忽略了加法
            if(is_mul_overflow(num,10)){
                if(flag == 1)
                    return -2147483648;
                else
                    return 2147483647;
            }
            }
            cout << num << flag << endl;		//debug
            ++ pos;
        }
        if(flag == 1)
            num = 0 - num;
        return num;
    }
    int is_mul_overflow(int a, int b) {			//乘法溢出判断函数
        if( a >= 0 && b >=0  ) {
            return INT_MAX / a < b;
        }
        else if( a < 0 && b < 0 ) {
            return INT_MAX / a > b;
        }
        else if( a * b == INT_MIN ) {
            return 0;
        }
        else {
            return a < 0 ? is_mul_overflow(-a, b) : is_mul_overflow(a, -b);
        }
    }
};