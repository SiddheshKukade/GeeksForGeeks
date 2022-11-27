
class Solution {
    static int noOfOpenDoors(Long N) {
        //returnig the sqre root as 
        // any range of n nos contatins perfect square for upto root n 
        // having perfect square means no decimal points 
        // and perfect square have odd factors means they will be open doorrs
        return (int)Math.sqrt(N);
    }
};
