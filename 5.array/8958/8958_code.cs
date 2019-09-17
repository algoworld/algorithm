using System;

namespace ch5_7_8958
{
    class Program
    {
        static void Main(string[] args)
        {
            int num;
            
            num = int.Parse(Console.ReadLine());
            string[] array = new string[num];
            

            for(int i = 0; i < array.Length; i++)
            {
                array[i] = Console.ReadLine();
            }

            for(int i = 0; i < array.Length; i++)
            {
                int point = 0;
                int plus = 0;
                char[] unit = array[i].ToCharArray();

                for(int j = 0; j < unit.Length; j++)
                {
                    if (unit[j] == 'O')
                    {
                        point += (1 + plus);
                        plus++;
                    }
                    else if (unit[j] == 'X')
                    {
                        plus = 0;
                    }
                }
                Console.WriteLine(point);
            }
        }
    }
}
