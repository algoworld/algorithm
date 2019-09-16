using System;

namespace ch5_4_2577
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] num = new int[3];
            int[] count = new int[10];
            Array.Clear(count, 0, count.Length);

            int result;
            string str;
            char[] unit;

            for(int i = 0; i < 3; i++)
            {
                num[i] = int.Parse(Console.ReadLine());
            }

            result = num[0] * num[1] * num[2];
            str = Convert.ToString(result);
            unit = str.ToCharArray();

            for(int i = 0; i < unit.Length; i++)
            {
              
                switch (unit[i])
                {
                    case '0':
                        count[0]++;
                        break;
                    case '1':
                        count[1]++;
                        break;
                    case '2':
                        count[2]++;
                        break;
                    case '3':
                        count[3]++;
                        break;
                    case '4':
                        count[4]++;
                        break;
                    case '5':
                        count[5]++;
                        break;
                    case '6':
                        count[6]++;
                        break;
                    case '7':
                        count[7]++;
                        break;
                    case '8':
                        count[8]++;
                        break;
                    case '9':
                        count[9]++;
                        break;
                }
            }

            for(int i = 0; i < 10; i++)
            {
                Console.WriteLine(count[i]);
            }
            
        }
    }
}
