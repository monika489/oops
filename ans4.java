class A{
  private int x,y;
  public A( int x,int y){
     this.x=x;
     this.y=y;
   }
   public String toString()
   {
       return String.format(x+ "+ i " +y);
   }
}
public class ans4{
         public static void main(String[] args) {
        A c1 = new A(1,2);
        System.out.println(c1);
    }
    }
