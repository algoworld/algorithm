using System;

namespace _5_2
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] num = new int[9];
            int max = 0, min = 100;
            int index = 0;

            for(int i = 0; i < 9; i++)
            {
                num[i] = int.Parse(Console.ReadLine());
            }

            for(int i = 0; i < 9; i++)
            {
                if (num[i] > max)
                {
                    max = num[i];
                    index = i;
                }

            }
            index++;

            Console.WriteLine(max + "\n" + index);
        }
    }
}
