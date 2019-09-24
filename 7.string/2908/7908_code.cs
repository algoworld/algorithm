using System;

namespace ch7_7_2908
{
    class Program
    {
        static void Main(string[] args)
        {
            string str = Console.ReadLine();
            string[] str2 = str.Split(' ');
            int[] num = new int[str2.Length];

            for (int i = 0; i < str2.Length; i++)
            {
                char[] ch = str2[i].ToCharArray();
                
                Array.Reverse(ch);
                
                string temp = new string(ch);
                num[i] = Convert.ToInt32(temp);
                
            }
            int max = 0;
            for(int i =0; i < num.Length; i++)
            {
                if (max < num[i])
                    max = num[i];

            }

            Console.WriteLine(max);
        }
    }
}
