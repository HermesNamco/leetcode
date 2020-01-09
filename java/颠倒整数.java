class Solution {
    public int reverse(int x) {
        String s = String.valueOf(x);
        String reverse = new StringBuffer(s).reverse().toString();
        int index = reverse.indexOf("-");
        int i = 0;
        if(index != -1 ){
            String newReverse = reverse.substring(0,reverse.length()-1);
            try {
                i = Integer.parseInt(newReverse);
                i = -i;
            }catch(NumberFormatException e){
                i = 0;
            }
        }
        else{
            try{
                i = Integer.parseInt(reverse);
            }catch(NumberFormatException e){
                i = 0;
            }
        }
        return i;
    }
}