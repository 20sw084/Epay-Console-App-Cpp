#include<iostream>
#include<windows.h>		//For Timing Fuction in HomePage
#include<iomanip>		//For using Manipulaters
#include<fstream>		//For Storing Data in File
#include<conio.h>		//For Hold Function
#include<stdlib.h>	 		//For Setting Color
using namespace std;
void StartingPage(); //Starting Page of Program
void SignIn(); //Made For SignIn Feature
void SignUp(); //Made For SignUp Feature
void HomePage(); //Opening Page
void Icon();
class MAIN //All Classes Linked to it by single inheritance
{
  string PhoneNum;
  string NIC_Num;
  string CNIC_EX_Date;
  string PIN;
  string C_PIN;
  public: static double Op_Bal;
  MAIN() {
    PhoneNum = "";
    NIC_Num = "";
    CNIC_EX_Date = "";
    PIN = "";
    C_PIN = "";
  }
  void GetData(string pn, string nn, string ned, string pin, string cpin, double op_bal) {
    PhoneNum = pn;
    NIC_Num = nn;
    CNIC_EX_Date = ned;
    PIN = pin;
    C_PIN = cpin;
    Op_Bal = op_bal;
  }
  void StoreData() {
    ofstream out("DataInPro.txt");
    out << PhoneNum << "\t" << PIN << "\t" << Op_Bal << "\t" << NIC_Num << "\t" << CNIC_EX_Date;
    out.close();
  }
};
double MAIN::Op_Bal = 10000;
class SendMoney: public MAIN //Child Classes
{
  string AccNo;
  string RecieverAccNo;
  string RecieverCNIC;
  double TransferAmount;
  string RecieverBankAcc;
  string PurposeOfPayment;
  public:
    SendMoney() {
      AccNo = "";
      RecieverAccNo = "";
      RecieverBankAcc = "";
      RecieverCNIC = "";
      TransferAmount = 0;
      PurposeOfPayment = "";
    }
  void MobileAccounttrans(string RAN, double TA) {
    if (Op_Bal < TA) {
      cout << "\nSorry,You have Insufficient Balance. ";
    } else {
      char ch;
      Op_Bal -= TA;
      system("cls");
      cout << "\n\t\t\tNOTIFICATION\n\n\nYou Have Succesfully Tranferred Rs:" << TA << " to Mobile Account Number " << RAN << ".\nNow, Your Remaining Balance is " << Op_Bal << ".\nThank you For using our Service.\nStay Home Stay Safe. Do, More and More Transactions.\n\n\n\n\n\n\n";
      TransferAmount = TA;
      RecieverAccNo = RAN;
      cout << "Interested to go to Main Menu or Just Exit fron Here?\n Type m for main menu and e for exit.\n\t\t\t\t";
      cin >> ch;
      switch (ch) {
      case 'm': {
        system("cls");
        HomePage();
        break;
      }
      case 'e': {
        break;
      }
      case 'M': {
        system("cls");
        HomePage();
        break;
      }
      case 'E': {
        break;
      }
      default:
        cout << "\nInvalid Choice. ";
      }
    }
  }
  void CNICtrans(string RCN, double TA) {
    if (Op_Bal < TA) {
      cout << "\nSorry,You have Insufficient Balance. ";
    } else {
      char ch;
      Op_Bal -= TA;
      system("cls");
      cout << "\n\t\t\tNOTIFICATION\n\n\nYou Have Succesfully Tranferred Rs:" << TA << " to CNIC Number " << RCN << ".\nNow, Your Remaining Balance is " << Op_Bal << ".\nThank you For using our Service.\nStay Home Stay Safe. Do, More and More Transactions.\n\n\n\n\n\n\n";
      TransferAmount = TA;
      RecieverCNIC = RCN;
      cout << "Interested to go to Main Menu or Just Exit fron Here?\n Type m for main menu and e for exit.\n\t\t\t\t";
      cin >> ch;
      switch (ch) {
      case 'm': {
        system("cls");
        HomePage();
        break;
      }
      case 'e': {
        break;
      }
      case 'M': {
        system("cls");
        HomePage();
        break;
      }
      case 'E': {
        break;
      }
      default:
        cout << "\nInvalid Choice. ";
      }
    }
  }
  void BankAcctrans(string RBAN, double TA, string POP) {
    if (Op_Bal < TA) {
      cout << "\nSorry,You have Insufficient Balance. ";
    } else {
      char ch;
      Op_Bal -= TA;
      system("cls");
      cout << "\n\t\t\tNOTIFICATION\n\n\nYou Have Succesfully Tranferred Rs:" << TA << " to CNIC Number " << RBAN << ".\nNow, Your Remaining Balance is " << Op_Bal << ".\nThank you For using our Service.\nStay Home Stay Safe. Do, More and More Transactions.\n\n\n\n\n\n\n";
      RecieverBankAcc = RBAN;
      TransferAmount = TA;
      PurposeOfPayment = POP;
      cout << "Interested to go to Main Menu or Just Exit fron Here?\n Type m for main menu and e for exit.\n\t\t\t\t";
      cin >> ch;
      switch (ch) {
      case 'm': {
        system("cls");
        HomePage();
        break;
      }
      case 'e': {
        break;
      }
      case 'M': {
        system("cls");
        HomePage();
        break;
      }
      case 'E': {
        break;
      }
      default:
        cout << "\nInvalid Choice. ";
      }
    }
  }
};
class LoadHundred: public MAIN //Child Classes
{
  string RecieverNumber;
  public:
    LoadHundred() {
      RecieverNumber = "";
    }
  void Mobile100Load(string RN) {
    if (Op_Bal < 100) {
      cout << "\nSorry,You have Insufficient Balance. ";
    } else {
      char ch;
      Op_Bal -= 100;
      system("cls");
      cout << "\n\t\t\tNOTIFICATION\n\n\nYou Have Succesfully Tranferred Rs: 100 to Mobile Number " << RN << ".\nNow, Your Remaining Balance is " << Op_Bal << ".\nThank you For using our Service.\nStay Home Stay Safe. Do, More and More Transactions.\n\n\n\n\n\n\n";
      RecieverNumber = RN;
      cout << "Interested to go to Main Menu or Just Exit fron Here?\n Type m for main menu and e for exit.\n\t\t\t\t";
      cin >> ch;
      switch (ch) {
      case 'm': {
        system("cls");
        HomePage();
        break;
      }
      case 'e': {
        break;
      }
      case 'M': {
        system("cls");
        HomePage();
        break;
      }
      case 'E': {
        break;
      }
      default:
        cout << "\nInvalid Choice. ";
      }
    }
  }
};
class MobileLoad: public MAIN //Child Classes
{

  string RecieversNumber;

  double TransferAmount;

  public:

    MobileLoad() {
      RecieversNumber = "";
    }

  void Mobile_Load(string RN, double TA)

  {

    if (Op_Bal < TA)

    {

      cout << "\nSorry,You have Insufficient Balance. ";

    } else

    {
      char ch;

      Op_Bal -= TA;
      system("cls");

      cout << "\n\t\t\tNOTIFICATION\n\n\nYou Have Succesfully Tranferred Rs:" << TA << " to Mobile Number " << RN << ".\nNow, Your Remaining Balance is " << Op_Bal << ".\nThank you For using our Service.\nStay Home Stay Safe. Do, More and More Transactions.\n\n\n\n\n\n\n";

      RecieversNumber = RN;
      TransferAmount = TA;

      cout << "Interested to go to Main Menu or Just Exit fron Here?\n Type m for main menu and e for exit.\n\t\t\t\t";
      cin >> ch;

      switch (ch)

      {

      case 'm': {
        system("cls");
        HomePage();

        break;

      }

      case 'e': {

        break;

      }

      case 'M': {
        system("cls");
        HomePage();

        break;

      }

      case 'E': {

        break;

      }

      default:
        cout << "\nInvalid Choice. ";

      }

    }

  }

};
class PayBills: public MAIN //Child Classes
{
  string ConsumerNumber;
  string Company;
  double TransferAmount;
  public:
    PayBills() {
      ConsumerNumber = "";
      TransferAmount = 0;
    }

  void ElectricityBill(string C, long long CN, double TA) {
    if (Op_Bal < TA) {
      cout << "\nSorry,You have Insufficient Balance. ";
    } else {
      char ch;
      system("cls");
      Company = C;
      ConsumerNumber = CN;
      TransferAmount = TA;
      Op_Bal -= TransferAmount;
      cout << "\n\t\t\tNOTIFICATION\n\n\nYou Have Succesfully Paid your Electricity Bill of Rs:" << TransferAmount << " to " << Company << " of Customer Number " << ConsumerNumber << ".\nNow, Your Remaining Balance is " << Op_Bal << ".\nThank you For using our Service.\nStay Home Stay Safe. Do, More and More Transactions.\n\n\n\n\n\n\n";

      cout << "Interested to go to Main Menu or Just Exit from Here?\n Type m for main menu and e for exit.\n\t\t\t\t";
      cin >> ch;
      switch (ch) {
      case 'm': {
        system("cls");
        HomePage();
        break;
      }
      case 'e': {
        break;
      }
      case 'M': {
        system("cls");
        HomePage();
        break;
      }
      case 'E': {
        break;
      }
      default:
        cout << "\nInvalid Choice. ";
      }
    }
  }

  void GasBill(string C, string CN, double TA) {
    if (Op_Bal < TA) {
      cout << "\nSorry,You have Insufficient Balance. ";
    } else {
      char ch;
      Company = C;
      TransferAmount = TA;
      ConsumerNumber = CN;
      Op_Bal -= TransferAmount;
      system("cls");
      cout << "\n\t\t\tNOTIFICATION\n\n\nYou Have Succesfully Paid your Gas Bill of Rs:" << TransferAmount << " to " << Company << " of Consumer Number " << ConsumerNumber << ".\nNow, Your Remaining Balance is " << Op_Bal << ".\nThank you For using our Service.\nStay Home Stay Safe. Do, More and More Transactions.\n\n\n\n\n\n\n";
      cout << "Interested to go to Main Menu or Just Exit from Here?\n Type m for main menu and e for exit.\n\t\t\t\t";
      cin >> ch;
      switch (ch) {
      case 'm': {
        system("cls");
        HomePage();
        break;
      }
      case 'e': {
        break;
      }
      case 'M': {
        system("cls");
        HomePage();
        break;
      }
      case 'E': {
        break;
      }
      default:
        cout << "\nInvalid Choice. ";
      }
    }
  }

  void WaterBill(string C, string CN, double TA) {
    if (Op_Bal < TA) {
      cout << "\nSorry,You have Insufficient Balance. ";
    } else {
      char ch;
      Company = C;
      TransferAmount = TA;
      ConsumerNumber = CN;
      Op_Bal -= TransferAmount;
      system("cls");
      cout << "\n\t\t\tNOTIFICATION\n\n\nYou Have Succesfully Paid your water bill of Rs:" << TransferAmount << " to " << Company << " of Consumer Number " << ConsumerNumber << ".\nNow, Your Remaining Balance is " << Op_Bal << ".\nThank you For using our Service.\nStay Home Stay Safe. Do, More and More Transactions.\n\n\n\n\n\n\n";
      cout << "Interested to go to Main Menu or Just Exit from Here?\n Type m for main menu and e for exit.\n\t\t\t\t";
      cin >> ch;
      switch (ch) {
      case 'm': {
        system("cls");
        HomePage();
        break;
      }
      case 'e': {
        break;
      }
      case 'M': {
        system("cls");
        HomePage();
        break;
      }
      case 'E': {
        break;
      }
      default:
        cout << "\nInvalid Choice. ";
      }
    }
  }

  void TelephoneBill(string CN, double TA) {
    if (Op_Bal < TA) {
      cout << "\nSorry,You have Insufficient Balance. ";
    } else {
      char ch;
      system("cls");
      TransferAmount = TA;
      ConsumerNumber = CN;
      Op_Bal -= TransferAmount;
      cout << "\n\t\t\tNOTIFICATION\n\n\nYou Have Succesfully Paid your PTCL bill of Rs:" << TransferAmount << " of Customer Number " << ConsumerNumber << ".\nNow, Your Remaining Balance is " << Op_Bal << ".\nThank you For using our Service.\nStay Home Stay Safe. Do, More and More Transactions.\n\n\n\n\n\n\n";
      cout << "Interested to go to Main Menu or Just Exit from Here?\n Type m for main menu and e for exit.\n\t\t\t\t";
      cin >> ch;
      switch (ch) {
      case 'm': {
        system("cls");
        HomePage();
        break;
      }
      case 'e': {
        break;
      }
      case 'M': {
        system("cls");
        HomePage();
        break;
      }
      case 'E': {
        break;
      }
      default:
        cout << "\nInvalid Choice. ";

      }
    }
  }

};
class MobilePackages: public MAIN //Child Classes
{
  string Operater;
  string Division;
  string mobile;
  double TransferAmount;
  public:
    MobilePackages() {
      mobile = "", Operater = "";
      TransferAmount = 0;
    }
  void PackageAll(double TA) {
    TransferAmount = TA;
    if (Op_Bal < TA) {
      cout << "\nSorry,You have Insufficient Balance. ";
    } else {
      char ch;
      Op_Bal -= TA;
      system("cls");
      cout << "\n\t\t\tNOTIFICATION\n\n\nYou Have Succesfully Subscribed the Package on that number" << mobile << " \nNow Your Remaining Balance is " << Op_Bal << ".\nThank you For using our Service.\nStay Home Stay Safe. Do, More and More Transactions.\n";
      cout << "Interested to go to Main Menu or Just Exit from Here?\n Type m for main menu and e for exit.\n\t\t\t\t";
      cin >> ch;
      switch (ch) {
      case 'm': {
        system("cls");
        HomePage();
        break;
      }
      case 'e': {
        break;
      }
      case 'M': {
        system("cls");
        HomePage();
        break;
      }
      case 'E': {
        break;
      }
      default:
        cout << "\nInvalid Choice. ";
      }
    }
  }
};
class EducationPayments: public MAIN //Child Classes
{
  double TransferAmount;
  string Institute;
  string AccountNumber;
  string rollnum;
  string feet;
  public:
    EducationPayments() {
      TransferAmount = 0, AccountNumber = "", Institute = "", rollnum = "", feet = "";
    }
  void TransMoney(string AN, double TA, string I, string RN, string ft) {
    if (Op_Bal < TA) {
      cout << "\nSorry,You have Insufficient Balance. ";
    } else {
      char ch;
      TransferAmount = TA;
      Institute = I;
      AccountNumber = AN;
      rollnum = RN;
      feet = ft;
      Op_Bal -= TA;
      system("cls");
      cout << "\n\t\t\tNOTIFICATION\n\n\nYou Have Succesfully Paid !!\n your Roll Number is " << RN << "\n Feet Type is " << ft << "\n your Fee Amount is Rs:" << TA << " to Account Number " << AN << " of " << I << ".\nNow, Your Remaining Balance is " << Op_Bal << ".\nThank you For using our Service.\nStay Home Stay Safe. Do, More and More Transactions.\n\n\n\n\n\n\n";
      cout << "Interested to go to Main Menu or Just Exit from Here?\n Type m for main menu and e for exit.\n\t\t\t\t";
      cin >> ch;
      switch (ch) {
      case 'm': {
        system("cls");
        HomePage();
        break;
      }
      case 'e': {
        break;
      }
      case 'M': {
        system("cls");
        HomePage();
        break;
      }
      case 'E': {
        break;
      }
      default:
        cout << "\nInvalid Choice. ";
      }
    }

  }
};
class EntertainmentAndOnlinePurchases: public MAIN //Child Classes
{
  string EventName;
  double TransferAmount;
  string VoucherName;
  string MovieName;
  string ProductName;
  public:
    EntertainmentAndOnlinePurchases() {
      EventName = "", TransferAmount = 0, MovieName = "", ProductName = "";
    }
  void EventTickets(string EN, double TA) {
    if (Op_Bal < TA) {
      cout << "\nSorry,You have Insufficient Balance. ";
    } else {
      char ch;
      Op_Bal -= TA;
      system("cls");
      EventName = EN;
      TransferAmount = TA;
      cout << "\n\t\t\tNOTIFICATION\n\n\nYou Have Succesfully Booked Your " << EN << " Tickets.\nNow, Your Remaining Balance is " << Op_Bal << ".\nThank you For using our Service.\nStay Home Stay Safe. Do, More and More Transactions.\n\n\n\n\n\n\n";
      cout << "Interested to go to Main Menu or Just Exit fron Here?\n Type m for main menu and e for exit.\n\t\t\t\t";
      cin >> ch;
      switch (ch) {
      case 'm': {
        system("cls");
        HomePage();
        break;
      }
      case 'e': {
        break;
      }
      case 'M': {
        system("cls");
        HomePage();
        break;
      }
      case 'E': {
        break;
      }
      default:
        cout << "\nInvalid Choice. ";
      }
    }
  }
  void MovieTickets(string MN, double TA) {
    if (Op_Bal < TA) {
      cout << "\nSorry,You have Insufficient Balance. ";
    } else {
      char ch;
      Op_Bal -= TA;
      system("cls");
      MovieName = MN;
      TransferAmount = TA;
      cout << "\n\t\t\tNOTIFICATION\n\n\nYou Have Succesfully Booked Your Tickets for " << MN << " Movie.\nNow, Your Remaining Balance is " << Op_Bal << ".\nThank you For using our Service.\nStay Home Stay Safe. Do, More and More Transactions.\n\n\n\n\n\n\n";
      cout << "Interested to go to Main Menu or Just Exit fron Here?\n Type m for main menu and e for exit.\n\t\t\t\t";
      cin >> ch;
      switch (ch) {
      case 'm': {
        system("cls");
        HomePage();
        break;
      }
      case 'e': {
        break;
      }
      case 'M': {
        system("cls");
        HomePage();
        break;
      }
      case 'E': {
        break;
      }
      default:
        cout << "\nInvalid Choice. ";
      }
    }
  }
  void DarazWallet(string PN, double TA) {
    if (Op_Bal < TA) {
      cout << "\nSorry,You have Insufficient Balance. ";
    } else {
      char ch;
      Op_Bal -= TA;
      system("cls");
      ProductName = PN;
      TransferAmount = TA;
      cout << "\n\t\t\tNOTIFICATION\n\n\nYou Have Succesfully Booked " << PN << " Product. Your Product will be Delivered to you within 48 Hours\nNow, Your Remaining Balance is " << Op_Bal << ".\nThank you For using our Service.\nStay Home Stay Safe. Do, More and More Transactions.\n\n\n\n\n\n\n";
      cout << "Interested to go to Main Menu or Just Exit fron Here?\n Type m for main menu and e for exit.\n\t\t\t\t";
      cin >> ch;
      switch (ch) {
      case 'm': {
        system("cls");
        HomePage();
        break;
      }
      case 'e': {
        break;
      }
      case 'M': {
        system("cls");
        HomePage();
        break;
      }
      case 'E': {
        break;
      }
      default:
        cout << "\nInvalid Choice. ";
      }
    }
  }
  void E_Vouchers(string VN, double TA) {
    if (Op_Bal < TA) {
      cout << "\nSorry,You have Insufficient Balance. ";
    } else {
      char ch;
      Op_Bal -= TA;
      system("cls");
      VoucherName = VN;
      TransferAmount = TA;
      cout << "\n\t\t\tNOTIFICATION\n\n\nYou Have Succesfully Booked " << VN << " Voucher. Your Voucher Code is 637343. Follow the instructions to use your voucher.\nNow, Your Remaining Balance is " << Op_Bal << ".\nThank you For using our Service.\nStay Home Stay Safe. Do, More and More Transactions.\n\n\n\n\n\n\n";
      cout << "\n\nInterested to go to Main Menu or Just Exit fron Here?\n Type m for main menu and e for exit.\n\t\t\t\t";
      cin >> ch;
      switch (ch) {
      case 'm': {
        system("cls");
        HomePage();
        break;
      }
      case 'e': {
        break;
      }
      case 'M': {
        system("cls");
        HomePage();
        break;
      }
      case 'E': {
        break;
      }
      default:
        cout << "\nInvalid Choice. ";
      }
    }
  }
};
class GovernmentPayments: public MAIN //Child Classes
{
  double TAX;
  double TrafficChallan;
  string Number;
  public:
    GovernmentPayments() {
      TAX = 0, TrafficChallan = 0, Number = "";
    }
  void TAXPayment(string N, double TX) {
    if (Op_Bal < TX) {
      cout << "\nSorry,You have Insufficient Balance. ";
    } else {
      char ch;
      TAX = TX;
      Number = N;
      Op_Bal -= TX;
      system("cls");
      cout << "\n\t\t\tNOTIFICATION\n\n\nYou Have Succesfully Paid Challan of Rs:" << TX << " to Government TAX Number " << N << " .\nNow, Your Remaining Balance is " << Op_Bal << ".\nThank you For using our Service.\nStay Home Stay Safe. Do, More and More Transactions.\n\n\n\n\n\n\n";
      cout << "Interested to go to Main Menu or Just Exit fron Here?\n Type m for main menu and e for exit.\n\t\t\t\t";
      cin >> ch;
      switch (ch) {
      case 'm': {
        system("cls");
        HomePage();
        break;
      }
      case 'e': {
        break;
      }
      case 'M': {
        system("cls");
        HomePage();
        break;
      }
      case 'E': {
        break;
      }
      default:
        cout << "\nInvalid Choice. ";
      }
    }
  }
  void TCPayment(string N, double TC) {
    if (Op_Bal < TC) {
      cout << "\nSorry,You have Insufficient Balance. ";
    } else {
      char ch;
      TrafficChallan = TC;
      Number = N;
      Op_Bal -= TC;
      system("cls");
      cout << "\n\t\t\tNOTIFICATION\n\n\nYou Have Succesfully Paid Challan of Rs:" << TC << " to Government Challan Number " << N << ".\nNow, Your Remaining Balance is " << Op_Bal << ".\nThank you For using our Service.\nStay Home Stay Safe. Do, More and More Transactions.\n\n\n\n\n\n\n";
      cout << "Interested to go to Main Menu or Just Exit fron Here?\n Type m for main menu and e for exit.\n\t\t\t\t";
      cin >> ch;
      switch (ch) {
      case 'm': {
        system("cls");
        HomePage();
        break;
      }
      case 'e': {
        break;
      }
      case 'M': {
        system("cls");
        HomePage();
        break;
      }
      case 'E': {
        break;
      }
      default:
        cout << "\nInvalid Choice. ";
      }
    }
  }
};
class TravelAndFood: public MAIN //Child Classes
{
  string BusService;
  string Date;
  string From;
  string To;
  double TransferAmount;
  string ResturantName;
  string Menu;
  public:
    TravelAndFood() {
      BusService = "", Date = "", From = "", To = "", TransferAmount = 0;
    }
  void BookTravelTicket(string BS, string D, string F, string T, double TA) {
    BusService = BS;
    Date = D;
    From = F;
    To = T;
    TransferAmount = TA;
    if (Op_Bal < TA) {
      cout << "\nSorry,You have Insufficient Balance. ";
    } else {
      char ch;
      Op_Bal -= TA;
      system("cls");
      cout << "\n\t\t\tNOTIFICATION\n\n\nYou Have Succesfully Booked Your Seat in :" << BS << " From " << F << " To " << T << ".\nNow, Your Remaining Balance is " << Op_Bal << ".\nThank you For using our Service.\nStay Home Stay Safe. Do, More and More Transactions.\n\n\n\n\n\n\n";
      cout << "Interested to go to Main Menu or Just Exit fron Here?\n Type m for main menu and e for exit.\n\t\t\t\t";
      cin >> ch;
      switch (ch) {
      case 'm': {
        system("cls");
        HomePage();
        break;
      }
      case 'e': {
        break;
      }
      case 'M': {
        system("cls");
        HomePage();
        break;
      }
      case 'E': {
        break;
      }
      default:
        cout << "\nInvalid Choice. ";
      }
    }
  }

  void FoodDelivery(string RN, string M, double TA) {
    ResturantName = RN;
    Menu = M;
    TransferAmount = TA;
    if (Op_Bal < TA) {
      cout << "\nSorry,You have Insufficient Balance. ";
    } else {
      char ch;
      Op_Bal -= TA;
      system("cls");
      cout << "\n\t\t\tNOTIFICATION\n\n\nYour Order Have Been Succesfully Booked. It will be Delivered to you in 15-20 Minutes.\nNow, Your Remaining Balance is " << Op_Bal << ".\nThank you For using our Service.\nStay Home Stay Safe. Do, More and More Transactions.\n\n\n\n\n\n\n";
      cout << "Interested to go to Main Menu or Just Exit fron Here?\n Type m for main menu and e for exit.\n\t\t\t\t";
      cin >> ch;
      switch (ch) {
      case 'm': {
        system("cls");
        HomePage();
        break;
      }
      case 'e': {
        break;
      }
      case 'M': {
        system("cls");
        HomePage();
        break;
      }
      case 'E': {
        break;
      }
      default:
        cout << "\nInvalid Choice. ";
      }
    }
  }
};
class AccountDetails: public MAIN //Child Classes
{};
class InviteAndEarn: public MAIN //Child Classes
{

};
class ReadyCash: public MAIN //Child Classes
{

};
class SavingsAndInsurance: public MAIN //Child Classes
{

};
class TillPayments: public MAIN //Child Classes
{

};

int main() {
  system("mode con: lines=33 cols=74");
  StartingPage();
  int ch;
  system("cls");
  //system("Color 0F");
  cout << "\n\n\n\n\e    Enter 1 For Sign In: \n\n\n\e    Enter 2 For Sign Up:\n\n\n\n\t\t\t\tYour Answer is:    ";
  cin >> ch;
  if (ch == 1) {
    SignIn();
  } else if (ch == 2) {
    SignUp();
  } else cout << "\nInvalid Input.";
}
void SignUp() {
  system("cls");
  char ch;
  system("Color 75");
  do {system("cls");
    MAIN R1;
    string pn;
    string nn;
    string ned;
    string pin;
    string cpin;
    double op_bal;
    cout << "\n\n\t\t\tSignUp\n\n";
    cout << "\n\nEnter Mobile Number:  ";
    cin >> pn;
    cout << "\n\nEnter CNIC Number:  ";
    cin >> nn;
    cout << "\n\nEnter CNIC End Date:  ";
    cin >> ned;
    cout << "\n\nEnter Opening Balance: must be Greater than 1000 rupees. ";
    cin >> op_bal;
    if (op_bal < 1000) {
      cout << "\n\nSorry, Your Account Not opened as Balance Must be Greater than 1000";
      break;
    }
    cout << "\n\nEnter PIN:  ";
    cin >> pin;
    cout << "\n\nConfirm your PIN:  ";
    cin >> cpin;
    if (pin != cpin) {
      cout << "\nPasswords dont match.\nFor Try again type (yes/no) ";
      cin >> ch;
    } else {
      cout << "\n\nYour Account Has Been Created \n Let`s Sign In Now";
      R1.GetData(pn, nn, ned, pin, cpin, op_bal);
      R1.StoreData();
      system("cls");
      SignIn();
    }
  }
  while (ch == 'y');
}
void SignIn() {
  system("cls");
  system("Color 75");
  string MN;
  string PIN, ld1;
  string str1, str3;
  double str2;
  char  ch;
   do{system("cls");
   cout << "\n\n\n\n\t\t\tSignIn\n\n";
  cout << "\n\n\nEnter Your Mobile Number:  ";
  cin >> MN;
  cout << "\n\nEnter Your 4-Digit PIN:    ";
  cin >> PIN; //PasswordTaker();
  ifstream in ; in .open("DataInPro.txt");
  if ( in .is_open()) {
    in >> str1 >> ld1 >> str2 >> str3;
   
	if (str1 == MN && ld1 == PIN) {
      cout << "\n\nMatched\n";
      system("cls");
      HomePage();
    } else {
      cout << "\n\nNot Matched";
      cout<<"\n\n\nWants to Try Again (y/n)";
      cin>>ch;
    } in .close();
  }
   else
    cout << "\n\n\n\n\nAlas! Error in Opening File\n\n\n\n\n";
    }while (ch=='y');
}
void HomePage() {
  int ch;
  cout << "\n\t\t\tWelcome"; //string str1,str2,str3,str4;double d;ifstream Jin;Jin.open("FileInPro.txt");Jin>>str1>>str2>>d>>str4>>str3;cout<<str1;Jin.close();
  system("Color A");
  cout << "\n\n\n\e Enter 0 For Exit.";
  cout << "\n\n\n\e Enter 1 For Send Money ";
  cout << "\n\n\e Enter 2 For Self Load of 100 ";
  cout << "\n\n\e Enter 3 For Mobile Load ";
  cout << "\n\n\e Enter 4 For Pay Bill ";
  cout << "\n\n\e Enter 5 For Mobile Packages ";
  cout << "\n\n\e Enter 6 For Education Payments ";
  cout << "\n\n\e Enter 7 For Entertainment and Online Purchases ";
  cout << "\n\n\e Enter 8 For Government Payments ";
  cout << "\n\n\e Enter 9 For Travel and Food ";
  cout << "\n\n\e Enter 10 For Your Account Details ";
  cout << "\n\n\e Enter 11 For Logout \n\n\t\t\t\t Your Answer is: ";
  cin >> ch;
  switch (ch) {
  case 11: {
    system("cls");
    StartingPage();
    break;
  };
  case 0: {
    break;
  } //HomePage lgani h
  case 1: {
    int c;
    system("cls");
    cout << "\n\n\n\t\t\tSend Money\n\n\nEnter 1 in Order to Send Money to a Mobile Account.";
    cout << "\n\nEnter 2 in Order to Send Money to CNIC.";
    cout << "\n\nEnter 3 in Order to Send Money to Bank Account.\n\n\t\t\tYour Answer is:  ";
    cin >> c;
    system("cls");
    if (c == 1) {
      string RAN;
      double TA;
      cout << "\n\n\t\t\tSend Money\n\n";
      SendMoney S1;
      cout << "\nEnter Mobile Account Number \n";
      cin >> RAN;
      cout << "\nEnter Amount \n";
      cin >> TA;
      S1.MobileAccounttrans(RAN, TA);
      break;
    } else if (c == 2) {
      string RCN;
      double TA;
      cout << "\n\n\t\t\tSend Money\n\n";
      SendMoney S1;
      cout << "\nEnter CNIC Number \n";
      cin >> RCN;
      cout << "\nEnter Amount \n";
      cin >> TA;
      S1.CNICtrans(RCN, TA);
      break;
    } else if (c == 3) {
      string RBAN;
      double TA;
      string POP;
      cout << "\n\n\t\t\tSend Money\n\n";
      SendMoney S1;
      cout << "\nEnter Bank Account Number \n";
      cin >> RBAN;
      cout << "\nEnter Amount \n";
      cin >> TA;
      cout << "\nEnter Purpose of Payment \n";
      cin >> POP;
      S1.BankAcctrans(RBAN, TA, POP);
      break;
    } else cout << "\nIncorrect Choice.";
  }
  case 2: {
    string RN, op;
    system("cls");
    cout << "\n\n\t\tRs-100 Mobile Load \n\n";
    cout << "\nEnter Operater.";
    cin >> op;
    cout << "\nEnter Mobile Number \n";
    cin >> RN;
    LoadHundred LH1;
    LH1.Mobile100Load(RN);
    break;
  }
  case 3: {
    string RN;
    int N;
    double TA;
    system("cls");
    bool test = true;
    do {
      cout << "\n\n\t\tMobile Load \n\n";
      cout << "\nSelect Network";

      cout << "\nPress 1 for Jazz\nPress 2 for Ufone\nPress 3 for Telenor\nPress 4 for Warid\nPress 5 for Zong;";
      cout << "\n\t\t\t";
      cin >> N;
      if (N > 5 || N < 1) {
        cout << "\n\tPlease Enter right choice.";
        Sleep(2000);
        system("CLS");
      } else {
        test = false;
      }
    } while (test);

    cout << "\nEnter Mobile Number \n";
    cin >> RN;
    cout << "\nEnter Amount \n";
    cin >> TA;
    MobileLoad ML1;
    ML1.Mobile_Load(RN, TA);
    break;
  }
  case 4: {
    int c;
    system("cls");
    cout << "\n\n\nEnter 1 in Order to Pay your Electricity Bill.";
    cout << "\nEnter 2 in Order to Pay your Gas Bill.";
    cout << "\nEnter 3 in Order to Pay your Water Bill\n";
    cout << "Enter 4 in Order to Pay your Telephone Bill\n\n\t\t\t\tYour Answer:  ";
    cin >> c;
    system("cls");

    if (c == 1) ///BIJLI
    {
      long long CN;
      string C = ""; ///Company
      int choice;
      double TA;
      bool test = true;
      PayBills PB1;
      do {
        cout << "\n\n\t\t\tPay Bill\n\n";
        cout << "\nSelect Company\n";
        cout << "\nPress 1 for K-Electric\nPress 2 for IESCO\nPress 3 for LESCO\nPress 4 for HESCO\nPress 5 for SEPCO\nPress 6 for FESCO\nPress 7 for PESCO\nPress 8 for MEPCO\nPress 9 for QESCO";
        cout << "\n\t\t\t";
        cin >> choice;
        if (choice > 9 || choice < 1) {
          cout << "\n\tPlease Enter right choice.";
          Sleep(2000);
          system("CLS");
        } else {
          test = false;
        }
      } while (test);
      system("CLS");
      test = true;
      do {
        cout << "\n\n\t\t\tPay Bill\n\n";
        cout << "\nEnter 14 Digit Reference Number \n";
        cin >> CN;
        if (CN < 10000000000000 || CN > 100000000000000) {
          cout << "\nInvalid Reference Number";
          Sleep(2000);
          system("CLS");
        } else {
          test = false;
        }
      } while (test);
      cout << "\nEnter Amount \n";
      cin >> TA;
      if (choice == 1) {
        C = "K-Electric";
      }
      if (choice == 2) {
        C = "IESCO";
      }
      if (choice == 3) {
        C = "LESCO";
      }
      if (choice == 4) {
        C = "HESCO";
      }
      if (choice == 5) {
        C = "SEPCO";
      }
      if (choice == 6) {
        C = "FESCO";
      }
      if (choice == 7) {
        C = "PESCO";
      }
      if (choice == 8) {
        C = "MEPCO";
      }
      if (choice == 9) {
        C = "QESCO";
      }
      PB1.ElectricityBill(C, CN, TA);
      break;
    } else if (c == 2) ///GAS
    {
      double TA;
      string C, CN; ///company
      int choice;
      bool test = true;
      PayBills PB1;
      do {
        cout << "\n\n\t\t\tPay Bill\n\n";
        cout << "\nSelect Company\n";
        cout << "\nPress 1 for SSGC\nPress 2 for SNGPL";
        cout << "\n\t\t\t";
        cin >> choice;
        if (choice > 2 || choice < 1) {
          cout << "\n\tPlease Enter right choice.";
          Sleep(2000);
          system("CLS");
        } else {
          test = false;
        }
      } while (test);
      if (choice == 1) {
        C = "SSGC";
        cout << "\nEnter " << C << " Customer ID \n";
      }
      if (choice == 2) {
        C = "SNGPL";
        cout << "\nEnter " << C << " Customer ID\n";
      }
      cin >> CN;
      cout << "\nEnter Amount \n";
      cin >> TA;
      PB1.GasBill(C, CN, TA);
      break;
    }
    ///WATer
    else if (c == 3) ///WATer
    {

      string CN, A = ""; ///Authority
      int choice;
      char ch = '-';
      double TA;
      bool test = true;
      PayBills PB1;
      do {
        cout << "\n\n\t\t\tPay Bill\n\n";
        cout << "\nSelect Authority\n";
        cout << "\nPress 1 for KWSB\nPress 2 for CDA Water\nPress 3 for HDA WASA\nPress 4 for FWASA\nPress 5 for LWASA\nPress 6 for WSSP\nPress 7 for RWASA\nPress 8 for QWASA";
        cout << "\n\t\t\t";
        cin >> choice;
        if (choice > 8 || choice < 1) {
          cout << "\n\tPlease Enter right choice.";
          Sleep(2000);
          system("CLS");
        } else {
          test = false;
        }
      } while (test);
      system("CLS");
      cout << "\n\n\t\t\tPay Bill\n\n";
      cout << "\nEnter Consumer ID \n";
      cin >> CN;
      cout << "\nEnter Amount \n";
      cin >> TA;
      if (choice == 1) {
        A = "KWSP";
      }
      if (choice == 2) {
        A = "CDA Water";
      }
      if (choice == 3) {
        A = "HDA WASA";
      }
      if (choice == 4) {
        A = "FWASA";
      }
      if (choice == 5) {
        A = "LWASA";
      }
      if (choice == 6) {
        A = "WSSP";
      }
      if (choice == 7) {
        A = "RWASA";
      }
      if (choice == 8) {
        A = "QWASA";
      }
      PB1.WaterBill(A, CN, TA);
      break;
    } else if (c == 4) ///TelePhone
    {
      string CN;
      double TA;
      cout << "\n\n\t\t\tPay Bill\n\n";
      PayBills PB1;
      cout << "\nEnter PTCL Account/Consumer \n";
      cin >> CN;
      cout << "\nEnter Amount \n";
      cin >> TA;
      PB1.TelephoneBill(CN, TA);
      break;
    } else cout << "\nIncorrect Choice.";
  }
  case 5: {
    char op;
    system("cls");
    cout << "\n\n\nEnter Network (z for zong,j for jazz or moblink or warid ,u  for ufone,t for telenor).";
    cin >> op;
    int ch;
    MobilePackages MP1;
    if (op == 'z' || op == 'Z') {
      cout << "\nEnter 1 to Get 30 GB Data, 100 Other Networks Minutes, 3000 Zong Minutes and 3000 SMS Valid for the month in just PKR 340 Load \nEnter 2 to get monthly Super wattsapp package 5GB Data for the Whole month @ only Rs: 120.\nEnter 3 to Avail Monthly Social Data Offer,unlimited jazz minutes,100 Off-net Mins PKR: 680.\n\n\t\t\tYour Answer :";
      cin >> ch;
      if (ch == 1) {
        MP1.PackageAll(340);
      } else if (ch == 2) {
        MP1.PackageAll(50);
      } else if (ch == 3) {
        MP1.PackageAll(80);
      } else cout << "Incorrect Input";
    } else if (op == 'J' || op == 'j' || op == 'M' || op == 'm') {
      cout << "\n\nEnter 1 to Monthly dimond offer 1000 Minutes,200 of networks in just 200Rs \nEnter 2 to Jazz Weekly Super Duper Offer 1500Minutes, 3000MBS in just 200Rs\nEnter 3 to Jazz Weekly Super Plus 5000Minutes, 12000MBS in just 800Rs\n\n\t\t\tYour Answer :";
      cin >> ch;
      if (ch == 1) {
        MP1.PackageAll(200);
      } else if (ch == 2) {
        MP1.PackageAll(200);
      } else if (ch == 3) {
        MP1.PackageAll(800);
      } else cout << "Incorrect Input";
    } else if (op == 't' || op == 'T') {
      cout << "\n\nEnter 1 to Telenor Good Time Offer Unlimited Minutes, 250 MBS for RS 120 \nEnter 2 to Telenor Din Bhar Package 100000 Minutes, 20 MBS in 200 \nEnter 3 to Telenor Daily YouTube Package 500 MBS in 15 \nEnter 4 to Telenor djuice 50 Minutes Bundle 50 Minutes, 10 MBS in 10 RS.\n\n\t\t\tYour Answer :";
      cin >> ch;
      if (ch == 1) {
        MP1.PackageAll(120);
      } else if (ch == 2) {
        MP1.PackageAll(200);
      } else if (ch == 3) {
        MP1.PackageAll(15);
      } else if (ch == 4) {
        MP1.PackageAll(10);
      } else cout << "Incorrect Input";
    } else if (op == 'u' || op == 'U') {
      cout << "\n\nEnter 1 to Ufone Social Daily Package  Unlimiited Mbs for 1 day in 40 RS\nEnter 2 to Ufone 24 Ghantay Package Unlimiited Mbs for 1 day+86400 SMS in 150 RS.\nEnter 3 to Ufone Streaming Offer (1 hour) for 1 Day in 45 RS.\n\n\t\t\tYour Answer :";
      cin >> ch;
      if (ch == 1) {
        MP1.PackageAll(40);
      } else if (ch == 2) {
        MP1.PackageAll(70);
      } else if (ch == 3) {
        MP1.PackageAll(45);
      } else cout << "Incorrect Input";
    } else cout << "\n\nInvalid operater.";
    break;
  }
  case 6: {
    system("cls");
    EducationPayments EP1;
    string I, AN, RN, ft;
    double TA;
    cout << "\n\n\n\n\t\t\tPay Your Fees\n\n\n";
    cout << "Enter Institute Name:  ";
    cin >> I;
    cout << "Enter the your Roll number\t";
    cin >> RN;
    cout << "Enter Fee Type\t";
    cin >> ft;
    cout << "";
    cout << "Enter Amount:  ";
    cin >> TA;
    cout << "Enter institue Account Number:  ";
    cin >> AN;
    EP1.TransMoney(AN, TA, I, RN, ft);
    break;
  }

  case 7: {
    system("cls");
    EntertainmentAndOnlinePurchases EAOP1;
    system("cls");
    int ch;
    string MN, EN, PN;
    double TA;
    cout << "\nEnter 1 to Book Movie Tickets.\nEnter 2 to Book Event Tickets.\nEnter 3 to Pay for Daraz Wallet.\nEnter 4 to Pay for E-Vouchers\n\n\t\t\tYour Answer:  ";
    cin >> ch;
    if (ch == 1) {
      ifstream Jin;
      Jin.open("Movies File.txt");
      if (Jin.is_open()) {
        system("cls");
        cout << Jin.rdbuf();
      } else cout << "Error in Opening Movies File";
      cout << "\n\nEnter Movie Code\n";
      cin >> MN;
      if (MN == "1") {
        MN = "SanAndreas";
        TA = 500;
      } else if (MN == "2") {
        MN = "Fast & Furious";
        TA = 500;
      } else if (MN == "3") {
        MN = "Avengers";
        TA = 500;
      } else cout << "Invalid Entry";
      EAOP1.MovieTickets(MN, TA);
    } else if (ch == 2) {
      ifstream Jin;
      Jin.open("Event File.txt");
      if (Jin.is_open()) {
        system("cls");
        cout << Jin.rdbuf();
      } else cout << "Error in Opening Event File";
      cout << "\n\n\nEnter Event Code\n";
      cin >> EN;
      if (EN == "1") {
        EN = "ABC";
        TA = 500;
      } else if (EN == "2") {
        EN = "XYZ";
        TA = 500;
      } else if (EN == "3") {
        EN = "PQR";
        TA = 500;
      } else
        cout << "Invalid Entry";
      EAOP1.EventTickets(EN, TA);
    } else if (ch == 3) {
      ifstream Jin;
      Jin.open("Daraz File.txt");
      if (Jin.is_open()) {
        system("cls");
        cout << Jin.rdbuf();
      } else
        cout << "Error in Opening Daraz File";
      cout << "\n\n\nEnter Product Code\n";
      cin >> PN;
      if (PN == "1") {
        PN = "Loreal Shampoo";
        TA = 300;
      } else if (PN == "2") {
        PN = "Skin White Face Wash";
        TA = 150;
      } else if (PN == "3") {
        PN = "Dove Soap";
        TA = 100;
      } else if (PN == "4") {
        PN = "Laptop Front Screen Protector";
        TA = 200;
      } else if (PN == "5") {
        PN = "SanDisk USB";
        TA = 1300;
      } else if (PN == "6") {
        PN = "Redmi Note 8";
        TA = 30000;
      } else if (PN == "7") {
        PN = "Men Shoes ";
        TA = 2500;
      } else cout << "No Product Available of Such Code";
      EAOP1.DarazWallet(PN, TA);
    } else if (ch == 4) {
      system("cls");
      cout << "Which Voucher do you want to buy among these : \n\n1. Amazon \n\n2.Free Fire \n\n3.PUBJ \n\n4.Google Play \n\n5.I-Tunes \n\n6.MINECRAFT \n\n7.Nintendo \n\n8.PlayStation \n\n9.Skype \n\n10.Spotify \n\n11.XBOX\n\n\n\n\t\t\t\t Your E-Voucher Code:  ";
      int Code;
      cin >> Code;

      if (Code == 1) {
        system("cls");
        cout << "\n\n\eEnter 1 to Buy Amazon [US]$50\n\n\eEnter 2 to Buy Amazon [US]$25\n\n\eEnter 3 to Buy Amazon [US]$10\n\n\t\t\tYour Answer: ";
        int CH;
        cin >> CH;
        if (CH == 1) {
          double TA = 50 * 170;
          cout << "\n\nTotal Amount:" << TA;
          cout << "\n\nSteps to use the Voucher:\n\n1.Purchase the Voucher of your Choice.\n2.Copy Voucher Code from Reciept or from 'My Vouchers' section.\n3.Enter Voucher Code at the time of checkout of the respect company to redeem the voucher.\n\n\n\t\t!!Conformation!!\n\t\t\t\t\tEnter yes to buy voucher Else any other key";
          char ch;
          cin >> ch;
          if (ch == 'y') {
            string VN = "Voucher";
            EAOP1.E_Vouchers(VN, TA);
          } else {
            cout << "Invalid Entry";
            HomePage();
          }
        } else if (CH == 2) {
          double TA = 25 * 170;
          cout << "\n\nTotal Amount:" << TA;
          cout << "\n\nSteps to use the Voucher:\n\n1.Purchase the Voucher of your Choice.\n2.Copy Voucher Code from Reciept or from 'My Vouchers' section.\n3.Enter Voucher Code at the time of checkout of the respect company to redeem the voucher.\n\n\n\t\t!!Conformation!!\n\t\t\t\t\tEnter yes to buy voucher Else any other key";
          char ch;
          cin >> ch;
          if (ch == 'y') {
            string VN = "Voucher";
            EAOP1.E_Vouchers(VN, TA);
          } else {
            cout << "Invalid Entry";
            HomePage();
          }
        } else if (CH == 3) {
          double TA = 10 * 170;
          cout << "\n\nTotal Amount:" << TA;
          cout << "\n\nSteps to use the Voucher:\n\n1.Purchase the Voucher of your Choice.\n2.Copy Voucher Code from Reciept or from 'My Vouchers' section.\n3.Enter Voucher Code at the time of checkout of the respect company to redeem the voucher.\n\n\n\t\t!!Conformation!!\n\t\t\t\t\tEnter yes to buy voucher Else any other key";
          char ch;
          cin >> ch;
          if (ch == 'y') {
            string VN = "Voucher";
            EAOP1.E_Vouchers(VN, TA);
          } else {
            cout << "Invalid Entry";
            HomePage();
          }
        }
      } else if (Code == 2) {
        system("cls");
        cout << "\n\n\eEnter 1 to Buy Free-Fire 100 Diamonds\n\n\eEnter 2 to Buy Free-Fire 200 Diamonds\n\n\eEnter 3 to Buy Free-Fire 500 Diamonds\n\n\t\t\tYour Answer: ";
        int CH;
        cin >> CH;
        if (CH == 1) {
          double TA = 1.9 * 100;
          cout << "\n\nTotal Amount:" << TA;
          cout << "\n\nSteps to use the Voucher:\n\n1.Purchase the Voucher of your Choice.\n2.Copy Voucher Code from Reciept or from 'My Vouchers' section.\n3.Enter Voucher Code at the time of checkout of the respect company to redeem the voucher.\n\n\n\t\t!!Conformation!!\n\t\t\t\t\tEnter yes to buy voucher Else any other key";
          char ch;
          cin >> ch;
          if (ch == 'y') {
            string VN = "Free-Fire Voucher";
            EAOP1.E_Vouchers(VN, TA);
          } else {
            cout << "Invalid Entry";
            HomePage();
          }
        } else if (CH == 2) {
          double TA = 1.9 * 200;
          cout << "\n\nTotal Amount:" << TA;
          cout << "\n\nSteps to use the Voucher:\n\n1.Purchase the Voucher of your Choice.\n2.Copy Voucher Code from Reciept or from 'My Vouchers' section.\n3.Enter Voucher Code at the time of checkout of the respect company to redeem the voucher.\n\n\n\t\t!!Conformation!!\n\t\t\t\t\tEnter yes to buy voucher Else any other key";
          char ch;
          cin >> ch;
          if (ch == 'y') {
            string VN = "Voucher";
            EAOP1.E_Vouchers(VN, TA);
          } else {
            cout << "Invalid Entry";
            HomePage();
          }
        } else if (CH == 3) {
          double TA = 1.9 * 500;
          cout << "\n\nTotal Amount:" << TA;
          cout << "\n\nSteps to use the Voucher:\n\n1.Purchase the Voucher of your Choice.\n2.Copy Voucher Code from Reciept or from 'My Vouchers' section.\n3.Enter Voucher Code at the time of checkout of the respect company to redeem the voucher.\n\n\n\t\t!!Conformation!!\n\t\t\t\t\tEnter yes to buy voucher Else any other key";
          char ch;
          cin >> ch;
          if (ch == 'y') {
            string VN = "Voucher";
            EAOP1.E_Vouchers(VN, TA);
          } else {
            cout << "Invalid Entry";
            HomePage();
          }
        } else
          cout << "\n\nNo any Offer Available of Such Type";
      } else if (Code == 3) {
        system("cls");
        cout << "\n\n\eEnter 1 to Buy PUBJ 60-UC\n\n\eEnter 2 to Buy  PUBJ 325-UC\n\n\eEnter 3 to Buy PUBJ 1800-UC\n\n\t\t\tYour Answer: ";
        int CH;
        cin >> CH;
        if (CH == 1) {
          double TA = 2.9 * 60;
          cout << "\n\nTotal Amount:" << TA;
          cout << "\n\nSteps to use the Voucher:\n\n1.Purchase the Voucher of your Choice.\n2.Copy Voucher Code from Reciept or from 'My Vouchers' section.\n3.Enter Voucher Code at the time of checkout of the respect company to redeem the voucher.\n\n\n\t\t!!Conformation!!\n\t\t\t\t\tEnter yes to buy voucher Else any other key";
          char ch;
          cin >> ch;
          if (ch == 'y') {
            string VN = "Voucher";
            EAOP1.E_Vouchers(VN, TA);
          } else {
            cout << "Invalid Entry";
            HomePage();
          }
        } else if (CH == 2) {
          double TA = 2.9 * 325;
          cout << "\n\nTotal Amount:" << TA;
          cout << "\n\nSteps to use the Voucher:\n\n1.Purchase the Voucher of your Choice.\n2.Copy Voucher Code from Reciept or from 'My Vouchers' section.\n3.Enter Voucher Code at the time of checkout of the respect company to redeem the voucher.\n\n\n\t\t!!Conformation!!\n\t\t\t\t\tEnter yes to buy voucher Else any other key";
          char ch;
          cin >> ch;
          if (ch == 'y') {
            string VN = "Voucher";
            EAOP1.E_Vouchers(VN, TA);
          } else {
            cout << "Invalid Entry";
            HomePage();
          }
        } else if (CH == 3) {
          double TA = 2.9 * 1800;
          cout << "\n\nTotal Amount:" << TA;
          cout << "\n\nSteps to use the Voucher:\n\n1.Purchase the Voucher of your Choice.\n2.Copy Voucher Code from Reciept or from 'My Vouchers' section.\n3.Enter Voucher Code at the time of checkout of the respect company to redeem the voucher.\n\n\n\t\t!!Conformation!!\n\t\t\t\t\tEnter yes to buy voucher Else any other key";
          char ch;
          cin >> ch;
          if (ch == 'y') {
            string VN;
            EAOP1.E_Vouchers(VN, TA);
          } else {
            cout << "Invalid Entry";
            HomePage();
          }
        } else
          cout << "\n\nNo any Offer Available of Such Type";
      } else if (Code == 4) {
        system("cls");
        cout << "\n\n\eEnter 1 to Buy Google Play [US]$10\n\n\eEnter 2 to Buy  Google Play [US]$25\n\n\eEnter 3 to Google Play [US]$50\n\n\t\t\tYour Answer: ";
        int CH;
        cin >> CH;
        if (CH == 1) {
          double TA = 190 * 10;
          cout << "\n\nTotal Amount:" << TA;
          cout << "\n\nSteps to use the Voucher:\n\n1.Purchase the Voucher of your Choice.\n2.Copy Voucher Code from Reciept or from 'My Vouchers' section.\n3.Enter Voucher Code at the time of checkout of the respect company to redeem the voucher.\n\n\n\t\t!!Conformation!!\n\t\t\t\t\tEnter yes to buy voucher Else any other key";
          char ch;
          cin >> ch;
          if (ch == 'y') {
            string VN = "Voucher";
            EAOP1.E_Vouchers(VN, TA);
          } else {
            cout << "Invalid Entry";
            HomePage();
          }
        } else if (CH == 2) {
          double TA = 190 * 25;
          cout << "\n\nTotal Amount:" << TA;
          cout << "\n\nSteps to use the Voucher:\n\n1.Purchase the Voucher of your Choice.\n2.Copy Voucher Code from Reciept or from 'My Vouchers' section.\n3.Enter Voucher Code at the time of checkout of the respect company to redeem the voucher.\n\n\n\t\t!!Conformation!!\n\t\t\t\t\tEnter yes to buy voucher Else any other key";
          char ch;
          cin >> ch;
          if (ch == 'y') {
            string VN = "Voucher";
            EAOP1.E_Vouchers(VN, TA);
          } else {
            cout << "Invalid Entry";
            HomePage();
          }
        } else if (CH == 3) {
          double TA = 190 * 50;
          cout << "\n\nTotal Amount:" << TA;
          cout << "\n\nSteps to use the Voucher:\n\n1.Purchase the Voucher of your Choice.\n2.Copy Voucher Code from Reciept or from 'My Vouchers' section.\n3.Enter Voucher Code at the time of checkout of the respect company to redeem the voucher.\n\n\n\t\t!!Conformation!!\n\t\t\t\t\tEnter yes to buy voucher Else any other key";
          char ch;
          cin >> ch;
          if (ch == 'y') {
            string VN = "Voucher";
            EAOP1.E_Vouchers(VN, TA);
          } else {
            cout << "Invalid Entry";
            HomePage();
          }
        } else
          cout << "\n\nNo any Offer Available of Such Type";
      } else if (Code == 5) {
        system("cls");
        cout << "\n\n\eEnter 1 to buy I-Tunes [US]$10\n\n\eEnter 2 to Buy I-Tunes [US]$25\n\n\eEnter 3 to Buy I-Tunes [US]$50\n\n\t\t\tYour Answer: ";
        int CH;
        cin >> CH;
        if (CH == 1) {
          double TA = 184 * 10;
          cout << "\n\nTotal Amount:" << TA;
          cout << "\n\nSteps to use the Voucher:\n\n1.Purchase the Voucher of your Choice.\n2.Copy Voucher Code from Reciept or from 'My Vouchers' section.\n3.Enter Voucher Code at the time of checkout of the respect company to redeem the voucher.\n\n\n\t\t!!Conformation!!\n\t\t\t\t\tEnter yes to buy voucher Else any other key";
          char ch;
          cin >> ch;
          if (ch == 'y') {
            string VN = "Voucher";
            EAOP1.E_Vouchers(VN, TA);
          } else {
            cout << "Invalid Entry";
            HomePage();
          }
        } else if (CH == 2) {
          double TA = 184 * 25;
          cout << "\n\nTotal Amount:" << TA;
          cout << "\n\nSteps to use the Voucher:\n\n1.Purchase the Voucher of your Choice.\n2.Copy Voucher Code from Reciept or from 'My Vouchers' section.\n3.Enter Voucher Code at the time of checkout of the respect company to redeem the voucher.\n\n\n\t\t!!Conformation!!\n\t\t\t\t\tEnter yes to buy voucher Else any other key";
          char ch;
          cin >> ch;
          if (ch == 'y') {
            string VN = "Voucher";
            EAOP1.E_Vouchers(VN, TA);
          } else {
            cout << "Invalid Entry";
            HomePage();
          }
        } else if (CH == 3) {
          double TA = 184 * 50;
          cout << "\n\nTotal Amount:" << TA;
          cout << "\n\nSteps to use the Voucher:\n\n1.Purchase the Voucher of your Choice.\n2.Copy Voucher Code from Reciept or from 'My Vouchers' section.\n3.Enter Voucher Code at the time of checkout of the respect company to redeem the voucher.\n\n\n\t\t!!Conformation!!\n\t\t\t\t\tEnter yes to buy voucher Else any other key";
          char ch;
          cin >> ch;
          if (ch == 'y') {
            string VN = "Voucher";
            EAOP1.E_Vouchers(VN, TA);
          } else {
            cout << "Invalid Entry";
            HomePage();
          }
        } else
          cout << "\n\nNo any Offer Available of Such Type";
      } else if (Code == 6) {
        system("cls");
        cout << "\n\n\eEnter 1 to Minecraft [US]$10\n\n\eEnter 2 to Buy Minecraft [US]$25\n\n\eEnter 3 to Buy Minecraft [US]$10\n\n\t\t\tYour Answer: ";
        int CH;
        cin >> CH;
        if (CH == 1) {
          double TA = 174 * 10;
          cout << "\n\nTotal Amount:" << TA;
          cout << "\n\nSteps to use the Voucher:\n\n1.Purchase the Voucher of your Choice.\n2.Copy Voucher Code from Reciept or from 'My Vouchers' section.\n3.Enter Voucher Code at the time of checkout of the respect company to redeem the voucher.\n\n\n\t\t!!Conformation!!\n\t\t\t\t\tEnter yes to buy voucher Else any other key";
          char ch;
          cin >> ch;
          if (ch == 'y') {
            string VN = "Voucher";
            EAOP1.E_Vouchers(VN, TA);
          } else {
            cout << "Invalid Entry";
            HomePage();
          }
        } else if (CH == 2) {
          double TA = 174 * 25;
          cout << "\n\nTotal Amount:" << TA;
          cout << "\n\nSteps to use the Voucher:\n\n1.Purchase the Voucher of your Choice.\n2.Copy Voucher Code from Reciept or from 'My Vouchers' section.\n3.Enter Voucher Code at the time of checkout of the respect company to redeem the voucher.\n\n\n\t\t!!Conformation!!\n\t\t\t\t\tEnter yes to buy voucher Else any other key";
          char ch;
          cin >> ch;
          if (ch == 'y') {
            string VN = "Voucher";
            EAOP1.E_Vouchers(VN, TA);
          } else {
            cout << "Invalid Entry";
            HomePage();
          }
        } else if (CH == 3) {
          double TA = 174 * 50;
          cout << "\n\nTotal Amount:" << TA;
          cout << "\n\nSteps to use the Voucher:\n\n1.Purchase the Voucher of your Choice.\n2.Copy Voucher Code from Reciept or from 'My Vouchers' section.\n3.Enter Voucher Code at the time of checkout of the respect company to redeem the voucher.\n\n\n\t\t!!Conformation!!\n\t\t\t\t\tEnter yes to buy voucher Else any other key";
          char ch;
          cin >> ch;
          if (ch == 'y') {
            string VN = "Voucher";
            EAOP1.E_Vouchers(VN, TA);
          } else {
            cout << "Invalid Entry";
            HomePage();
          }
        } else
          cout << "\n\nNo any Offer Available of Such Type";
      } else if (Code == 7) {
        system("cls");
        cout << "\n\n\eEnter 1 to Buy Nintendo [US]10$\n\n\eEnter 2 to Buy Nintendo [US]25$\n\n\eEnter 3 to Buy Nintendo [US]$10\n\n\t\t\tYour Answer: ";
        int CH;
        cin >> CH;
        if (CH == 1) {
          double TA = 181 * 10;
          cout << "\n\nTotal Amount:" << TA;
          cout << "\n\nSteps to use the Voucher:\n\n1.Purchase the Voucher of your Choice.\n2.Copy Voucher Code from Reciept or from 'My Vouchers' section.\n3.Enter Voucher Code at the time of checkout of the respect company to redeem the voucher.\n\n\n\t\t!!Conformation!!\n\t\t\t\t\tEnter yes to buy voucher Else any other key";
          char ch;
          cin >> ch;
          if (ch == 'y') {
            string VN = "Voucher";
            EAOP1.E_Vouchers(VN, TA);
          } else {
            cout << "Invalid Entry";
            HomePage();
          }
        } else if (CH == 2) {
          double TA = 181 * 25;
          cout << "\n\nTotal Amount:" << TA;
          cout << "\n\nSteps to use the Voucher:\n\n1.Purchase the Voucher of your Choice.\n2.Copy Voucher Code from Reciept or from 'My Vouchers' section.\n3.Enter Voucher Code at the time of checkout of the respect company to redeem the voucher.\n\n\n\t\t!!Conformation!!\n\t\t\t\t\tEnter yes to buy voucher Else any other key";
          char ch;
          cin >> ch;
          if (ch == 'y') {
            string VN = "Voucher";
            EAOP1.E_Vouchers(VN, TA);
          } else {
            cout << "Invalid Entry";
            HomePage();
          }
        } else if (CH == 3) {
          double TA = 181 * 50;
          cout << "\n\nTotal Amount:" << TA;
          cout << "\n\nSteps to use the Voucher:\n\n1.Purchase the Voucher of your Choice.\n2.Copy Voucher Code from Reciept or from 'My Vouchers' section.\n3.Enter Voucher Code at the time of checkout of the respect company to redeem the voucher.\n\n\n\t\t!!Conformation!!\n\t\t\t\t\tEnter yes to buy voucher Else any other key";
          char ch;
          cin >> ch;
          if (ch == 'y') {
            string VN = "Voucher";
            EAOP1.E_Vouchers(VN, TA);
          } else {
            cout << "Invalid Entry";
            HomePage();
          }
        } else
          cout << "\n\nNo any Offer Available of Such Type";
      } else if (Code == 8) {
        system("cls");
        cout << "\n\n\eEnter 1 to Play-Station [US]$10\n\n\eEnter 2 to Buy Play-Station [US]$25\n\n\eEnter 3 to Buy Play-Station [US]$10\n\n\t\t\tYour Answer: ";
        int CH;
        cin >> CH;
        if (CH == 1) {
          double TA = 175 * 10;
          cout << "\n\nTotal Amount:" << TA;
          cout << "\n\nSteps to use the Voucher:\n\n1.Purchase the Voucher of your Choice.\n2.Copy Voucher Code from Reciept or from 'My Vouchers' section.\n3.Enter Voucher Code at the time of checkout of the respect company to redeem the voucher.\n\n\n\t\t!!Conformation!!\n\t\t\t\t\tEnter yes to buy voucher Else any other key";
          char ch;
          cin >> ch;
          if (ch == 'y') {
            string VN = "Voucher";
            EAOP1.E_Vouchers(VN, TA);
          } else {
            cout << "Invalid Entry";
            HomePage();
          }
        } else if (CH == 2) {
          double TA = 175 * 25;
          cout << "\n\nTotal Amount:" << TA;
          cout << "\n\nSteps to use the Voucher:\n\n1.Purchase the Voucher of your Choice.\n2.Copy Voucher Code from Reciept or from 'My Vouchers' section.\n3.Enter Voucher Code at the time of checkout of the respect company to redeem the voucher.\n\n\n\t\t!!Conformation!!\n\t\t\t\t\tEnter yes to buy voucher Else any other key";
          char ch;
          cin >> ch;
          if (ch == 'y') {
            string VN = "Voucher";
            EAOP1.E_Vouchers(VN, TA);
          } else {
            cout << "Invalid Entry";
            HomePage();
          }
        } else if (CH == 3) {
          double TA = 175 * 50;
          cout << "\n\nTotal Amount:" << TA;
          cout << "\n\nSteps to use the Voucher:\n\n1.Purchase the Voucher of your Choice.\n2.Copy Voucher Code from Reciept or from 'My Vouchers' section.\n3.Enter Voucher Code at the time of checkout of the respect company to redeem the voucher.\n\n\n\t\t!!Conformation!!\n\t\t\t\t\tEnter yes to buy voucher Else any other key";
          char ch;
          cin >> ch;
          if (ch == 'y') {
            string VN = "Voucher";
            EAOP1.E_Vouchers(VN, TA);
          } else {
            cout << "Invalid Entry";
            HomePage();
          }
        } else
          cout << "\n\nNo any Offer Available of Such Type";
      } else if (Code == 9) {
        system("cls");
        cout << "\n\n\eEnter 1 to buy Skype [US]$10\n\n\eEnter 2 to Buy Skype [US]$25\n\n\t\t\tYour Answer: ";
        int CH;
        cin >> CH;
        if (CH == 1) {
          double TA = 184 * 10;
          cout << "\n\nTotal Amount:" << TA;
          cout << "\n\nSteps to use the Voucher:\n\n1.Purchase the Voucher of your Choice.\n2.Copy Voucher Code from Reciept or from 'My Vouchers' section.\n3.Enter Voucher Code at the time of checkout of the respect company to redeem the voucher.\n\n\n\t\t!!Conformation!!\n\t\t\t\t\tEnter yes to buy voucher Else any other key";
          char ch;
          cin >> ch;
          if (ch == 'y') {
            string VN = "Voucher";
            EAOP1.E_Vouchers(VN, TA);
          } else {
            cout << "Invalid Entry";
            HomePage();
          }
        } else if (CH == 2) {
          double TA = 184 * 25;
          cout << "\n\nTotal Amount:" << TA;
          cout << "\n\nSteps to use the Voucher:\n\n1.Purchase the Voucher of your Choice.\n2.Copy Voucher Code from Reciept or from 'My Vouchers' section.\n3.Enter Voucher Code at the time of checkout of the respect company to redeem the voucher.\n\n\n\t\t!!Conformation!!\n\t\t\t\t\tEnter yes to buy voucher Else any other key";
          char ch;
          cin >> ch;
          if (ch == 'y') {
            string VN = "Voucher";
            EAOP1.E_Vouchers(VN, TA);
          } else {
            cout << "Invalid Entry";
            HomePage();
          }
        } else
          cout << "\n\nNo any Offer Available of Such Type";
      } else if (Code == 10) {
        system("cls");
        cout << "\n\n\eEnter 1 to Spotify [US]$10\n\n\eEnter 2 to Buy Spotify [US]$25\n\n\t\t\tYour Answer: ";
        int CH;
        cin >> CH;
        if (CH == 1) {
          double TA = 183 * 10;
          cout << "\n\nTotal Amount:" << TA;
          cout << "\n\nSteps to use the Voucher:\n\n1.Purchase the Voucher of your Choice.\n2.Copy Voucher Code from Reciept or from 'My Vouchers' section.\n3.Enter Voucher Code at the time of checkout of the respect company to redeem the voucher.\n\n\n\t\t!!Conformation!!\n\t\t\t\t\tEnter yes to buy voucher Else any other key";
          char ch;
          cin >> ch;
          if (ch == 'y') {
            string VN = "Voucher";
            EAOP1.E_Vouchers(VN, TA);
          } else {
            cout << "Invalid Entry";
            HomePage();
          }
        } else if (CH == 2) {
          double TA = 183 * 25;
          cout << "\n\nTotal Amount:" << TA;
          cout << "\n\nSteps to use the Voucher:\n\n1.Purchase the Voucher of your Choice.\n2.Copy Voucher Code from Reciept or from 'My Vouchers' section.\n3.Enter Voucher Code at the time of checkout of the respect company to redeem the voucher.\n\n\n\t\t!!Conformation!!\n\t\t\t\t\tEnter yes to buy voucher Else any other key";
          char ch;
          cin >> ch;
          if (ch == 'y') {
            string VN = "Voucher";
            EAOP1.E_Vouchers(VN, TA);
          } else {
            cout << "Invalid Entry";
            HomePage();
          }
        } else
          cout << "\n\nNo any Offer Available of Such Type";
      } else if (Code == 11) {
        system("cls");
        cout << "\n\n\eEnter 1 to XBOX [US]$10\n\n\eEnter 2 to Buy XBOX [US]$25\n\n\t\t\tYour Answer: ";
        int CH;
        cin >> CH;
        if (CH == 1) {
          double TA = 174 * 10;
          cout << "\n\nTotal Amount:" << TA;
          cout << "\n\nSteps to use the Voucher:\n\n1.Purchase the Voucher of your Choice.\n2.Copy Voucher Code from Reciept or from 'My Vouchers' section.\n3.Enter Voucher Code at the time of checkout of the respect company to redeem the voucher.\n\n\n\t\t!!Conformation!!\n\t\t\t\t\tEnter yes to buy voucher Else any other key";
          char ch;
          cin >> ch;
          if (ch == 'y') {
            string VN = "Voucher";
            EAOP1.E_Vouchers(VN, TA);
          } else {
            cout << "Invalid Entry";
            HomePage();
          }
        } else if (CH == 2) {
          double TA = 174 * 25;
          cout << "\n\nTotal Amount:" << TA;
          cout << "\n\nSteps to use the Voucher:\n\n1.Purchase the Voucher of your Choice.\n2.Copy Voucher Code from Reciept or from 'My Vouchers' section.\n3.Enter Voucher Code at the time of checkout of the respect company to redeem the voucher.\n\n\n\t\t!!Conformation!!\n\t\t\t\t\tEnter yes to buy voucher Else any other key";
          char ch;
          cin >> ch;
          if (ch == 'y') {
            string VN = "Voucher";
            EAOP1.E_Vouchers(VN, TA);
          } else {
            cout << "Invalid Entry";
            HomePage();
          }
        } else
          cout << "\n\nNo any Offer Available of Such Type";
      }

    } else
      cout << "\n\nInvalid Entry";
    break;
  }
  case 8: {
    system("cls");
    int ch;
    string TN;
    double TA;
    cout << "\n\n\t\t\tGovernment Payments\n\n\n\nEnter 1 to Pay your TAX\nEnter 2 to Pay your Traffic Challan\n\n\t\t\tYour Answer:  ";
    cin >> ch;
    if (ch == 1) {
      cout << "\n\n\eEnter 1 to Pay for Balochistan Excise and Taxation.\n\eEnter 2 to Pay for FBR.\n\eEnter 3 to Pay for PRA.\n\eEnter 4 to Pay for GOP-Board of Revenue.\n\eEnter 5 to Pay for GOP.\n\eEnter 6 to Pay for GOP-Excise & Taxation.\n\eEnter 7 to Pay for GOP-Industries.\n\eEnter 8 to Pay for GOP-Punjab Land Record.\n\eEnter 9 to Pay for GOS-Vehicle Token Tax.\n\eEnter 10 to Pay for Islamabad Vehicle Token Tax.\n\n\t\t\t\tYour Answer: ";
      int CHO;
      cin >> CHO;
      cout << "\nEnter your TAX Number\n";
      cin >> TN;
      cout << "\nEnter your Challan Amount\n";
      cin >> TA;
      GovernmentPayments GP1;
      GP1.TAXPayment(TN, TA);
    } else if (ch == 2) {
      cout << "\n\n\n\eEnter 1 to Pay For Islamabad Traffic Police\n\eEnter 2 to Pay For Punjab Traffic Police\n\eEnter 3 to Pay For Sindh Traffic Police\n\n";
      int cH;
      cin >> cH;
      cout << "\nEnter your Challan Number\n";
      cin >> TN;
      cout << "\nEnter your Challan Amount\n";
      cin >> TA;
      GovernmentPayments GP1;
      GP1.TCPayment(TN, TA);
    } else cout << "\n\nInvalid Input";
    break;
  }
  case 9: {
    system("cls");
    int ch;
    TravelAndFood TAF1;
    string BS, D, F, T;
    double TA;
    cout << "\nEnter 1 to Book Your Travel Ticket\nEnter 2 to Order Your Food\n\n\t\t\tYour Answer:  ";
    cin >> ch;
    if (ch == 1) {
      cout << "\nEnter Bus Service to Avail\n";
      cin >> BS;
      cout << "\nEnter Date of Travel\n";
      cin >> D;
      cout << "\nEnter City From you want to Book.\n";
      cin >> F;
      cout << "\nEnter City From where you are Going.\n";
      cin >> T;
      cout << "\nEnter Amount to Pay as offer of all in 300 is going on.\n";
      cin >> TA;
      if (TA < 300 || TA > 300) {
        cout << "\nIncorrect Amount No any Offer of this Type\n";
      } else TAF1.BookTravelTicket(BS, D, F, T, TA);
      break;
    } else if (ch == 2) {
      string RN;
      string M;
      double TA;
      cout << "\nEnter Resturant Name\n";
      cin >> RN;
      cout << "\nEnter Menu \n";
      cin >> M;
      cout << "\nEnter Amount to Pay as offer of all in 300 is going on.\n";
      cin >> TA;
      if (TA == 300) {
        TAF1.FoodDelivery(RN, M, TA);
      } else cout << "\nIncorrect Amount No any Offer of this Type\n";
    } else cout << "\nInvalid Input\n";
    break;
  }
  case 10: {
    string str1, str2;
    double str3;
    string str4, str5;
    AccountDetails AD1;
    AD1.Op_Bal;
    ifstream in ("DataInPro.txt"); in >> str1 >> str2 >> str3 >> str4 >> str5;
    system("cls");
    cout << "\n\n\t\t\tAccount Details:\n\n\n\nMobile Number is:     " << str1 << "\n\nBalance is:    " << str3 << "\n\nCNIC Number is:     " << str4 << "\n\nCNIC Validation is upto:     " << str5 << "\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout << "Enter 'm' to goto main menu or anyother key to exit.\nYour Answer: ";
    char ch;
    cin >> ch;
    if (ch == 'm') {
      system("cls");
      HomePage();
    } else {
      exit(0);
    }
    break;
  }
  default:
    cout << "Incorrect Output";

  }
}
void PasswordTaker() {
  char cha[4];
  int a = 0;
  string PIN;
  while (cha[a - 1] != '\r') {
    cha[a] = getch();
    if (cha[a - 1] != '\r') {
      cout << "*";
    }
    a++;
    cin >> PIN;
  }
}
void StartingPage() {
  cout << "\n\n";
  Icon();
  cout << "\n\n\n\n\n" << setw(50) << "LOADING..\n	  \t\t";
  system("Color 0E");
  char x = 73; //32;

  for (int i = 0; i < 31; i++) {
    cout << x;
    if (i >= 0 && i < 11)
      Sleep(300);
    if (i > 10 && i < 24)
      Sleep(150);
    if (i > 23 && i < 31)
      Sleep(400);
  }
  cout << "\n\n\n\n\n\n\n\n\n\n";
  cout.width(72);
  cout << right << "Made By:" << endl;
  cout.width(72);
  cout << right << "Junaid Aslam Rajput" << endl;
  cout.width(72);
  cout << right << "Roll No:" << endl;
  cout.width(72);
  cout << right << "20SW084";
  getch();
  //cout<<"\n\n\n\n\n\n\n\n\n\n";cout.width(72);cout.setf(ios::right);cout<<"Made By:"<<endl;cout.width(72);cout.setf(ios::right);cout<<"Junaid Aslam Rajput"<<endl;cout.width(72);cout.setf(ios::right);cout<<"Roll No:"<<endl;cout.width(72);cout.setf(ios::right);cout<<"20SW084";getch();
  //cout<<"\n\n\n\n\n\n\n\n\n\n\n"<<setw(69)<<"Made By:"<<endl<<setw(80)<<"Junaid Aslam Rajput"<<endl<<setw(69)<<"Roll No:"<<endl<<setw(68)<<"20SW084";getch();
}
void Icon() {
  cout << "\n\t\t!!=======" << setw(14) << "!!=====!!" << setw(11) << "!!=====!!" << setw(4) << "||" << setw(8) << "||" << "\n";
  cout << "\t\t||" << setw(14) << "||" << setw(7) << "||" << setw(4) << "||" << setw(7) << "||" << setw(4) << "||" << setw(8) << "||" << "\n";
  cout << "\t\t||" << setw(14) << "||" << setw(7) << "||" << setw(4) << "||" << setw(7) << "||" << setw(4) << "||" << setw(8) << "||" << "\n";
  cout << "\t\t||" << setw(14) << "||" << setw(7) << "||" << setw(4) << "||" << setw(7) << "||" << setw(4) << "||" << setw(8) << "||" << "\n";
  cout << "\t\t||=====" << setw(5) << "___" << "  " << "||=====!!" << setw(11) << "||=====||" << setw(12) << "||======||" << "\n";
  cout << "\t\t||" << setw(14) << "||" << setw(11) << "||" << setw(7) << "||" << setw(8) << "||" << "\n";
  cout << "\t\t||" << setw(14) << "||" << setw(11) << "||" << setw(7) << "||" << setw(8) << "||" << "\n";
  cout << "\t\t||" << setw(14) << "||" << setw(11) << "||" << setw(7) << "||" << setw(8) << "||" << "\n";
  cout << "\t\t!!=======" << setw(7) << "||" << setw(18) << "!!     !!" << setw(8) << "||" << "\n";
}
