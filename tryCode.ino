

// This is try point..Basic
byte h = 0xF1;  // try how to use hex = 1 16 < 1 byte = 8bits = 00000000 = 00(Hex)
int *n, *m, *f;
int *arrayN[4];
int sum;
int soong = 200;
int wang = 180;
int number[] = {40, 50, 80, 90};

// I want to try change value..
int I[] = {10, 9, 20};
int II[] = {1, 1, 1};
int *input[] = {I, II};
int *change;

void setup() {
  n = &soong;
  m = &wang;
  Serial.begin(9600);
  // Serial.print(h,HEX);
  Serial.print("n: "); Serial.println( *n );
  Serial.print("m: "); Serial.println(*m);
  for (int i; i < 4; i++) {
    arrayN[i] = &number[i];
    Serial.print("arrayN "); Serial.print(i); Serial.print(": "); Serial.println( *arrayN[i]);

  }
  sum = *arrayN[0] + *arrayN[1] + *arrayN[2] + *arrayN[3]; // need catch * adress Number
  Serial.print(", sum: "); Serial.println( sum);

  point( &number[0]);
  Serial.print("change arrayN[0] "); Serial.println(*arrayN[0]);
  //******************try change *value
  for (int i = 0; i < 3; i++) {
    Serial.print("I_"); Serial.print(i); Serial.print(": "); Serial.print(I[i]); Serial.print(", ");
  }
  Serial.println("......");
  for (int i = 0; i < 3; i++) {
    Serial.print("II_"); Serial.print(i); Serial.print(": "); Serial.print(II[i]); Serial.print(", ");
  }
  Serial.println("......");
  
  change = input[0]; // ********************************************chatch Value or use catchInput function
  for (int i = 0; i < 3; i++) {
    Serial.print("cahange");     Serial.print(i); Serial.print(": ");     Serial.print(change[i]); Serial.print(", ");
    if(i == 2) Serial.println("...end");
  }
  Serial.println("......change I Value.....");  //catchInput(input[0]);
  
  change[0] = 1;  change[1] = 2;  change[2] = 3;
  for (int i = 0; i < 3; i++) {
    Serial.print("I_c"); Serial.print(i); Serial.print(": "); Serial.print(I[i]); Serial.print(", ");
    
  }
  Serial.println("");

}
void catchInput(int *num) {
  Serial.print("num[0]: "); Serial.println(num[0]);
  Serial.print("num[1]: "); Serial.println(num[1]);
  Serial.print("num[2]: "); Serial.println(num[2]);
  Serial.println("*************");
}


void point(int* num) {
  Serial.print("num = "); Serial.println(*num);
  *num = 180;
  Serial.print("num = "); Serial.println(*num);
}


void loop() {
  // put your main code here, to run repeatedly:

}




