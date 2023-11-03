import java.io.IOException;
import java.util.Arrays;
import java.util.Scanner;

public class Main {
    enum Player {
        MIKAIL,
        NILS,
        END
    }
    public static class MNTree {
        public class Node {
            Player p;
            Node[] sons;
            Node parent;
            double currentLife;
            Player winnerBelow;
        }
        Node root = new Node();
        double[] guns;
        
        public MNTree(double initialLife, double[] guns)
        {
            this.guns = guns;

            root.currentLife = initialLife;
            root.p = Player.NILS;
        }

        public void calculate(Node node)
        {
            if (node.currentLife <= 1.0d)
            {
                Node n;
                for (int i = 0; i < guns.length; i++)
                {
                    n = new Node();
                    n.currentLife = node.currentLife * guns[i];
                    n.parent = node;
                    if (node.p == Player.NILS)
                        n.p = Player.MIKAIL;
                    else
                        n.p = Player.NILS;
                    node.sons[i] = n;

                    calculate(n);
                }
            }
            else
            {
                node.p = Player.END;
            }
        }
    }
 
    public static void main(String[] args) throws IOException {
            Scanner sc = new Scanner(System.in);

            int n = sc.nextInt();
            double x;
            int k, mikail, nils;

            double[] guns;

            MNTree tree;

            // PARA CADA JOGO
            for (int i = 0; i < n; i++)
            {
                // LEITURA DOS PARAMETROS
                x = sc.nextDouble();
                k = sc.nextInt();
                guns = new double[k];
                for (int j = 0; j < k; j++)
                    guns[j] = sc.nextDouble();

                tree = new MNTree(x, guns);



            }

            sc.close();
    }
 
}