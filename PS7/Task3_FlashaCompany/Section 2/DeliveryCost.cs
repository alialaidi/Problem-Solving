using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Task3_FlashaCompany.Section_2
{
    public class DeliveryCost
    {
        private decimal _OrderValue;
        private decimal _DeliveryDistance;
        private decimal _DeliveryCost;

        public DeliveryCost(decimal OrderValue, decimal DeliveryDistance)
        {
            _OrderValue = OrderValue;
            _DeliveryDistance = DeliveryDistance;
        }

        public decimal CalculateDeliveryCost()
        {
            if (_OrderValue <= 50 && _DeliveryDistance <= 50)
            {
                _DeliveryCost = 10;
            }
            else if ((_OrderValue > 50 && _OrderValue <=100) && (_DeliveryDistance > 50 && _DeliveryDistance <=100))
            {
                _DeliveryCost = 20;
            }
            else if ((_OrderValue > 100 && _OrderValue <= 200) && (_DeliveryDistance > 100 && _DeliveryDistance <= 200))
            {
                _DeliveryCost = 30;
            }
            else if (_OrderValue > 200 && _DeliveryDistance > 200)
            {
                _DeliveryCost = 50;
            }

            return _DeliveryCost;
        }

        public void DisplayDeliveryCost()
        {
            /*
                FinalAmount = OrderValue + DeliveryFee
             */
            decimal cost = CalculateDeliveryCost();
            decimal FinalAmount = _OrderValue + cost;

            Console.WriteLine($"The DeliveryFee = {cost}");
            Console.WriteLine($"The Total Amount = {FinalAmount}");
            
        }

    }
}
