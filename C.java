
interface A{
    void display();
}
interface B{
    void show();
}

class C implements A,B{
     public void display()
    {
       System.out.println("Display function");
    }
    public void show()
    {
       System.out.println("show function");
    }
   
    public static void main(String args[]){  
    C obj = new C();  
    obj.display();  
    obj.show();  
 }  
}

