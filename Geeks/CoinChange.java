import java.util.*;
class CoinChange{
  public int numberOfWays(int arr[],int m,int n){
    int store[] = new int[n+1];
    store[0] = 1;

    for(int i = 0;i < m;i++){
      for(int j = arr[i];j <=n;j++){
        store[j] += store[j - arr[i]];
      }
    }
    return store[n];
  }
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    System.out.print("\nEnter the value of n:");
    int n = sc.nextInt();
    System.out.print("\nEnter the number of coins(m):");
    int m = sc.nextInt();
    System.out.println("\nEnter the value of the coins:");
    int coin[] = new int[m];
    for(int i = 0; i < m;i++){
      coin[i] = sc.nextInt();
    }
    sc.close();
    //int result =  new CoinChange().numberOfWays(coin,m,n);
    System.out.print("\nTotal number of ways:" +  new CoinChange().numberOfWays(coin,m,n));
  }
}
