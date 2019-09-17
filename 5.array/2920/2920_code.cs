using System;

namespace _5_3
{
    class Program
    {
        static void Main(string[] args)
        {
            int max = -1000000, min = 1000000;
            int[] array = new int[8];

            string str = Console.ReadLine();
            string[] str_unit = str.Split(' ');

            int[] unit = new int[8];
            int ascount = 0,discount=0;
            for (int i = 0; i < 8; i++)
            {
                unit[i] = int.Parse(str_unit[i]);
            }

            for (int i = 0; i < 8; i++)
            {
                array[i] = unit[i];
            }

            for (int i = 0; i < 8; i++)
            {
                if (array[i] == i+1)
                    ascount++;
                if (array[i] == 8-i)
                    discount++;
            }

            if (ascount == 8)
                Console.WriteLine("ascending");
            else if (discount == 8)
                Console.WriteLine("descending");
            else
                Console.WriteLine("mixed");
        }
    }
}
