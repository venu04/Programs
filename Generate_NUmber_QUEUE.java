/*
3 4 33 34 43 44 333 334 433 434
*/
import java.util.*;
public class Main
{
	public static void main(String[] args) {

        String result[]=new String[16];
        Queue<String> q= new LinkedList<>();
        q.offer("3");
        q.offer("4");
        for(int i=0;i<16;i++)
        {
            result[i]=q.poll();
            String n1=result[i]+"3";
            String n2=result[i]+"4";
            q.offer(n1);
            q.offer(n2);
        }
        for(int i=0;i<16;i++)
        System.out.print(result[i]+" ");
 
	}
}
