// Set the pin numbers of the pushbuttons
// Will likely put these into an array later on
const int LEFT_PINKY = 6;
const int LEFT_RING = 5;
const int LEFT_BIRD = 4;
const int LEFT_POINT = 3;
const int LEFT_THUMB = 2;

// Set the starting state of the buttons as low
int l_pinky_buttonstate, l_ring_buttonstate, l_bird_buttonstate, l_point_buttonstate, l_thumb_buttonstate = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  // Initialize the left hand pushbuttons as inputs
  pinMode(LEFT_PINKY, INPUT);
  pinMode(LEFT_RING, INPUT);
  pinMode(LEFT_BIRD, INPUT);
  pinMode(LEFT_POINT, INPUT);
  pinMode(LEFT_THUMB, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  l_pinky_buttonstate = digitalRead(LEFT_PINKY);
  Serial.print("Left Pinky Button State: ");
  Serial.println(l_pinky_buttonstate);
  l_ring_buttonstate = digitalRead(LEFT_RING);
  Serial.println("Left Ring Button State: ");
  Serial.println(l_ring_buttonstate);
  l_bird_buttonstate = digitalRead(LEFT_BIRD);
  Serial.println("Left Bird Button State: ");
  Serial.println(l_bird_buttonstate);
  l_point_buttonstate = digitalRead(LEFT_POINT);
  Serial.println("Left Pointer Button State: ");
  Serial.println(l_point_buttonstate);
  l_thumb_buttonstate = digitalRead(LEFT_THUMB);
  Serial.print("Left Thumb Button State: ");
  Serial.println(l_thumb_buttonstate);
  delay(1000);
}
