class Solution {
public:
    int myAtoi(string str) {
        string::iterator pos = str.begin();
        int num = 0;
        int flag = 0;
        while(*pos == ' ')	//ȥ���ַ���ǰ�Ŀո�
            ++ pos;
        if(*pos == '-'){	//ȡ������ǰ��������
            flag = 1;
            ++ pos;
        }else if(*pos == '+'){
            ++ pos;
        }
        while(*pos == '0')	//ȥ������ǰ��0
            ++ pos;
        if(*pos > '9' || *pos < '0')	//�������ź�Ϊ�����򷵻�0
            return 0;
        while(*pos >= '0' && *pos <= '9'){
            num = num * 10 + (*pos - '0');	//�ۼ�����
            if(num < 0)				//����ж�
                return flag ? -2147483648 : 2147483647;
            if(num*pow(-1,flag) == -2147483648)	//�����߽��ж�
                return num;
            if(num*pow(-1,flag) == 2147483647)
                return num;
            if(*(pos+1) >= '0' && *(pos+1) <= '9'){	//��һ��ֵΪ�����ٽ�������жϣ���������жϺ����˼ӷ�
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
    int is_mul_overflow(int a, int b) {			//�˷�����жϺ���
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