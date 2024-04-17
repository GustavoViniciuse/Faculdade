import java.util.Scanner;

public class Palindromo {

    static boolean teste(String palavra) {

        int esquerda = 0;
        int direita = palavra.length() - 1;

        for (int i = 0; i < palavra.length(); i++) {
            if (palavra.charAt(esquerda) == palavra.charAt(direita)) {
                esquerda++;
                direita--;
            } else {
                return false;
            }
        }

        return true;

    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        String palavra;

        while (true) {
            palavra = sc.nextLine();

            if (palavra.equals("FIM")) {
                sc.close();
                System.exit(0);
            }

            if (teste(palavra) == true) {
                System.out.println("SIM");
            } else {
                System.out.println("NAO");
            }

        }

    }
}