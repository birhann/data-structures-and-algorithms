using System;

/*
 * Hikmetcan Özcan - Kocaeli University
 * Arama ve Sıralama Algoritmaları
 * Ödev 1
 * Değerleri rastgele olan 10 elemanlı bir tam sayı dizisi içerisinde aynı değere sahip
 * elemanların sayısının küçükten büyüğe sıralayıp ekrana yazdıran program.
 */

namespace AramaSiralama
{
    class Program
    {
        static int boyut = 10;
        static int farkliElemanSayisi = 0;
        static int[] dizi = new int[boyut];
        static int[] tmpDeger = new int[dizi.Length];
        static int[] tmpAdet = new int[dizi.Length];
        static void Main(string[] args)
        {
            RastgeleDizi();

            ElemanAraVeSay();

            SiralaVeYazdir();

            Console.ReadLine();


        }

        static void RastgeleDizi()
        {

            Random rnd = new Random();
            for (int i = 0; i < dizi.Length; i++)
            {
                dizi[i] = rnd.Next(10) + 1;
                Console.Write("{0} ", dizi[i]);
            }
            Console.WriteLine();



            // dizi = new int[]  { 3, 1, 6, 6, 4, 2, 1, 8, 3, 3 };
            // farklı = new int[] {3, 1, 6, 4, 2, 8 ,0, 0, 0, 0};
            // adet   = new int[] {2, 1, 1, 0, 0, 0, 0, 0, 0, 0 } 
        }

        static void ElemanAraVeSay()
        {

            farkliElemanSayisi = 0;
            for (int i = 0; i < dizi.Length; i++)
            {
                int index = DizideVarMi(tmpDeger, dizi[i]);
                if (index == -1)
                {//tmpDeger dizisinde bu eleman yok.
                    tmpDeger[farkliElemanSayisi] = dizi[i];
                    farkliElemanSayisi++;
                }
                else
                { //tmpDeger dizisinde eleman var ve index numrası elimizde 
                    tmpAdet[index]++;
                }
            }
        }



        static void SiralaVeYazdir()
        {
            int gecici = 0;

            for (int i = 0; i < tmpAdet.Length - 1; i++)
            {
                for (int x = i + 1; x < tmpAdet.Length; x++)
                {
                    if (tmpAdet[i] < tmpAdet[x])
                    {
                        gecici = tmpAdet[x];
                        tmpAdet[x] = tmpAdet[i];
                        tmpAdet[i] = gecici;

                        gecici = tmpDeger[x];
                        tmpDeger[x] = tmpDeger[i];
                        tmpDeger[i] = gecici;
                    }
                }
            }



            int[] siraliDizi = new int[boyut];
            int sayac = 0;
            for (int i = 0; i < farkliElemanSayisi; i++)
            {
                for (int j = 0; j <= tmpAdet[i]; j++)
                {
                    siraliDizi[sayac] = tmpDeger[i];
                    sayac++;
                }
            }

            for (int i = siraliDizi.Length - 1; i >= 0; i--)
            {
                Console.Write("{0} ", siraliDizi[i]);
            }
        }

        static int DizideVarMi(int[] tmp, int deger)
        {
            for (int i = 0; i < tmp.Length; i++)
            {
                if (tmp[i] == deger)
                    return i;
            }
            return -1;
        }
    }
}
