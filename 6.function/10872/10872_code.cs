using System;

namespace ch6_4_10872_2
{
    class Program
    {
        static void Main(string[] args)
        {
            int num = int.Parse(Console.ReadLine());
            int result = 1;
            while (true)
            {
                if (num == 0)
                    break;

                result *= num;
                if (num == 1)
                    break;
                else if (num > 1)
                    num--;
                
                    
            }

            Console.WriteLine(result);
        }
    }
}
