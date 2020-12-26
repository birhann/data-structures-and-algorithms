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
            Console.WriteLine("\n\n\n");
            ArrayGenerate(data);
            
            Console.WriteLine("New Example Array");
            write(data, 0, 0);
            Console.WriteLine("\nSelectionSort");
            SelectionSort(data);
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
        
        public static int Min(int[] data, int start)
        {
            int minPos = start;
            for (int pos = start + 1; pos < data.Length; pos++)
                if (data[pos] < data[minPos])
                    minPos = pos;
            return minPos;
        }

        public static void exchange(int[] data, int m, int n)
        {
            int temporary;
            temporary = data[m];
            data[m] = data[n];
            data[n] = temporary;
            write(data,m,n);
        }

        public static void SelectionSort(int[] data)
        {
            int i;
            int N = data.Length;

            for (i = 0; i < N - 1; i++)
            {
                int k = Min(data, i);
                if (i != k)
                    exchange(data, i, k);
            }
        }


    }
}