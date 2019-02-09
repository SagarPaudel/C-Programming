import java.io.*;
import java.util.*;

public class Solution {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int testcases = input.nextInt();
        int count=0;
        int count1 = 0;
        int count2 = 0;
        for(int m=0;m<testcases;m++){
            int choice = input.nextInt();
            input.nextLine();
            String name[] = new String [choice];

            for (int i = 0; i <choice; i++) {
                name[i] = input.nextLine();
            }
            int len0 = name[0].length();
            int len1 = name[1].length();
            int len2 = name[2].length();
            
        
           for( int j = 0 ; j<len0;j++){
                for(int k =j+1;k<len0;k++ ){
                    if(name[0].charAt(j)==name[0].charAt(k)){
                        count ++;
                    }
                }
            }
            int tlength0 = name[0].length()-count;
            for( int j = 0 ; j<len1;j++){
                for(int k =j+1;k<len1;k++ ){
                    if(name[1].charAt(j)==name[1].charAt(k)){
                        count1 ++;
                    }
                }
            }
            int tlength1 = name[1].length()-count1;

            for( int j = 0 ; j<len2;j++){
                for(int k =j+1;k<len2;k++ ){
                    if(name[2].charAt(j)==name[2].charAt(k)){
                        count2 ++;
                    }
                }
            }
            int tlength2 = name[2].length()-count2;
            if(tlength1>tlength0 && tlength1>tlength0){
                System.out.println(name[1]);
            }
            else if(tlength0>tlength1 && tlength0>tlength2){
                System.out.println(name[0]);
            }
            else if(tlength2>tlength0 && tlength2>tlength1){
                System.out.println(name[2]);
            }
        }
    }
}
