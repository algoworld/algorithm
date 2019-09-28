using System;

namespace ch6_6_11729
{
    class Program
    {

        static int cnt = 1;

        static void hanoi(int re, int f, int s, int none)
        {

            Program c;

            if (re == 1) {
                Console.WriteLine(f + " " + s);
            }
            else
            {1172
                Program.hanoi(re-1, f, none, s);
                Program.hanoi(1, f, s, none);
                Program.hanoi(re-1, none, s, f);
            }

        }

        static void Main(string[] args)
        {
            int n;
            n = int.Parse(Console.ReadLine());

            for (int i = 1; i <= n; i++)
                Program.cnt *= 2;

            Console.Write(cnt - 1+ "\n");
            Program.hanoi(n, 1, 3, 2);
        }
    }
}
