import java.util.List;
//Structured Approach.
public class FP_Structured_01{

    public static void main(String[] args) {

        List<Integer> numbers = List.of(12, 9, 13, 4, 6, 2, 4, 12, 15);

        System.out.println("Using to --> [System.out::print] by default");
        printAllNumbersInListFuncitional_Two(numbers);
        System.out.println("\nprintAllNumbersInListFuncitional: ");
        printAllNumbersInListFuncitional(numbers);
        System.out.println("\nprintEvenNumbersInListFuncitional: ");
        printEvenNumbersInListFuncitional(numbers);
        System.out.println("");
    }
    private static void print(int number){
        System.out.println(number + ", ");
    }
    private static boolean isEven(int number){
        return (number % 2 == 0);//////////////////////////////////////////////////////////////////////////////
    }

    private static void printAllNumbersInListStructured(List<Integer> numbers) {
        // how to loop the numbers?
        for (int number : numbers) {
            System.out.print(number + ", ");
        }
        System.out.println("");
    }

    private static void printEventNumbersInListStructured(List<Integer> numbers) {
        // how to loop the numbers
        for (int number : numbers) {
            if (number % 2 == 0) {
                System.out.print(number + ", ");
            }
        }
        System.out.println("");
    }
}
