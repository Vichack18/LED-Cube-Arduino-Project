int led[]={13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, A4, A5};
int pisos[]= {A0, A1, A2, A3};
int y;

void setup() {
  // put your setup code here, to run once:
    for (int x=0; x<16;x++){
      pinMode(led[x], OUTPUT);
    }
    for (int x=0; x<4;x++){
      pinMode(pisos[x], OUTPUT);
      digitalWrite(pisos[x], HIGH); // se le da un high para que nuestro piso se encienda cuando nosotros lo decidamos //
      // esto para que los leds no se prendan sin que le demos la orden //
    }

}

void loop() {
  // put your main code here, to run repeatedly:
esquinas();
}

void LED(int h, int i, int j, int k, int l, int m, int n, int o, int p, int q, int r, int s, int t, int u, int v, int w){
  digitalWrite(led[0], h); // cuando h valga 0 sera 0 volts, y si h vale 1 sera 5v
  digitalWrite(led[1], i);
  digitalWrite(led[2], j);
  digitalWrite(led[3], k);
  digitalWrite(led[4], l);
  digitalWrite(led[5], m);
  digitalWrite(led[6], n);
  digitalWrite(led[7], o);
  digitalWrite(led[8], p);
  digitalWrite(led[9], q);
  digitalWrite(led[10], r);
  digitalWrite(led[11], s);
  digitalWrite(led[12], t);
  digitalWrite(led[13], u);
  digitalWrite(led[14], v);
  digitalWrite(led[15], w);
}

void PISO(int h, int i, int j, int k){
  digitalWrite(pisos[0], h);
  digitalWrite(pisos[1], i;
  digitalWrite(pisos[2], j);
  digitalWrite(pisos[3], k);
}

// ahora empezamos darle los valores que queramos //
void level (){
  switch(y){
    case 0: PISO(0, 1, 1, 1); break; // se activa solo el primer piso //
    case 1: PISO(1, 0, 1, 1); break; // se activa solo el segundo piso y asi //
    case 2: PISO(1, 1, 0, 1); break;
    case 3: PISO(1, 1, 1, 0); break;
  }
}

void todos(){ // representa el juego de luces, las demas funciones son adicionales/complementos //
  int t=100;
  for(int j=0;j<4; j++){ // j<4 por que hay 4 pisos //
  y=j;
  level(); // con esto habilitamos los pisos //
  // ahora hay que habilitar las 16 columnas //
  LED(1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);delay(t);
  LED(0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0);delay(t);
  LED(0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0);delay(t);
  LED(0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0);delay(t);
  LED(0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0);delay(t);
  LED(0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0);delay(t);
  LED(0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0);delay(t);
  LED(0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0);delay(t);
  LED(0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0);delay(t);
  LED(0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0);delay(t);
  LED(0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0);delay(t);
  LED(0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0);delay(t);
  LED(0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0);delay(t);
  LED(0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0);delay(t);
  LED(0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0);delay(t);
  LED(0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1);delay(t);
  }
}

void esquinas(){
  int t=100;
  for (int j=0; j<4;j++){
    y=j;
    level();
    LED(1,0,0,1,0,0,0,0,0,0,0,0,1,0,0,1); delay(t);
  }
  for (int j=3; j>=0;j--){
    y=j;
    level();
    LED(1,0,0,1,0,0,0,0,0,0,0,0,1,0,0,1); delay(t);
  }
}