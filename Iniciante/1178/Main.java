import java.io.IOException;
import java.math.BigDecimal;
import java.math.MathContext;
// import java.math.RoundingMode;
import java.text.DecimalFormat;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws IOException
    {
        Scanner sc = new Scanner(System.in);
        BigDecimal x = sc.nextBigDecimal();
        BigDecimal two = BigDecimal.valueOf(2);
        BigDecimal result;
        DecimalFormat df = new DecimalFormat("0.0000");

        for (int i = 0; i < 100; i++)
        {
            result = x.divide(two.pow(i), MathContext.DECIMAL128);
            // result = result.setScale(4, RoundingMode.FLOOR);
            System.out.println("N[" + i + "] = " + df.format(result));
        }

        sc.close();
    }
}
