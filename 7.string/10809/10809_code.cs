using System;

namespace ch7_3_10809
{
    class Program
    {
        static void Main(string[] args)
        {
            string str = Console.ReadLine();
            char[] ch = str.ToCharArray();
            int num = 'z' - 'a';
            int[] count = new int[num];
            int[] location = new int[num];
            for(int i = 0; i < ch.Length; i++)
            {
                int idx = ch[i] - 'a';
                count[idx]++;
                location[idx] = i;
            }
            string st = "";
            for (int i = 0; i < num; i++)
            {
                if (count[i] > 0)
                    st += Convert.ToString(location[i]);
                else
                    st += "-1";
               
                st += " ";
            }

            Console.WriteLine(st);

        }
    }
}
