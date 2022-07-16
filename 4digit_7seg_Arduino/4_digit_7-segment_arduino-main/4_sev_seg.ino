int  i, l, m, n;

int Arduino_Pins[7] = {13, 12, 11, 10, 9, 8, 7};
int Segment_Pins[10][7] = {{1,1,1,1,1,1,0}, // 0
                           {0,1,1,0,0,0,0}, // 1
                           {1,1,0,1,1,0,1}, // 2
                           {1,1,1,1,0,0,1}, // 3
                           {0,1,1,0,0,1,1}, // 4
                           {1,0,1,1,0,1,1}, // 5
                           {1,0,1,1,1,1,1}, // 6
                           {1,1,1,0,0,0,0}, // 7
                           {1,1,1,1,1,1,1}, // 8
                           {1,1,1,1,0,1,1},}; // 9 
void setup(){
  for(int p=3; p<=13; p++){
    pinMode(Arduino_Pins[p], OUTPUT);}
}
void loop(){  
  for(int i=0;i<10;i++)  {
    for(int TIME=0;TIME<=10;TIME++){
    digit4();   
    digit3();
    digit2();
    digit1();
    //delay(1);
    } 
       
     if(i==9){
        l++;
        if(l>9){
           m++;
           if(m>9){
            n++;
            if(n>9){
              n = 0;
            } 
           } 
         if(m>9){
          m = 0;
         }
       } 
     if(l>9){
        l = 0;} 
     } 
   }  
 } 
 
void digit4(){
    digitalWrite(4, LOW);
    digitalWrite(3, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    for(int j=0;j<7;j++){
      digitalWrite(Arduino_Pins[j],Segment_Pins[i][j]);}
    delay(1);    
}
void digit3(){
    digitalWrite(4, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    for(int j=0;j<7;j++){      
      digitalWrite(Arduino_Pins[j],Segment_Pins[l][j]);}
    delay(1);
}
void digit2(){
    digitalWrite(4, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(5, LOW);
    digitalWrite(6, HIGH);
        for(int j=0;j<7;j++){          
          digitalWrite(Arduino_Pins[j],Segment_Pins[m][j]);}
        delay(1);
}
void digit1(){
    digitalWrite(4, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, LOW);
        for(int j=0;j<7;j++){          
          digitalWrite(Arduino_Pins[j],Segment_Pins[n][j]);}
        delay(1);
}
