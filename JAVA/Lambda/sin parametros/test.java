public class Test{
	public static void main(String[] args) {
		//Expresión lambda ==> representa un objeto de una interfaz funconal
		FuncionTest ft = () -> System.out.println("Mi primera funcion Lambda");//Implementación del método abstracto "saludar()"
																//de la Interfaz Funcional.
		//ft.saludar();


		LambdaTest obj = new LambdaTest();	//Otra manera de hacerlo
		obj.miMetodo(ft);
	}

	public void miMetodo(FuncionTest parametro){
		parametro.saludar();
	}
}