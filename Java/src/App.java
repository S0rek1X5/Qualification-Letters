import java.util.Scanner;
//Programa que lea una nota y imprima el resultado en calificacion alfabetica.
public class App {
    private float nota;
    private String letra;
    public void leer(){
        Scanner sc=new Scanner(System.in);
        System.out.println("Ingrese una nota: ");nota=sc.nextFloat();
        sc.close();
    }
    public void procesar(){
        if (nota>=90.5 && nota<=100)
            letra = "La nota es A";
        if (nota>=80.5 && nota<=90.5)
            letra = "La nota es B";
        if (nota>=70.5 && nota<=80.5)
            letra="La nota es C";
        if (nota>=60.5 && nota<=70.5)
            letra="La nota es D";
        if (nota>=0 && nota<=60.5)
            letra="La nota es F";
        if(nota<0 || nota >100)
            letra="La nota no existe";
    }
    private void impimir(){
        System.out.println(letra);
    }
    public static void main(String[] args) throws Exception {
        App app;
        app = new App();
        app.leer();
        app.procesar();
        app.impimir();
    }
}