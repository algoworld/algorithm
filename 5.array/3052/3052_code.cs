using System;

namespace ch5_5_3052
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] num = new int[10];


            for (int i = 0; i < 10; i++)
            {
                num[i] = int.Parse(Console.ReadLine());
                num[i] %= 42;
            }

            int[] remains = new int[42];
            int count = 0;
            Array.Clear(remains, 0, remains.Length);

            for (int i = 0; i < 10; i++)
            {
                int index = num[i];
                remains[index]++;

            }

            for (int i = 0; i < remains.Length; i++)
            {
                if (remains[i] > 0)
                    count++;

            }

            Console.WriteLine(count);
        }
    }
}