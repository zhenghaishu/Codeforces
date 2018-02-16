import java.util.Scanner;

public class A932
{
	public static void main(String[] args)
	{
		Scanner scan = new Scanner(System.in);
		String s = scan.next();
		System.out.println(s + new StringBuilder(s).reverse().toString());
	}
}