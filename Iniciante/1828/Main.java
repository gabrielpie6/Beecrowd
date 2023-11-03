import java.io.IOException;
import java.util.Scanner;

public class Main {
    enum Type {
        PEDRA(0),
        PAPEL(1),
        TESOURA(2),
        LAGARTO(3),
        SPOCK(4),
        DRAW(5);

        private final int value;

        Type(int value) {
            this.value = value;
        }

        public int getValue() {
            return value;
        }
    }

    enum Player {
        SHELDON,
        RAJ,
        DRAW
    }

    public static class Game {
        Type obj;
        Player p;

        static Type[][] matrix = new Type[][] {
            {Type.DRAW,     Type.PAPEL,     Type.PEDRA,     Type.PEDRA,     Type.SPOCK},
            {Type.PAPEL,    Type.DRAW,      Type.TESOURA,   Type.LAGARTO,   Type.PAPEL},
            {Type.PEDRA,    Type.TESOURA,   Type.DRAW,      Type.TESOURA,   Type.SPOCK},
            {Type.PEDRA,    Type.LAGARTO,   Type.TESOURA,   Type.DRAW,      Type.LAGARTO},
            {Type.SPOCK,    Type.PAPEL,     Type.SPOCK,     Type.LAGARTO,   Type.DRAW}
        };

        public Game (String str)
        {
            switch (str) {
                case "pedra": 
                    obj = Type.PEDRA;
                    break;
                case "papel":
                    obj = Type.PAPEL;
                    break;
                case "tesoura":
                    obj = Type.TESOURA;
                    break;
                case "lagarto":
                    obj = Type.LAGARTO;
                    break;
                case "Spock":
                    obj = Type.SPOCK;
                    break;
            }
        }

        public static Player playGame(Game g1, Game g2)
        {
            Type t1 = g1.obj;
            Type t2 = g2.obj;

            Type result = matrix[t1.getValue()][t2.getValue()];
            if (t1 == result)
                return g1.p;
            else
            if (t2 == result)
                return g2.p;
            else
                return Player.DRAW;
        }
    }
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        String str1, str2, strResult;
        int n = sc.nextInt();

        Game g1, g2;
        Player result;

        for (int i = 0; i < n; i++)
        {
            str1 = sc.next();
            str2 = sc.next();

            g1 = new Game(str1);
            g1.p = Player.SHELDON;
            g2 = new Game(str2);
            g2.p = Player.RAJ;

            result = Game.playGame(g1, g2);
            if (result == Player.SHELDON)
                strResult = "Bazinga!";
            else
            if (result == Player.RAJ)
                strResult = "Raj trapaceou!";
            else
                strResult = "De novo!";
            System.out.println("Caso #" + (i+1) + ": " + strResult);
        }

        sc.close();
    }
}