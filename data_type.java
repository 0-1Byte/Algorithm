package tips;

import java.io.IOException;
import java.io.InputStreamReader;
import java.nio.file.Path;
import java.util.Scanner;

import static java.nio.file.Files.newBufferedReader;

/*
基本数据类型输入：
    1.整型输入：sc.nextInt();
    2.单精度浮点型输入：sc.nextFloat();
    3.双精度浮点型：sc.nextDouble();
    4.字符串类型：sc.next();

   5. 如果想输入Char型字符，是不可以用sc.nextChar()；来实现的
    由于Scanner类中没有定义读取char的方法，所以可以先读取string然后再转化为char。
 */

/**
 *     大写字母（A-Z）：65 （A）~ 90（Z）
 *     小写字母（a-z）：97（a） ~ 122（z）
 *     字符数字（'0' ~ '9'）：48（'0'） ~ 57（'9'）
 */
public class data_type {
    public static void main(String[] args) throws IOException {
       Scanner cin = new Scanner(System.in);
        //当正常使用Scanner时（就是输入字符串后再利用charAt(0)得到）
        String x = cin.next();
        char a = x.charAt(0);

        char b = cin.next().charAt(0);
        char c = new java.util.Scanner(System.in).next().charAt(0);

        //当没有Scanner类时

        char d = (char)newBufferedReader((Path) new InputStreamReader(System.in)).read();


    }

}
