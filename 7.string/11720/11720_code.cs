using System;

namespace ch7_2_11720
{
    class Program
    {
        static void Main(string[] args)
        {
            int num = Convert.ToInt32(Console.ReadLine());
            string str = Console.ReadLine();
            char[] ch_num = new char[num];
            ch_num = str.ToCharArray();

            int[] str_num = new int[num];
            int sum = 0; 
            for(int i = 0; i< num; i++)
            {
                sum += (ch_num[i]-'0');
   
            }

            Console.WriteLine(sum);
        }
    }
}
