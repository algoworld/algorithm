using System;

namespace ch7_10_1316
{
    class Program
    {
        static bool wc(string str)
        {
            int az_num = 'z' - 'a';
            bool[] az_count = new bool[az_num];

            for (int i = 0; i > az_num; i++)
            {
                az_count[i] = false;
            }

                char[] a = str.ToCharArray();
                for (int j = 0; j < a.Length; j++)
                {
                    int k = a[j] - 'a';
                    if (az_count[k])
                    {
                        return false;
                    }else {
                    char tmp = a[j];
                    az_count[k] = true;

                   while(true)
                    {
                        if ((j+1) == a.Length)
                            break;
                        if(tmp != str[++j])
                        {
                            j--;
                            break;
                        }
                        
                    }

                    }
                }
            return true;
            
        }
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            string[] str = new string[n];
            int count = 0;

            for(int i = 0; i < n; i++)
            {
                str[i] = Console.ReadLine();

                if (wc(str[i]))
                    count++;
            }

            Console.WriteLine(count);
        }
    }
}
