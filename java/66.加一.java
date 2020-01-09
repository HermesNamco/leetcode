class Solution {
    public int[] plusOne(int[] digits) {
        int carry = 0;
        int i = digits.length - 1;
        int sum = 1;
        while(i >= 0){
            sum = sum + digits[i];
            carry = sum / 10;
            sum = sum % 10;
            digits[i] = sum;
            sum = carry;
            i --;
        }
        if(carry == 1){
            int[] result = new int[digits.length + 1];
            result[0] = 1;
            for(int j = 1;j < digits.length + 1;j ++)
                result[j] = digits[j - 1];
            return result;
        }
        return digits;
    }
}