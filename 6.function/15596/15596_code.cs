using System;

namespace ch6_1_15596
{
    class Program
    {
        int SumOfArray(int[] arr,int num)
        {
            int sum = 0;
            for(int i = 0; i < num; i++)
            {
                sum += arr[i];
            }

            return sum;
        }
        static void Main(string[] args)
        {
            
        }
    }
}
