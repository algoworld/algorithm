using System;


namespace ch6_3_4673
{

    
    class Program
    {
        public static int SelfNum(int n)
        {
            
            int sum = n;

            while (true)
            {
                if (n == 0) break;
                sum += n % 10;
                n = n / 10;

            }
            Console.Write(sum+"\n");
            return sum; 
        }
        static void Main(string[] args)
        {
            bool[] arr = new bool[10001];
            for (int i = 1;i<arr.Length; i++)
            {
                int idx = Program.SelfNum(i);

                if(idx < arr.Length)
                {
                        arr[idx] = true;   
                }
            }

            for(int i = 1; i < arr.Length; i++)
            {
                if (!arr[i]) { Console.WriteLine(i); }
            }
        }
    }
}
