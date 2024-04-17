import java.io.IOException;
import java.io.RandomAccessFile;
import java.util.Scanner;

public class arquivo {
    public static Scanner sc = new Scanner(System.in);

    public static void main(String[] args) {
        final String nomeArquivo = "Q08.txt";
        try {
            RandomAccessFile arqW = new RandomAccessFile(nomeArquivo, "rw"); // abrindo arquivo
            int numEntrada = Integer.parseInt(sc.nextLine());
            String pub_in;

            for (int i = 0; i < numEntrada; i++) {
                pub_in = sc.nextLine();
                arqW.writeFloat(Float.parseFloat(pub_in));
            }
            arqW.close();

            RandomAccessFile arqR = new RandomAccessFile(nomeArquivo, "rw");
            leituraArquivo(arqR, numEntrada);
            arqR.close();

        } catch (IOException e) {
            e.getStackTrace();
        }

    }

    public static void leituraArquivo(RandomAccessFile arq, int numEntrada) throws IOException {
        long tamanhoArquivo = arq.length();
        int moverBytes_esq = 4;
        for (int i = 0; i < numEntrada; i++) {
            arq.seek(tamanhoArquivo - moverBytes_esq);
            Imprirmir(arq.readFloat());
            moverBytes_esq = moverBytes_esq + 4;
        }

    }

    public static void Imprirmir(float f) {
        String aux = Float.toString(f);
        String concatena = new String();
        boolean bool = false;

        for (int i = 0; i < aux.length(); i++) {
            if (bool) {
                concatena += aux.charAt(i);
            }
            if (aux.charAt(i) == '.') {
                bool = true;
            }
        }
        bool = false;

        for (int j = 0; j < concatena.length(); j++) {
            if (concatena.charAt(j) != '0') {
                bool = true;
                break;
            }
        }

        if (bool) {
            System.out.println(f);
        } else {
            System.out.printf("%.0f\n", f);
        }
    }
}