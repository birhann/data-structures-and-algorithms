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
            Console.WriteLine("\nBubbleSort");
            BubbleSort(data);
            
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

        public static void exchange(int[] data, int m, int n)
        {//Dizi içerisinde elemanın yer değiştirilmesi
            int temporary;
            temporary = data[m];
            data[m] = data[n];
            data[n] = temporary;
            write(data,m,n);
        }

        public static void BubbleSort(int[] data)
        {
            int i, j;
            int N = data.Length;

            for (j = N - 1; j > 0; j--)
            {
                for (i = 0; i < j; i++)
                {
                    if (data[i] > data[i + 1])
                        exchange(data, i, i + 1);
                }
            }
        }


    }
}