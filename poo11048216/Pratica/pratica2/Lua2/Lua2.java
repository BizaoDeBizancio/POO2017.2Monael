import java.util.Scanner;

public class Lua2
{
    
    public static void main(String[] args)
    {
        Scanner entrada = new Scanner(System.in);
        
        
        int n, m1, m2;
        
        n = entrada.nextInt();
        
        for(int i=0; i<n; i++){
            
            m1 = entrada.nextInt();
            m2 = entrada.nextInt();
        
            if(m2<m1 && m2<=96 && m2>=3){
                System.out.println("Minguante");
            }else{
                if(m2>=0 && m2<=2){
                    System.out.println("Nova");
                }else{
                    if(m2>=3 && m2<=96){
                        System.out.println("Crescente");   
                    }else{
                        if(m2>=97 && m2<=100){
                            System.out.println("Cheia");
                        }
                    }
                }
            }
        }
    }
}