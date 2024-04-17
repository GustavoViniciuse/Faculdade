import java.io.RandomAccessFile;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Date;
import java.text.DateFormat;
import java.util.List;
import java.text.SimpleDateFormat;
import java.util.Scanner;

public class Main {
    public static Scanner sc = new Scanner(System.in);

    public static void main(String[] args) throws Exception {

        final String nomeArquivo = "/tmp/characters.csv";
        RandomAccessFile arq = new RandomAccessFile(nomeArquivo, "r");
        long tamArquivo = arq.length();
        arq.readLine();// Leitura do cabeçalho

        List<Personagem> personagens = new ArrayList<>();

        while (arq.getFilePointer() < tamArquivo) {

            String lerLinha = arq.readLine();
            String[] atributos = lerLinha.split(";", -1);
            atribuicao(atributos, personagens);
        }

        while (true) {
            String idProcurado = sc.nextLine();
            if (idProcurado.equals("FIM")) {
                arq.close();
                System.exit(0);
            }
            procurarPersonagem(idProcurado, personagens);
        }
    }

    public static void procurarPersonagem(String idProcurado, List<Personagem> personagens) {
        for (Personagem personagem : personagens) {
            if (personagem.getId().equals(idProcurado)) {
                personagem.imprimir();
                break;
            }
        }
    }

    public static void atribuicao(String[] atributos, List<Personagem> listaPersonagem) throws Exception {

        Personagem personagem = new Personagem();

        personagem.setId(atributos[0]);
        personagem.setName(atributos[1]);

        atributos[2].replace("[", "").replace("]", "").replace("'", "").replace(" ", "");
        personagem.setAlternate_names(Arrays.asList(atributos[2].split(",")));

        personagem.setHouse(atributos[3]);
        personagem.setAncestry(atributos[4]);
        personagem.setSpecies(atributos[5]);
        personagem.setPatronus(atributos[6]);
        personagem.setHogwartsStaff(Boolean.parseBoolean(atributos[7]));
        personagem.setHogwartsStudent(Boolean.parseBoolean(atributos[8]));
        personagem.setActorName(atributos[9]);
        personagem.setAlive(Boolean.parseBoolean(atributos[10]));
        personagem.setDateOfBirth(tratarDate(atributos[12]));
        personagem.setYearOfBirth(Integer.parseInt(atributos[13]));
        personagem.setEyeColour(atributos[14]);
        personagem.setGender(atributos[15]);
        personagem.sethairColour(atributos[16]);
        personagem.setWizard(Boolean.parseBoolean(atributos[17]));

        listaPersonagem.add(personagem);
    }

    public static Date tratarDate(String data) throws Exception {
        SimpleDateFormat formato = new SimpleDateFormat("dd-MM-yyyy");
        Date date = formato.parse(data);
        return date;
    }

}

class Personagem {

    private String id;
    private String name;
    private List<String> alternate_names;
    private String house;
    private String ancestry;
    private String species;
    private String patronus;
    private Boolean hogwartsStaff;
    private Boolean hogwartsStudent;
    private String actorName;
    private Boolean alive;
    private Date dateOfBirth;
    private int yearOfBirth;
    private String eyeColour;
    private String gender;
    private String hairColour;
    private Boolean wizard;

    DateFormat dateFormat = new SimpleDateFormat("dd-MM-yyyy");

    Personagem() {
        id = "";
        name = "";
        alternate_names = new ArrayList<>();
        house = "";
        ancestry = "";
        species = "";
        patronus = "";
        hogwartsStaff = false;
        hogwartsStudent = false;
        actorName = "";
        alive = false;
        dateOfBirth = new Date();
        ;
        yearOfBirth = 0;
        eyeColour = "";
        gender = "";
        hairColour = "";
        wizard = false;

    }

    Personagem(String id) {
        id = "";
        name = "";
        alternate_names = new ArrayList<>();
        house = "";
        ancestry = "";
        species = "";
        patronus = "";
        hogwartsStaff = false;
        hogwartsStudent = false;
        actorName = "";
        alive = false;
        dateOfBirth = new Date();
        ;
        yearOfBirth = 0;
        eyeColour = "";
        gender = "";
        hairColour = "";
        wizard = false;

    }

    public Personagem clone() {
        return (new Personagem());
    }

    public String getId() {
        return id;
    }

    public void setId(String id) {
        this.id = id;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public List<String> getAlternate_names() {
        return alternate_names;
    }

    public void setAlternate_names(List<String> alternate_names) {
        this.alternate_names = alternate_names;
    }

    public String getHouse() {
        return house;
    }

    public void setHouse(String house) {
        this.house = house;
    }

    public String getAncestry() {
        return ancestry;
    }

    public void setAncestry(String ancestry) {
        this.ancestry = ancestry;
    }

    public String getSpecies() {
        return species;
    }

    public void setSpecies(String species) {
        this.species = species;
    }

    public String getPatronus() {
        return patronus;
    }

    public void setPatronus(String patronus) {
        this.patronus = patronus;
    }

    public Boolean getHogwartsStaff() {
        return hogwartsStaff;
    }

    public void setHogwartsStaff(Boolean hogwartsStaff) {
        this.hogwartsStaff = hogwartsStaff;
    }

    public Boolean getHogwartsStudent() {
        return hogwartsStudent;
    }

    public void setHogwartsStudent(Boolean hogwartsStudent) {
        this.hogwartsStudent = hogwartsStudent;
    }

    public String getActorName() {
        return actorName;
    }

    public void setActorName(String actorName) {
        this.actorName = actorName;
    }

    public Boolean getAlive() {
        return alive;
    }

    public void setAlive(Boolean alive) {
        this.alive = alive;
    }

    public Date getDateOfBirth() {
        return dateOfBirth;
    }

    public void setDateOfBirth(Date dateOfBirth) {
        this.dateOfBirth = dateOfBirth;
    }

    public int getYearOfBirth() {
        return yearOfBirth;
    }

    public void setYearOfBirth(int yearOfBirth) {
        this.yearOfBirth = yearOfBirth;
    }

    public String getEyeColour() {
        return eyeColour;
    }

    public void setEyeColour(String eyeColour) {
        this.eyeColour = eyeColour;
    }

    public String getGender() {
        return gender;
    }

    public void setGender(String gender) {
        this.gender = gender;
    }

    public String gethairColour() {
        return hairColour;
    }

    public void sethairColour(String ghairColour) {
        this.hairColour = ghairColour;
    }

    public Boolean getWizard() {
        return wizard;
    }

    public void setWizard(Boolean wizard) {
        this.wizard = wizard;
    }

    public List<String> tratarAlternate() {

        List<String> novoAlternateNames = new ArrayList<>();
        for (String name : alternate_names) {
            if (name.length() > 4) {
                StringBuilder sb = new StringBuilder(name.substring(2, name.length() - 1)); // Remove o primeiro,
                                                                                            // penúltimo e último
                                                                                            // caracteres
                for (int i = 0; i < sb.length(); i++) {
                    if (sb.charAt(i) == ',' && i > 0 && i < sb.length() - 2) {
                        sb.deleteCharAt(i - 1); // Remove o caractere anterior à vírgula
                        sb.deleteCharAt(i); // Remove a vírgula
                        i--; // Decrementa o índice para compensar a remoção do caractere
                        sb.deleteCharAt(i + 1); // Remove o caractere depois da vírgula
                        sb.insert(i, " "); // Insere espaço no lugar da vírgula
                    }
                }
                if (sb.length() > 1) {
                    sb.deleteCharAt(sb.length() - 1); // Remove o último caractere
                }
                novoAlternateNames.add(sb.toString());
            } else {
                novoAlternateNames.add("");
            }
        }
        alternate_names = novoAlternateNames;// Atualiza a lista original

        return alternate_names;
    }

    public void imprimir() {
        System.out.println("[" + id + " ## " + name + " ## " + tratarAlternate() + " ## " + house + " ## " + ancestry
                + " ## " + species + " ## " + patronus + " ## " + hogwartsStaff + " ## " + hogwartsStudent + " ## "
                + actorName + " ## " + alive + " ## " + dateFormat.format(dateOfBirth) + " ## " + yearOfBirth + " ## "
                + eyeColour + " ## " + gender + " ## " + hairColour + " ## " + wizard + "]");
    }

}
