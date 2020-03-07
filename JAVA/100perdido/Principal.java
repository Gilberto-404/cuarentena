public class Principal{
    public static void main(String[] args){
        System.out.println("==> CalculadoraInt ---> resultado="+engine((int)5,(int)5).calcular(0,0));
        System.out.println("==> CalculadoraLong ---> resultado="+engine((long)6,(long)2).calcular(6,2));
    }
    private static Entero engine(int a,int b){
        return (x,y) -> a*b;
    }
    private static Largo engine(int a, int b){
        return (x,y) -> a-b;
    }
}


//Los valores de manera local y no de manera global
//