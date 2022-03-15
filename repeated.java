import java.util.*;
public class Main {

    public static void main(String[] args) {

        Scanner s=new Scanner(System.in);
        String a=s.nextLine();
        for(int i=0;i<a.length();i++){
            for(int j=i+1;j<a.length();j++){
                if(a.charAt(i)==a.charAt(j)){
                    System.out.println(a.charAt(i));
                }
                
            }
        }
    }
}
        
