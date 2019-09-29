using System;

namespace ch7_8_5622
{
    class Program
    {
        static void Main(string[] args)
        {
            string str = Console.ReadLine();

            char[] ch = str.ToCharArray();
            Console.WriteLine(ch);
            int[] count = new int[ch.Length];

            for(int i =0;i<ch.Length;i++){
                switch (ch[i])
                {
                    case 'A':
                    case 'B':
                    case 'C':
                        count[i] = 2;
                        break;
                    case 'D':
                    case 'E':
                    case 'F':
                        count[i] = 3;
                        break;
                    case 'G':
                    case 'H':
                    case 'I':
                        count[i] = 4;
                        break;
                    case 'J':
                    case 'K':
                    case 'L':
                        count[i] = 5;
                        break;
                    case 'M':
                    case 'N':
                    case 'O':
                        count[i] = 6;
                        break;
                    case 'P':
                    case 'Q':
                    case 'R':
                    case 'S':
                        count[i] = 7;
                        break;
                    case 'T':
                    case 'U':
                    case 'V':
                        count[i] = 8;
                        break;
                    case 'W':
                    case 'X':
                    case 'Y':
                    case 'Z':
                        count[i] = 9;
                        break;
                    default:
                        return;
                }

            }
            int sum = 0;

            for(int i=0;i<ch.Length;i++)
            {
                count[i] += 1;
                sum += count[i];
            }
            Console.WriteLine(sum);

        }
    }
}
