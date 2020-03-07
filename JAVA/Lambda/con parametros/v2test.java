public class V2test{
	public static void main(String[] args) {
		// Expresión lambda ==> representa un objeto de una interfaz funcional
		Operaciones op = (num1, num2) -> System.out.println(num1 + num2);

		op.imprimeOperaciones(5, 10);

		LambdaTest obj = new LambdaTest();
		obj.miMetodo((num1, num2) -> System.out.println(num1 - num2), 20, 10);
		obj.miMetodo((num1, num2) -> System.out.println(num1 * num2), 20, 10);
	}

	public void miMetodo(Operaciones op, int num1, int num2){
		op.imprimeOperaciones(num1, num2);
	}
}