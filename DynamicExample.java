public class DynamicExample
{
    public static class Baseclass
    {
        void Display()
        {
            System.out.println("This is Base class");
        }
    }
 
    public static class Derivedclass extends Baseclass
    {
       
        void Display()
        {
            System.out.println("This is derived class");
        }
    }
 
    public static void main(String[] args)
    {
        Baseclass A = new Baseclass();
        Baseclass B = new Derivedclass();
        A.Display();
        B.Display();
    }
}
