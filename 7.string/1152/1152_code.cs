using System;

namespace ch7_6_1152
{
    class Program
    {
        static void Main(string[] args)
        {
            string str = Console.ReadLine();
            string str_a = str.Trim();
            string[] str_arr = str_a.Split(" ");
            if (str_a == "")
                Console.WriteLine(0);
            else
                Console.WriteLine(str_arr.Length);
        }
    }
}
