using System;

namespace ch7_9_2941
{
    class Program
    {
        static void Main(string[] args)
        {
            string str = Console.ReadLine();
            int count = 0;
            if (str == " ")
            {
                Console.Write(count);
                return;
            }
            char[] ch = str.ToCharArray();

            int pre = 0;
            for(int i = 0; i < ch.Length-1; i++)
            {
                string s = "";

                s = Convert.ToString(ch[i]) + Convert.ToString(ch[i + 1]);
             
                
                if (s == "c=" || s == "c-" || s == "d-" || s == "lj" || s == "nj" || s == "s=" || s == "z=")
                {
                    if (i == ch.Length - 2)
                        pre++;
                        
                    count++;
                    i++;
                    
                }else if (s == "dz")
                {

                    if (Convert.ToString(ch[i + 2]) == "=")
                    {
                        if (i == ch.Length - 2)
                            pre++;
                        count++;
                        i += 2;
                       
                    }
                }
                else { count++; }
                
                
            }

            if (pre >0)
                Console.Write(count);
            else
            { 
                Console.Write(count + 1);
            }
        }
    }
}
