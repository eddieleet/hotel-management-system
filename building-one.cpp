#include<iostream>
using namespace std;

int main(){
    int quant;
     int choice;
    //quantity
    int Qrooms=0,Qpasta=0,Qburger=0,Qnoodle=0,Qshake=0,Qchicken=0;
    //food items sold
   int Srooms=0,Spasta=0,Sburger=0,Snoodle=0,Sshake=0,Schicken=0;
   //Total price of items
   int Total_rooms=0,Total_pasta=0,Total_burger=0,Total_noodles=0,Total_shake=0,Total_chicken=0;

   cout<<"\n\t Quality of items we have ";
   cout<<"\n Rooms avaliable";
   cin>>Qrooms;
   cout<<"\n Quality of pasta : ";
   cin>>Qpasta;
   cout<<"\n Quality of burger: ";
   cin>>Qburger;
   cout<<"\n Quality of noodle: ";
   cin>>Qnoodle;
   cout<<"\n Quality of chicken : ";
   cin>>Qchicken;

m:
   cout<<"\n\t\t\t Please select from the menu options";
   cout<<"\n\n1) Rooms  ";
   cout<<"\n\n2)  pasta ";
   cout<<"\n\n3)  burger";
   cout<<"\n\n4) noodle ";
   cout<<"\n\n5) shake ";
   cout<<"\n\n6) chicken-roll";
   cout<<"\n\n7) Information regarding sales and collection ";
   cout<<"\n\n8) Exit ";

cout<<"\n\n Please Enter your choice! ";

cin>>choice;

switch(choice){
    case 1:
    cout<<"\n\n Enter the number of rooms you want: ";

    cin>>quant;
    if(Qrooms-Srooms >=quant){

        Srooms=Srooms+quant;
        Total_rooms=Total_rooms+quant*1200;
        cout<<"\n\n\t\t"<<quant<<"room/rooms have alloted to you !";
    }
    else 
       cout<<"\n\tOnly"<<Qrooms-Srooms<<"Rooms remaining in hotel";
       break;


 case 2:
cout<<"\n\n Enter Pasta Quantity :";
cin>>quant;
    if(Qpasta-Spasta >=quant){

        Spasta=Spasta+quant;
        Total_pasta=Total_pasta+quant*1200;
        cout<<"\n\n\t\t"<<quant<<"pasta is the order ";
    }
    else 
       cout<<"\n\tOnly"<<Qrooms-Srooms<<"Pasta  remaining in hotel";
       break;



case 3:
cin>>quant;
    if(Qburger-Sburger >=quant){

        Sburger=Sburger+quant;
        Total_burger=Total_burger+quant*1200;
        cout<<"\n\n\t\t"<<quant<<" burger is the order !";
    }
    else 
       cout<<"\n\tOnly"<<Qburger-Sburger<<"burgers remaining in hotel";
       break;




case 4:
cout<<"\n\n Enter Noodle Quantity";
cin>>quant;
    if(Qnoodle-Snoodle >=quant){

        Snoodle=Snoodle+quant;
        Total_noodles=Total_noodles+quant*1200;
        cout<<"\n\n\t\t"<<quant<<"noodle is the order!";
    }
    else 
       cout<<"\n\tOnly"<<Qrooms-Srooms<<"noodles remaining in hotel";
       break;




case 5:
cout<<"\n\n Enter shake Quantity";
cin>>quant;
    if(Qshake-Sshake >=quant){

        Sshake=Sshake+quant;
        Total_shake=Total_shake+quant*250;
        cout<<"\n\n\t\t"<<quant<<"shakes is the order!";
    }
    else 
       cout<<"\n\tOnly"<<Qshake-Sshake<<"shakes remaining in hotel";
       break;




case 6:
cout<<"\n\n Enter Chicken-roll Quantity";
cin>>quant;
    if(Qchicken-Schicken >=quant){

        Schicken=Schicken+quant;
        Total_chicken=Total_chicken+quant*150;
        cout<<"\n\n\t\t"<<quant<<"chicken is the order!";
    }
    
    else 
       cout<<"\n\tOnly"<<Qchicken-Schicken<<"chicken remaining in hotel";
       break;

       case 7:

       cout<<"\n\t\tDetails of sales and collection ";
       cout<<"\n\n Number of rooms we had :"<<Qrooms;
       cout<<"\n\n Number of rooms we gave for rent "<<Srooms;
       cout<<"\n\n Remaining rooms : "<<Qrooms-Srooms;
       cout<<"\n\n Total rooms collection for the day :"<< Total_rooms;



     
       cout<<"\n\n Number of pasta we had :"<<Qpasta;
       cout<<"\n\n Number of pasta we gave for rent "<<Spasta;
       cout<<"\n\n Remaining pasta : "<<Qpasta-Spasta;
       cout<<"\n\n Total pasta collection for the day :"<< Total_pasta;




       cout<<"\n\n Number of burger we had :"<<Qburger;
       cout<<"\n\n Number of burger we gave for rent "<<Sburger;
       cout<<"\n\n Remaining burger: "<<Qburger-Sburger;
       cout<<"\n\n Total burger collection for the day :"<< Total_burger;

       
       
       cout<<"\n\n Number of noodle we had :"<<Qnoodle;
       cout<<"\n\n Number of noodle we gave for rent "<<Snoodle;
       cout<<"\n\n Remaining noodle: "<<Qnoodle-Snoodle;
       cout<<"\n\n Total noodle collection for the day :"<< Total_noodles;



       cout<<"\n\n Number of shake we had :"<<Qshake;
       cout<<"\n\n Number of shake we gave for rent "<<Sshake;
       cout<<"\n\n Remaining shake: "<<Qshake-Sshake;
       cout<<"\n\n Total shake collection for the day :"<< Total_shake;


       cout<<"\n\n Number of chicken-roll we had :"<<Qchicken;
       cout<<"\n\n Number of chicken-roll we gave for rent "<<Schicken;
       cout<<"\n\n Remaining chicken-roll: "<<Qchicken-Schicken;
       cout<<"\n\n Total chicken-roll collection for the day :"<< Total_chicken;
       
case 8:
  exit(0);

  default:
     cout<<"\n Please select the number mentioned above! ";

}
goto m;

}