using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Task3_FlashaCompany.Section_1
{
    public class PurchaseTotal
    {
        private decimal productPrice1, productPrice2, productPrice3;
        private decimal productQuantity1, productQuantity2, productQuantity3;
        private const decimal TaxRate = 0.10m;


        public PurchaseTotal(decimal productPrice1, decimal productQuantity1, decimal productPrice2, decimal productQuantity2, decimal productPrice3, decimal productQuantity3)
        {
            if (productPrice1 < 0 || productPrice2 < 0 || productPrice3 < 0)
                throw new ArgumentException("Prices cannot be negative.");

            if (productQuantity1 < 0 || productQuantity2 < 0 || productQuantity3 < 0)
                throw new ArgumentException("Quantities cannot be negative.");
            this.productPrice1 = productPrice1;
            this.productQuantity1 = productQuantity1;
            this.productPrice2 = productPrice2;
            this.productQuantity2 = productQuantity2;
            this.productPrice3 = productPrice3;
            this.productQuantity3 = productQuantity3;
        }


        //public void DisplayTotal()
        //{ 

        //    decimal subtotal =
        //                (productPrice1 * productQuantity1) +
        //                (productPrice2 * productQuantity2) +
        //                (productPrice3 * productQuantity3);
        //    decimal tax = subtotal * 0.10m;
        //    decimal finalAmount = subtotal + tax;

        //    Console.WriteLine("Subtotal: {0:C}", subtotal);
        //    Console.WriteLine("Tax: {0:C}", tax);
        //    Console.WriteLine("Final Amount: {0:C}", finalAmount);
        //}


        public decimal Subtotal =>
       (productPrice1 * productQuantity1) +
       (productPrice2 * productQuantity2) +
       (productPrice3 * productQuantity3);

        public decimal Tax => Subtotal * TaxRate;

        public decimal FinalAmount => Subtotal + Tax;

        public void DisplayTotal()
        {
            Console.WriteLine("Subtotal: {0:C}", Subtotal);
            Console.WriteLine("Tax: {0:C}", Tax);
            Console.WriteLine("Final Amount: {0:C}", FinalAmount);
        }

    }
}
