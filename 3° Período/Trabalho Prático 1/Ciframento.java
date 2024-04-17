import java.util.Scanner;

public class Ciframento {

    static String teste(String palavra) {

        String nova = new String();

        for (int i = 0; i < palavra.length(); i++) {

            nova += (char) (palavra.charAt(i) + 3);

        }

        return nova;

    }

    public static void main(String[] args) {

       
        Scanner sc = new Scanner(System.in);

        while (true) {

            String palavra = sc.nextLine();

            if (palavra.equals("FIM")) {
                sc.close();
                System.exit(0);
            }
            
            System.out.println(teste(palavra));
        }
       
    }
}
