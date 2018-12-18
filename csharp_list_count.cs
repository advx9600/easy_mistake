using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Text.RegularExpressions;
using System.Threading.Tasks;

namespace AAATest
{
    class Program
    {
        static void Main(string[] args)
        {

            List<int> list1 = new List<int>() { 1, 2, 3, 4, 5 };
            List<int> list2 = new List<int>() { 1, 2, 3, 4, 5 };

            List<int> list3 = new List<int>() { 1, 2 };

            while (list1.Count > list3.Count)
            {
                list1.RemoveAt(list1.Count - 1);
                list2.RemoveAt(list1.Count - 1);
            }

            foreach (var item in list2)
            {
                Console.WriteLine(item + "  ");
            }







            // answer is not  1,2
        }

    }
}
