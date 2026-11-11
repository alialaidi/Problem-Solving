using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Task3_FlashaCompany.Section_1
{
    public class PersonalInformationCard
    {
        private string personName;
        private short Age;
        private int hight;
        private string status;

        public PersonalInformationCard(string personName, short Age, int hight, string status)
        {
            this.personName = personName;
            this.Age = Age;
            this.hight = hight;
            this.status = status;
        }

        public void DisplayInformation()
        {
            Console.WriteLine("Name: " + personName);
            Console.WriteLine("Age: " + Age);
            Console.WriteLine("Height: " + hight);
            Console.WriteLine("Status: " + status);
        }

    }
}
