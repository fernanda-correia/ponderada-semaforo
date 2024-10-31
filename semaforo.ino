int pinVerde = 8;
int pinAmarelo = 11;
int pinVermelho = 9;

class LED {
  private:
    int pinLed;
    int tempo_ligado;
    int tempo_desligado;
    
  public:
    LED(int cor, int tLigado, int tDesligado) {
      pinLed = cor;
      tempo_ligado = tLigado;
      tempo_desligado = tDesligado;
      
      pinMode(pinLed, OUTPUT);
    }

    void ligado() {
      digitalWrite(pinLed, HIGH);
      delay(tempo_ligado);
    }

    void desligado() {
      digitalWrite(pinLed, LOW);
      delay(tempo_desligado);
    }
};

LED ledVermelho(pinVermelho, 6000, 100);
LED ledAmarelo(pinAmarelo, 2000, 100);
LED ledVerde(pinVerde, 4000, 100);
LED ledAmarelo2(pinAmarelo, 2000, 100);
LED ledVermelho2(pinVermelho, 6000, 100);

void setup() {
  pinMode(pinVermelho, OUTPUT);
  pinMode(pinAmarelo, OUTPUT);
  pinMode(pinVerde, OUTPUT);
}

void loop() {
  ledVermelho.ligado();
  ledVermelho.desligado();

  ledAmarelo.ligado();
  ledAmarelo.desligado();

  ledVerde.ligado();
  ledVerde.desligado();

  ledAmarelo2.ligado();
  ledAmarelo2.desligado();

  delay(200);
}
