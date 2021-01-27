using System;
using System.Collections.Generic;
using System.Data.SqlTypes;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
 * Hikmetcan Özcan - Kocaeli University
 * Bağlı Liste Veri Ekleme / Arama / Ekrana Yazma işlemleri
 */

namespace BagliListe
{

    public class Dugum
    {
        object veri = null;
        Dugum sonraki = null;
        Dugum enbasdugum = null;

        public void BasaEkle(object veri)
        {
            Dugum yeni_dugum = new Dugum();
            yeni_dugum.veri = veri;
            yeni_dugum.sonraki = enbasdugum;
            enbasdugum = yeni_dugum;
        }

        public void SonaEkle(object veri)
        {
            Dugum yeni_dugum = new Dugum();
            yeni_dugum.veri = veri;
            // En bas dugum boş ise listeye ilk defa dugum ekleniyor demektir.
            if (enbasdugum == null)
            {
                enbasdugum = yeni_dugum;
                enbasdugum.sonraki = null;
            }
            else
            {
                // En son dugumu buluncaya kadar ilerle ve en sona dugumu ekle 
                Dugum mevcut_dugum = enbasdugum;
                while (mevcut_dugum.sonraki != null)
                {
                    mevcut_dugum = mevcut_dugum.sonraki;
                }

                mevcut_dugum.sonraki = yeni_dugum;
            }

        }

        public Dugum Ara(object veri)
        {
            Dugum mevcut_dugum = enbasdugum;
            // loop until the last node  
            while (mevcut_dugum.sonraki != null)
            {
                if (mevcut_dugum.veri == veri)
                    return mevcut_dugum;
                mevcut_dugum = mevcut_dugum.sonraki;
            }

            return null;

        }

        public void ArayaEkle(object ara,object veri)
        {
            Dugum onceki = Ara(ara.ToString());


            Dugum yeni_dugum = new Dugum();
            yeni_dugum.veri = veri;

            yeni_dugum.sonraki = onceki.sonraki;
            onceki.sonraki = yeni_dugum;
        }
        public void ListeyiYaz()
        {
            Dugum mevcut_dugum = enbasdugum;
            // loop until the last node  
            while (mevcut_dugum.sonraki != null)
            {
                Console.WriteLine(mevcut_dugum.veri);
                mevcut_dugum = mevcut_dugum.sonraki;
            }

            Console.WriteLine(mevcut_dugum.veri);
            Console.ReadLine();

        }
    }

    class Program
    {
        static void Main(string[] args)
        {
            Dugum dugum_nesnesi = new Dugum();

            dugum_nesnesi.SonaEkle("Bir");
            dugum_nesnesi.SonaEkle("İki");
            dugum_nesnesi.SonaEkle("Uc");
            dugum_nesnesi.SonaEkle("Dort");
            dugum_nesnesi.BasaEkle("En basa veri ekle");

            dugum_nesnesi.ArayaEkle("Uc","arayaEkle");

            dugum_nesnesi.ListeyiYaz();
        }
    }
}