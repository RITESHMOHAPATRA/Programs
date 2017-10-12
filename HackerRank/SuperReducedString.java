import java.util.*;
class SuperReducedString{
  public static void main(String args[]){
    Scanner sc = new Scanner(System.in);
    System.out.print("\nEnter a string:");
    String input = sc.nextLine();

    Stack st = new Stack();
    st.push(input.charAt(0));

    for(int i = 1; i < input.length();i++){
      if(!st.empty() && input.charAt(i) == (char)st.peek()){
        char c = (char)st.pop();
      }else{
        st.push(input.charAt(i));
      }
    }

    if(st.empty())
      System.out.println("Empty String");
    else{
      StringBuilder sb = new StringBuilder();
      while(!st.empty()){
        char c = (char)st.pop();
        sb.append(c);
      }
      System.out.println(sb.reverse());
    }
  }
}
