#include<stdio.h>
#include<conio.h>
int main()
{
  //MAIN VARIABLES
  double hpt_bill,drs_fee,lab_fees,other_charges,room_charges,tax;
	     /*VALUE HOLDER for the MAIN VARIABLE*/
  //DOCTORS FEES
  double anaesthesiologist_fee,specialist_fee,surgions_fee;
  //LAB FEES
  double xray,cbc,blood_typing,urinalysis;
  //OTHER CHARGES
  double extra_beddings,syringes,dextrose,dressing_liquid,medicine;
  //ROOM CHARGES
  double confine_days,rrt_perday;

 /*INPUT & OUTPUT STATEMENT*/
  printf("\n**** CLIENT'S PAYMENTS ****\n");
  printf("\nHow many days confine : ");
  scanf("%lf",&confine_days);
   printf("Rate perday           : ");
  scanf("%lf",&rrt_perday);
   printf("Anaesthesiologist_fee : ");
  scanf("%lf",&anaesthesiologist_fee);
  printf("Specialist_fee        : ");
  scanf("%lf",&specialist_fee);
   printf("Surgions_fee          : ");
  scanf("%lf",&surgions_fee);
   printf("Xray fee              : ");
  scanf("%lf",&xray);
   printf("Cbc fee               : ");
  scanf("%lf",&cbc);
   printf("Blood_typing fee      : ");
  scanf("%lf",&blood_typing);
  printf("Urinalysis fee        : ");
  scanf("%lf",&urinalysis);
  printf("Extra_beddings fee    : ");
  scanf("%lf",&extra_beddings);
  printf("Syringes fee          : ");
  scanf("%lf",&syringes);
  printf("Dextrose fee          : ");
  scanf("%lf",&dextrose);
  printf("Dressing_liquid fee   : ");
  scanf("%lf",&dressing_liquid);
  printf("Medicine fee          : ");
  scanf("%lf",&medicine);
  //FORMULA
    drs_fee=anaesthesiologist_fee+specialist_fee+surgions_fee;
    lab_fees=xray+cbc+blood_typing+urinalysis;
    other_charges=extra_beddings+syringes+dextrose+dressing_liquid+medicine;
    room_charges=confine_days+rrt_perday;
    tax=((other_charges*0.10)+(drs_fee*0.12));
    hpt_bill=drs_fee+lab_fees,other_charges,room_charges,tax;

  //FINAL RESULT OUTPUT
   printf("\n\n**** CLIENT'S BILL ****\n");
   printf("\nDoctor's fee  : %.2lf",drs_fee);
   printf("\nLab fees      : %.2lf",lab_fees);
   printf("\nOther charges : %.2lf",other_charges);
   printf("\nRoom charges  : %.2lf",room_charges);
   printf("\nTax           : %.2lf",tax);
   printf("\nHospital bill : %.2lf", hpt_bill);
   getch();
  return 0;
}
