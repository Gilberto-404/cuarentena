/*
	Exprecion lambda con parametros
*/

public class LambdaTest2{
	public static void main(String[] args) {
		Operaciones op = (num1, num2) -> System.out.println(num1 + num2);

		//op.imprimeSuma(5, 10);

		LambdaTest2 obj = new LambdaTest2(); //Otra manera de hacerlo
		obj.miMetodo(op, 10,10);
	}

	public void miMetodo(Operaciones op, int num1, int num2){
		op.imprimeSuma(num1, num2);
	}
}