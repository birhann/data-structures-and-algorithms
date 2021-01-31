using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
 * Hikmetcan ÖZCAN - Kocaeli University
 * Arama ve Sıralama Algoritmaları ve Örnekleri
 * 
 */


namespace SearchAndSort
{
    class Program
    {
        static int[] data = new int[10];
        static void Main(string[] args)
        {
            ArrayGenerate(data);
            Console.WriteLine("New Example Array");
            write(data, 0, 0);
            Console.WriteLine("\nLinearSearch\n");
            LinearSearch(data,12);

            Console.WriteLine("\nBinarySearch");
            int[] values = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
            Array.Sort(values);
            Console.Write("[ ");
            for (int i = 0; i < values.Length; i++)
            {
                Console.Write("{0} ", values[i]);
            }
            Console.Write(" ]\n 1 ve 5 degeri hangi indexlerde?\n");

            int index1 = Array.BinarySearch(values, 1);
            int index2 = Array.BinarySearch(values, 5);
            Console.WriteLine("1 degerinin index numarası : " + index1);
            Console.WriteLine("5 degerinin index numarası : " + index2);

            Console.ReadLine();
        }

        public static void ArrayGenerate(int[] data)
        {
            Random r = new Random();
            for (int i = 0; i < data.Length; i++)
                data[i] = r.Next(100);
        }

        public static void write(int[] data, int m, int n)
        {
            Console.Write("\n[ ");
            for (int i = 0; i < data.Length; i++)
            {
                Console.Write("{0} ", data[i]);
            }
            Console.Write(" ] {0}<-->{1}", data[m], data[n]);
        }

        public static void LinearSearch(int[] data, int x)
        {
            data[8] = x;//Dizi degerleri rastgele olduğundan dolayı
            for (int i = 0; i < data.Length; i++)
            {
                Console.Write("{0}=={1}?--->", x, data[i]);
                if (x == data[i])
                {
                    Console.WriteLine("True");
                    return;
                }
                else
                    Console.WriteLine("False");

            }
        }
    }
}
