using System;

namespace ch6_3_1065
{
    class Program
    {
        static void Main(string[] args)
        {
            string str_num;
            int num;
            int cnt = 0;
            str_num = Console.ReadLine();
            num = int.Parse(str_num);
            

            if (num < 100)
            {
                cnt = num;
            }
            else if(num>=100)
            {
                cnt += 99;
                for (int i = 100; i <= num; i++)
                {
                   
                    char[] str_num_unit;
                    str_num_unit = (i.ToString()).ToCharArray();
                    int[] n = new int[str_num_unit.Length];

                    for (int j = 0; j < str_num_unit.Length; j++)
                    {
                        n[j] = Convert.ToInt32(str_num_unit[j]);
                        
                    }
                    int cnt_ar = 0;
                    for (int k = 0; k < n.Length - 2; k++)
                    {
                        if (n[k + 1] - n[k] == n[k + 2] - n[k + 1])
                        {
                            cnt_ar++;
                        }
                        else
                            break;
                        
                    }
                    if (cnt_ar == n.Length - 2)
                        cnt++;

                    
                }
            }
            Console.WriteLine(cnt);

        }
    }
}
