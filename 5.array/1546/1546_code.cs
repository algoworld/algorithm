using System;

namespace ch5_6_1546
{
    class Program
    {
        static void Main(string[] args)
        {
            int num = int.Parse(Console.ReadLine());
            double max = 0;

            string str = Console.ReadLine();
            string[] str_unit = str.Split(' ');

            double[] unit = new double[num];

            for (int i = 0; i < num; i++)
            {
                unit[i] = Convert.ToDouble(str_unit[i]);
            }

            for (int i = 0; i < num; i++)
            {
                if (max < unit[i])
                {
                    max = unit[i];
                }
            }

            double sum = 0;

            for(int i = 0; i < num; i++)
            {
                double db = unit[i] / max * 100;
                sum += db;
            }

            Console.WriteLine(sum / num);


        }
    }
}
