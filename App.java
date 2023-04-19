import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.InputStream;
import java.io.PrintStream;
import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Vector;

public class App {
    public static void main(String[] args) throws Exception {
        numeroDeEjercicio(0);
        System.out.println(reverse("Harold Camacho Herrera"));

        numeroDeEjercicio(1);
        String[] arreglo = { "Harold", "Camacho", "Herrera" };
        Ejercicio1(arreglo);

        numeroDeEjercicio(2);
        int[][] arregloBidimencional = {
                { 50, 90, 40, 30 },
                { 75, 35, 45, 85 },
                { 98, 28, 68, 88 } };
        Ejercicio2(arregloBidimencional);

        numeroDeEjercicio(3);
        Ejercicio3();

        numeroDeEjercicio(4);
        Ejercicio4();

        numeroDeEjercicio(5);
        Ejercicio5();

        numeroDeEjercicio(6);
        Ejercicio6();

        numeroDeEjercicio(7);
        try {
            System.out.println(DividePorCero(10, 0));
        } catch (ArithmeticException e) {
            System.out.println("Esto no puede hacerse " + e.getMessage());
        } finally {
            System.out.println("Demo de codigo");
        }

        numeroDeEjercicio(8);
        try{
            InputStream fileIn = new FileInputStream("FileIn.txt");
            PrintStream fileOut = new PrintStream("FileOut.txt");
            Ejercicio8(fileIn, fileOut);
            System.out.println("Copiado con Exito");
        } catch (FileNotFoundException e) {
            System.out.println("No se encontro el archivo: " + e.getMessage());
        }
    }

    public static void numeroDeEjercicio(int numero) {
        System.out.println("\nEste es el ejercicio #" + numero);
    }

    public static String reverse(String texto) {
        String alReves = "";
        for (int i = texto.length() - 1; i >= 0; i--)
            alReves += texto.charAt(i);
        return alReves;
    }

    public static void Ejercicio1(String[] array) {
        for (int i = 0; i < array.length; i++)
            System.out.println(array[i]);
    }

    public static void Ejercicio2(int[][] arrayBidimentional) {

        for (int i = 0; i < arrayBidimentional.length; i++) {
            for (int j = 0; j < arrayBidimentional[0].length; j++)
                System.out.println("Fila: [" + i + "] Columna: [" + j + "] Valor: " + arrayBidimentional[i][j]);

        }
    }

    public static void Ejercicio3() {
        Vector<Integer> vector = new Vector<Integer>(5, 5);
        vector.add(10);
        vector.add(20);
        vector.add(30);
        vector.add(40);
        vector.add(50);
        System.out.println(vector);
        vector.remove(1);
        vector.remove(1);
        System.out.println(vector);
    }

    public static void Ejercicio4() {
        System.out.println(
                "El problema al utilizar la clase Vector con la capacidad por defecto (10 y x2), si tenemos 1000 elementos\n"
                        +
                        "es el uso excesivo de la memoria para incrementar la capacidad, pues las copias serian demasiadas");
    }

    public static void Ejercicio5() {
        ArrayList<Integer> arrayList = new ArrayList<Integer>();
        arrayList.add(100);
        arrayList.add(200);
        arrayList.add(300);
        arrayList.add(400);

        LinkedList<Integer> linkedList = new LinkedList<Integer>(arrayList);
        System.out.println("ArrayList:");
        for (Integer i : arrayList)
            System.out.println(i);
        System.out.println("LinkedList:");
        for (Integer i : linkedList)
            System.out.println(i);

    }

    public static void Ejercicio6() {
        ArrayList<Integer> arrayList = new ArrayList<Integer>();
        for (int i = 1; i <= 10; i++)
            arrayList.add(i);
        int x = 0;
        while (x < arrayList.size()) {
            if (arrayList.get(x) % 2 == 0) {
                arrayList.remove(x);
                continue;
            }
            x++;
        }
        System.out.println(arrayList);
    }

    public static int DividePorCero(int a, int b) throws ArithmeticException {
        var resultado = 0;
        try {
            resultado = a / b;
        } catch (ArithmeticException e) {
            throw new ArithmeticException();
        }
        return resultado;
    }

    public static void Ejercicio8(InputStream fileIn, PrintStream fileOut) throws IOException {
        byte[] fileByte = fileIn.readAllBytes();
        try {
            fileOut.write(fileByte);
        } catch (IOException e) {
            System.out.println(e.getMessage());
        }
    }
}
