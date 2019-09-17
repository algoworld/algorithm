using System;

namespace ch5_8_4344
{
    class Program
    {
        static void Main(string[] args)
        {
            int case_num;
            case_num = Convert.ToInt32(Console.ReadLine());
            double[] avg_rate = new double[case_num];
            for (int i = 0; i < case_num; i++)
            {
                string str = Console.ReadLine();
                string[] str_unit = str.Split(' ');

                double[] unit = new double[str_unit.Length];
                double sum = 0;
                double avg;
                for (int j = 1; j < str_unit.Length; j++)
                {
                    
                    unit[j] = Convert.ToDouble(str_unit[j]);
                    //Console.WriteLine("unit" + unit[j]);
                    sum += unit[j];
                    // Console.WriteLine("sum"+sum);
                }
                avg = sum / (str_unit.Length-1);
                //Console.WriteLine("avg : " + avg);
                int count = 0;
                
                for (int j = 1; j < str_unit.Length; j++)
                {
                    if (avg < unit[j])
                    {
                        count++;
                    }
                }
                //Console.WriteLine(count);
                avg_rate[i] = (double)(count * 100) / (str_unit.Length-1) ;
               
            }

            for(int i = 0; i < case_num; i++)
            {
                string str = avg_rate[i].ToString("N3");
                Console.WriteLine(str + "%");
            }
           
        }
    }
}
