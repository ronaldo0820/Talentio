import java.util.*;
public class Main
{
	public static void main(String[] args) {
	    Scanner s=new Scanner(System.in);
	    int n=s.nextInt();
	    
	    int a[]=new int[n];
	    for(int i=0;i<n;i++)
	    {
	        a[i]=s.nextInt();
	    }
	    int b=a[0];
	    int m=a[1];
	    for(int i=0;i<n;i++){
	        if(m<a[i]){
	            m=a[i];
	        }
	        
	    }
	    
	     int r=m-b;
	    if(r>0){
		System.out.println("ANS:"+r);
	}
	else{
	    System.out.println("ANS:0");
	}
	}
}
