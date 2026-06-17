#include<stdio.h>
#include<stdlib.h>


int main() {

    int day_1,h_1,min_1,sec_1,day_2,h_2,min_2,sec_2;
   
    scanf("Dia %d %d : %d : %d Dia %d %d : %d : %d",&day_1,&h_1,&min_1,&sec_1,&day_2,&h_2,&min_2,&sec_2);

    

    int EvDay,EvHour,EvMin,EvSec;



    if(day_1<day_2){                        //------calculation_D1
        EvDay = day_2 - day_1;
        if(h_1>h_2){                        //-----calculation_H1
            EvHour = 24 - (h_1 - h_2);
            EvDay -= 1;
            if(min_1>min_2){                
                EvMin = 60 - (min_1 - min_2);
                EvHour -= 1;
                if(sec_1>sec_2){            
                    EvSec = 60 - (sec_1 - sec_2);
                    EvMin -= 1;
                } else if(sec_1<sec_2){     
                    EvSec = sec_2 - sec_1;
                } else{                     
                    EvSec = 60;
                }
            } else if(min_1<min_2){         
                EvMin = min_2 - min_1;
                if(sec_1>sec_2){
                    EvSec = 60 - (sec_1 - sec_2);
                    EvMin -= 1;
                } else if(sec_1<sec_2){
                    EvSec = sec_2 - sec_1;
                } else{
                    EvSec = 60;
                }
            } else {                        
                EvMin = 60;
                if(sec_1>sec_2){
                    EvSec = 60 - (sec_1 - sec_2);
                } else if(sec_1<sec_2){
                    EvSec = sec_2 - sec_1;
                } else{
                    EvSec = 60;
                }
            }
        }  else if(h_1<h_2){                //-----calculation_H2
            EvHour = h_2 - h_1;
            if(min_1>min_2){               
                EvMin = 60 - (min_1 - min_2);
                EvHour -= 1;
                if(sec_1>sec_2){          
                    EvSec = 60 - (sec_1 - sec_2);
                    EvMin -= 1;
                } else if(sec_1<sec_2){   
                    EvSec = sec_2 - sec_1;
                } else{              
                    EvSec = 60;
                }
            } else if(min_1<min_2){           
                EvMin = min_2 - min_1;
                if(sec_1>sec_2){
                    EvSec = 60 - (sec_1 - sec_2);
                    EvMin -= 1;
                } else if(sec_1<sec_2){
                    EvSec = sec_2 - sec_1;
                } else{
                    EvSec = 60;
                }
            } else {                   
                EvMin = 60;
                if(sec_1>sec_2){
                    EvSec = 60 - (sec_1 - sec_2);
                } else if(sec_1<sec_2){
                    EvSec = sec_2 - sec_1;
                } else{
                    EvSec = 60;
                }
            }
        } else {                    //-----calculation_H3
            EvHour = 24;  
            if(min_1>min_2){
                EvMin = 60 - (min_1 - min_2);
                EvHour -= 1;
                EvDay -=1;
                if(sec_1>sec_2){
                    EvSec = 60 - (sec_1 - sec_2);
                    EvMin -= 1;
                } else if(sec_1<sec_2){
                    EvSec = sec_2 - sec_1;
                } else{
                    EvSec = 60;
                }
            } else if(min_1<min_2){
                EvMin = min_2 - min_1;
                EvHour -= 1;
                if(sec_1>sec_2){
                    EvSec = 60 - (sec_1 - sec_2);
                    EvMin -= 1;
                } else if(sec_1<sec_2){
                    EvSec = sec_2 - sec_1;
                } else{
                    EvSec = 60;
                }
            } else {
                EvMin = 60;
                if(sec_1>sec_2){
                    EvSec = 60 - (sec_1 - sec_2);
                } else if(sec_1<sec_2){
                    EvSec = sec_2 - sec_1;
                } else{
                    EvSec = 60;
                }
            }
    
        }
    } else {                                //------calculation_D2//
        EvDay = 0;
        if(h_1>h_2){                        //-----calculation_H1
            EvHour = 24 - (h_1 - h_2);
            if(min_1>min_2){                
                EvMin = 60 - (min_1 - min_2);
                EvHour -= 1;
                if(sec_1>sec_2){            
                    EvSec = 60 - (sec_1 - sec_2);
                    EvMin -= 1;
                } else if(sec_1<sec_2){   
                    EvSec = sec_2 - sec_1;
                } else{                   
                    EvSec = 60;
                }
            } else if(min_1<min_2){           
                EvMin = min_2 - min_1;
                if(sec_1>sec_2){              
                    EvSec = 60 - (sec_1 - sec_2);
                    EvMin -= 1;
                } else if(sec_1<sec_2){       
                    EvSec = sec_2 - sec_1;
                } else{
                    EvSec = 60;
                }
            } else {
                EvMin = 60;
                if(sec_1>sec_2){
                    EvSec = 60 - (sec_1 - sec_2);
                } else if(sec_1<sec_2){
                    EvSec = sec_2 - sec_1;
                } else{
                    EvSec = 60;
                }
            }
        }  else if(h_1<h_2){                //-----calculation_H2
            EvHour = h_2 - h_1;
            if(min_1>min_2){
                EvMin = 60 - (min_1 - min_2);
                EvHour -= 1;
                if(sec_1>sec_2){
                    EvSec = 60 - (sec_1 - sec_2);
                    EvMin -= 1;
                } else if(sec_1<sec_2){
                    EvSec = sec_2 - sec_1;
                } else{
                    EvSec = 60;
                }
            } else if(min_1<min_2){
                EvMin = min_2 - min_1;
                if(sec_1>sec_2){
                    EvSec = 60 - (sec_1 - sec_2);
                    EvMin -= 1;
                } else if(sec_1<sec_2){
                    EvSec = sec_2 - sec_1;
                } else{
                    EvSec = 60;
                }
            } else {
                EvMin = 60;
                if(sec_1>sec_2){
                    EvSec = 60 - (sec_1 - sec_2);
                } else if(sec_1<sec_2){
                    EvSec = sec_2 - sec_1;
                } else{
                    EvSec = 60;
                }
            }
        } else {                            //-----calculation_H3
            EvHour = 24;
            if(min_1>min_2){
                EvMin = 60 - (min_1 - min_2);
                if(sec_1>sec_2){
                    EvSec = 60 - (sec_1 - sec_2);
                    EvMin -= 1;
                } else if(sec_1<sec_2){
                    EvSec = sec_2 - sec_1;
                } else{
                    EvSec = 60;
                }
            } else if(min_1<min_2){
                EvMin = min_2 - min_1;
                EvHour -= 1;
                if(sec_1>sec_2){
                    EvSec = 60 - (sec_1 - sec_2);
                    EvMin -= 1;
                } else if(sec_1<sec_2){
                    EvSec = sec_2 - sec_1;
                } else{
                    EvSec = 60;
                }
            } else {
                EvMin = 60;
                if(sec_1>sec_2){
                    EvSec = 60 - (sec_1 - sec_2);
                } else if(sec_1<sec_2){
                    EvSec = sec_2 - sec_1;
                } else{
                    EvSec = 60;
                }
            }
    
        }
    }

    //Redefine...Sec,Min,Hour

      if(EvSec==60){
        EvSec = 0;
        if(EvMin==60){
            EvMin=0;
            if(EvHour==24){
                EvHour=0;
                }else{
                    EvHour=EvHour;
                }
            }else{ 
                EvMin=EvMin;
            }
        }else{
            EvSec = EvSec;
        if(EvMin==60){
            EvMin=0;
            if(EvHour==24){
                EvHour=0;
                }else{
                    EvHour=EvHour;
                }
            }else{ 
                EvMin=EvMin;
            }
        }
        


    printf("%d dia(s)\n", EvDay);
    printf("%d hora(s)\n", EvHour);
    printf("%d minuto(s)\n", EvMin);
    printf("%d segundo(s)\n", EvSec);

return 0;
}


