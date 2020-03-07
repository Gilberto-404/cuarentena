public class uno{
    public static void main(String[] args){
        uno.engine((long x,long y)->x+y);
        uno.engine((int x,int y)->x*y);
        uno.engine((long x,long y)->x/y);
        uno.engine((int x,int y)->x-y);
        uno.engine((int x,int y)->x%y);

    }
    private static void engine(Cint  cal){
        int x=2,y=4;
        int resultado=cal.calcular(x,y);
        System.out.println("resultado ="+resultado);
    }
    private static void engine(Clong  cal){
        long x=2,y=4;
        long resultado=cal.calcular(x,y);
        System.out.println("resultado ="+resultado);
    }
}