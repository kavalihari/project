#include <iostream>
using namespace  std ;

void admn() {

 int quant;
 int choice;
 int qrms=0,qpst=0,qchckn=0,qbrgrs=0,qndles=0,qcbiryani=0;
 int srms=0,spst=0,schckn=0,sbrgrs=0,sndles=0,scbiryani=0;
 int total_srms=0,total_spst=0,total_schckn=0,total_sbrgrs=0,total_scbiryani=0,total_sndles=0;


 cout<<"\n\t\tquantity of items we had: ";
 cout<<"\n\n\t\tavaliable rooms :";
 cin>>qrms;
 cout<<"\n\t\tquantity of pasta :";
 cin>>qpst;
 cout<<"\n\t\tquantity of chicken rolls :";
 cin>>qchckn;
 cout<<"\n\t\tquantity of burgers :";
 cin>>qbrgrs;
 cout<<"\n\t\tquantity of noodles :";
 cin>>qndles;
 cout<<"\n\t\tquantity of chicken biryani :";
 cin>>qcbiryani;

 cout<<"\n\t\t_________________________________";
 cout<<"\n\t\t Name of the item  |"<<"praise(Rs)";
 cout<<"\n\t\t _________________________________";
 cout<<"\n\t\t  1)rooms          |"<<"2500";
 cout<<"\n\t\t  2)pasta          |"<<"90";
 cout<<"\n\t\t  3)chicken rolls  |"<<"100";
 cout<<"\n\t\t  4)noodles        |"<<"70";
 cout<<"\n\t\t  5)burgers        |"<<"75";
 cout<<"\n\t\t  6)chicken biryani|"<<"120";



 m:
 cout<<"\n\t\tplease select the menu option  ";
 cout<<"\n\t\t1)rooms";
 cout<<"\n\t\t2)pasta";
 cout<<"\n\t\t3)chicken rolls";
 cout<<"\n\t\t4)noodles";
 cout<<"\n\t\t5)burgers";
 cout<<"\n\t\t6)chicken biryani";
 cout<<"\n\t\t7)regarding to day collection";
 cout<<"\n\t\t8)exit";

 cout<<"\n\t\teneter your choice\n";
 cin>>choice;
 switch(choice)
 {
     case 1:{
         cout<<"\nenter the number of rooms you want:";
         cin>>quant;
         if(qrms-srms>=quant){
             srms=srms+quant;
             total_srms=total_srms+quant*1200;
             cout<<"\n\t\t"<<quant<<"  room/rooms have been alloted to you:";

         }
         else{
             cout<<"\n\t\t only "<<qrms-srms<<"remaining rooms in hotel";
         }
         break;

     }
   case 2:{
           cout<<"\n enter the number of pasta you want:";
         cin>>quant;
         if(qpst-spst>=quant){
             spst=spst+quant;
             total_spst=total_spst+quant*90;
             cout<<"\n\t\t"<<quant<<" pasta is order";

         }
         else{
             cout<<"\n\t\t only "<<qpst-spst<<"remaining pasta/pastas in hotel";
         }
         break;

    }
 case 3:{ cout<<"\n enter the number of chicken rolls you want:";
         cin>>quant;
         if(qchckn-schckn>=quant){
             schckn=schckn+quant;
             total_schckn=total_schckn+quant*100;
             cout<<"\n\t\t"<<quant<<"chicken rolls is order";

         }
         else{
             cout<<"\n\t\t only "<<qchckn-schckn<<"remaining chicken roll/ chicken rolls in hotel";
         }
         break;

   }
 case 4:{  cout<<"\n enter the number of noodles you want:";
         cin>>quant;
         if(qndles-sndles>=quant){
             sndles=sndles+quant;
             total_sndles=total_sndles+quant*70;
             cout<<"\n\t\t"<<quant<<"  noodles is  order";

         }
         else{
             cout<<"\n\t\t only "<<qndles-sndles<<" remaining rooms in hotel";
         }
         break;

   }
 case 5:{
      cout<<"\n enter the number of burgers you want:";
         cin>>quant;
         if(qbrgrs-sbrgrs>=quant){
             sbrgrs=sbrgrs+quant;
             total_sbrgrs=total_sbrgrs+quant*75;
             cout<<"\n\t\t"<<quant<<"burgers is order ";

         }
         else{
             cout<<"\n\t\t only "<<qbrgrs-sbrgrs<<"remaining burgers in hotel";
         }
         break;

   }
   case 6:{
         cout<<"\n enter the number of chicken biryani you want:";
         cin>>quant;
         if(qcbiryani-scbiryani>=quant){
             scbiryani=scbiryani+quant;
             total_scbiryani=total_scbiryani+quant*100;
             cout<<"\n\t\t"<<quant<<"chicken rolls is order";

         }
         else{
             cout<<"\n\t\t only "<<qcbiryani-scbiryani<<"remaining chicken roll/ chicken rolls in hotel";
         }
         break;
   }
   case 7:{   cout<<"\n\t\tDetails of sales and collection ";
              cout<<"\n\n Number of rooms we had :"<<qrms;
              cout<<"\n\n Number of rooms we gave for rent :"<<srms;
              cout<<"\n\n remaining rooms : "<<qrms-srms;
              cout<<"\n\n total rooms collection for the day :\n\n"<<total_srms;



              cout<<"\n\n Number of pasta we had :"<<qpst;
              cout<<"\n\n Number of pasta sold :"<<spst;
              cout<<"\n\n remaining pasta : "<<qpst-spst;
              cout<<"\n\n total rooms collection for the day :\n\n"<<total_spst;


              cout<<"\n\n Number of chicken rolls we had :"<<qchckn;
              cout<<"\n\n Number of chicken rolls sold :"<<schckn;
              cout<<"\n\n remaining chicken rolls : "<<qchckn-schckn;
              cout<<"\n\n total chicken collection for the day :\n\n"<<total_schckn;


              cout<<"\n\n Number of noodles we had :"<<qndles;
              cout<<"\n\n Number of noodles we sold:"<<sndles;
              cout<<"\n\n remaining noodles : "<<qndles-sndles;
              cout<<"\n\n total noodles collection for the day :\n\n"<<total_sndles;


              cout<<"\n\n Number of burgers we had :"<<qbrgrs;
              cout<<"\n\n Number of burgers sold :"<<sbrgrs;
              cout<<"\n\n remaining burgers : "<<qbrgrs-sbrgrs;
              cout<<"\n\n total burgers collection for the day \n\n:"<<total_sbrgrs;


              cout<<"\n\n Number of chicken biryani we had :"<<qcbiryani;
              cout<<"\n\n Number of chicken biryani sold :"<<scbiryani;
              cout<<"\n\n remaining chicken biryani : "<<qcbiryani-scbiryani;
              cout<<"\n\n total chicken biryani collection for the day :\n\n"<<total_scbiryani;

              cout<<"\n\ntotal collection of money for the day:"<<total_srms+total_sbrgrs+total_spst+total_sndles+total_schckn+total_scbiryani<<endl;

   }
   case 8:{
       exit(0);
       default:
       cout<<"please select the numbers mentioned above\n";

   }

 }

 goto m;


   // return 0;
}
int main(){string mail;
string pass;
m:

cout<<"\n\n enter you mail id :";
getline(cin,mail);
cout<<"\n\n enter your password:";
getline(cin,pass);
if(mail=="hari@gmail.com"&&pass=="hari1234@"){
    admn();
}else{cout<<"\n\n\t\twrong password please try again \n";
}
goto m;
}
