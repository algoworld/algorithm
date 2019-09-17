using System;

namespace ch5_1
{
    class Program
    {
        static void Main(string[] args)
        {
            int num = int.Parse(Console.ReadLine());
            int max = -1000000, min= 1000000;
            int[] array = new int[num];

            string str = Console.ReadLine();
            string[] str_unit = str.Split(' ');

            int[] unit = new int[num];

            for(int i = 0; i< num; i++)
            {
                unit[i] = int.Parse(str_unit[i]);
            }

            for(int i = 0; i < num; i++)
            {
                array[i] = unit[i];
            }

            for (int i = 0; i < num; i++)
            {

                if (min > array[i])
                {
                    min = array[i];
                }

                if (max < array[i])
                {
                    max = array[i];
                }
                
            }

            Console.WriteLine(min + " " + max);
        }
    }
}
