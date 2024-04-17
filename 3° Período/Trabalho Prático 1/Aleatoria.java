import java.util.Random;
import java.util.Scanner;

public class Aleatoria {

    static String alteracao(String palavra, Random gerador){

        String letra1 = "" + (char) ('a' + Math.abs(gerador.nextInt()%26));
        String letra2 = "" + (char) ('a' + Math.abs(gerador.nextInt()%26));

        palavra.replaceAll(letra1, letra2);

        return palavra;
    }

    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        Random gerador = new Random();
        gerador.setSeed(4);
        String palavra;

        while(!(palavra=sc.nextLine()).equals("FIM")){

        System.out.println(alteracao(palavra,gerador));

        }
        sc.close();
    }
}
