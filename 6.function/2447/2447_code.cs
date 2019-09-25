using System;

namespace ch6_5_2447
{
    class Program
    {
    

        static void star(int modN, int i, int j)
        {
            if ((i / modN) % 3 == 1 && (j / modN) % 3 == 1)
                Console.Write(" ");
            else
            {
                if (modN / 3 == 0)
                    Console.Write("*");
                else
                    star(modN / 3, i, j);
            }
        }


        static void Main(string[] args)
        {
            int n;
            n = int.Parse(Console.ReadLine());

            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                    Program.star(n, i, j);
                Console.Write("\n");
            }
        }
    }
}
