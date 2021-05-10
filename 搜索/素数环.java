/*题目描述
给定 n (n<=20) 把 1~n的n个数组成一个环，使得相邻的两个数和都是素数，如果不存在输出no solution。

输入
一个n（2<=n<=20）
输出
输出这n个数 ，使得相邻的两个数都是素数，如果不存在输出no solution

样例输入
4
样例输出
1 2 3 4

提示
如果存在多组，请输出字典序最小的那个

思路：素数打表，查询快
           dfs
           注意环的首尾判断
*/
    import java.util.*;
    import java.util.Scanner;
    public class Main {
        static int n;
        static int[] A = new int[50];
        static int maxn = 50;
        private static boolean flag;
     
        static boolean isPrime(int x) {
            if (x <= 1) return false;
            for (int i = 2; i <= Math.sqrt(x); i++) {
                if (x % i == 0) return false;
            }
            return true;
        }
        static boolean[]primeList = new boolean[maxn];//素数表
        static boolean[] book = new boolean[maxn];
        public static void main(String[] args) {
            int i;
            n = cin.nextInt();
            for (i = 2; i <=2*n; i++) { 
                primeList[i]=isPrime(i);
            }
            for (i = 0; i < n; i++) {
                A[i] = i + 1;
            }  //第一个排列
            if (n % 2 == 0) {
                dfs(1);
            }
            if (!flag) {
                System.out.println("no solution");
            }
        }
        static Scanner cin = new Scanner(System.in);
        static void dfs(int cur) {
            if (flag)
                return;
            if (primeList[A[0] + A[n - 1]]) {
                if (cur == n) {//递归边界
                    for (int i = 0; i < n; i++) System.out.print(A[i] + " ");
                    //System.out.println();
                    flag = true;
                } else {
                    for (int i = 2; i <= n; i++) {
                        if (!book[i])
                            if (primeList[i + A[cur - 1]]) {
                                A[cur] = i;
                                book[i] = true;
                                dfs(cur + 1);
                                book[i] = false;
                            }
                    }
                }
            } else {
                for (int i = 2; i <= n; i++) {
                    if (!book[i] && primeList[i + A[cur - 1]]) {
                        A[cur] = i;
                        book[i] = true;
                        dfs(cur + 1);
                        book[i] = false;
                    }
                }
            }
        }
    }



