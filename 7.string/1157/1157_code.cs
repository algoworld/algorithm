using System;
using System.Linq;

namespace ch7_5_1157
{
    class Program
    {
        static void Main(string[] args)
        {
            string str_m = Console.ReadLine();
            string str = str_m.ToUpper();
            //Console.WriteLine(str);
            int num = 'Z' - 'A';
           // Console.WriteLine("num : " + num);
            char[] ch;
            ch = str.ToCharArray();

            int[] count = new int[100];
            for (int i = 0; i < count.Length; i++)
                count[i] = 0;
       
                
                //Enumerable.Repeat<int>(0, num).ToArray<int>();
            

            for(int i = 0; i < ch.Length; i++)
            {
                int n = ch[i] - 'A';
                count[n]++;
                //Console.WriteLine("idx : " + n + "  count : " + count[n]);
            }
            int max=0, max_num1 = 0, max_num2 = 0;
            for(int i = 0;i < num+1; i++)
            {
                //Console.WriteLine("Count idx : " + i + " count[idx] : " + count[i] );
                if (max_num1 <= count[i])
                {
                    max_num2 = max_num1;
                    max_num1 = count[i];
                    max = i;

                    //Console.WriteLine("max: "+ max );
                }
            }
            char ch_result = Convert.ToChar('A' + max);
            if (max_num2 != max_num1)
                Console.WriteLine(ch_result);
            else
                Console.WriteLine('?');
            
        }
    }
}
