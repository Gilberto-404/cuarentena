import java.util.List;
public class FP_Functional_Exercises{

    public static void main(String[] args) {
        List<Integer> numbers = List.of(12, 9, 13, 4, 6, 2, 4, 12, 15);

        List<String> courses = List.of("Spring", "Spring Boot", "API", "Microsservices",
            "AWS", "PCF", "Azure", "Docker", "Kubernetes");


        System.out.println("Ejercicio 1 \nImprimir numeros impares");
        printOddNumbersInListFunctional(numbers);

        System.out.println("\nEjercicio 2 \nImprimir todos los cursos individualmente");
        printAllCoursesInListFunctional(courses);

        System.out.println("\nEjercicio 3 \nImprimir los cursos con la palabra 'Spring'");
        printCoursesInListFunctionalWithSpring(courses);

        System.out.println("\nEjercicio 4 \nImprimir los cursos con al menos 4 letras");
        printCoursesInListFunctionalWithFourWords(courses);

        System.out.println("\nEjercicio 5 \nImprimir el cuadrado de los numeros impares");
        printCubeOddNumbersInListFunctional(numbers);

        System.out.println("\nEjercicio 6 \nImprimir el numero de caracteres de cada nombre del curso");
        printWordsNumberOfCoursesInListFunctional(courses);

    }

    /*Imprimir numeros*/
    private static void printNumber(int number){
        System.out.print(number + ", ");
    }
    /*Imprimir String*/
    private static void printString(String course){
        System.out.print(course + ", ");
    }
    /*Metodo para filtrar la lista */
    private static boolean isEven(int number){
        return (number % 2 == 0);
    }
 
    /*1*/
    private static boolean isOdd(int number){
        return (number % 2 == 1);
    }

    private static void printOddNumbersInListFunctional(List<Integer> numbers){
        numbers.stream()                        
            .filter(FP_Functional_Exercises::isOdd)   
            .forEach(FP_Functional_Exercises::printNumber);
        System.out.println("");
    } 
    
    /*2*/
    private static void printAllCoursesInListFunctional(List<String> courses){
        courses.stream()                          
            .forEach(FP_Functional_Exercises::printString);
        System.out.println("");
    }

    /*3*/
    private static void printCoursesInListFunctionalWithSpring(List<String> courses){
        courses.stream()
            .filter(course -> course.contains("Spring"))                         
            .forEach(FP_Functional_Exercises::printString);
        System.out.println("");
    }

    /*4*/
    private static void printCoursesInListFunctionalWithFourWords(List<String> courses){
        courses.stream()
            .filter(course -> course.length() >= 4)                         
            .forEach(FP_Functional_Exercises::printString);
        System.out.println("");
    }


    /*5*/
    private static void printCubeOddNumbersInListFunctional(List<Integer> numbers){
        numbers.stream()                        
            .filter(FP_Functional_Exercises::isOdd)
            .map(number -> number * number)   
            .forEach(FP_Functional_Exercises::printNumber);
        System.out.println("");
    }

    /*6*/
    private static void printWordsNumberOfCoursesInListFunctional(List<String> courses){
        courses.stream()
            .map(course -> course.length())                         
            .forEach(FP_Functional_Exercises::printNumber);
        System.out.println("");
    }
}
