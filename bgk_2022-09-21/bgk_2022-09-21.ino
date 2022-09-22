// Set the pin numbers of the pushbuttons
const int L_F = 13; // Left Fore
const int L_B = 12; // Left Bird
const int L_R = 11; // Left Ring
const int L_P = 10; // Left Pinky
const int L_T = 9;  // Left Thumb
const int LEFT_FINGERS[5] = {L_F, L_B, L_R, L_P, L_T};

// const int R_F = 7;  // Right Fore
// const int R_B = 6;  // Right Bird
// const int R_R = 5;  // Right Ring
// const int R_P = 4;  // Right Pinky
// const int R_T = 3;  // Right Thumb
// const int RIGHT_FINGERS[5] = {R_F, R_B, R_R, R_P, R_T};

// Set the starting state of the buttons as low
bool l_f_state, l_b_state, l_r_state, l_p_state, l_t_state = false;
bool l_states[5] = {l_f_state, l_b_state, l_r_state, l_p_state, l_t_state};
bool l_oldstates[5] = {l_f_state, l_b_state, l_r_state, l_p_state, l_t_state};
bool l_output[5] = {l_f_state, l_b_state, l_r_state, l_p_state, l_t_state};

// bool r_f_state, r_b_state, r_r_state, r_p_state, r_t_state = false;
// bool r_states[5] = {r_f_state, r_b_state, r_r_state, r_p_state, r_t_state};

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  // Initialize the left hand pushbuttons as inputs
  for (int i = 0; i < 5; i++) {
    pinMode(LEFT_FINGERS[i], INPUT);
  }

  // Initialize the right hand pushbuttons as inputs
  // for (int i = 0; i < 5; i++) {
  //  pinMode(RIGHT_FINGERS[i], INPUT);
  // }
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i < 5; i++) {
    l_states[i] = digitalRead(LEFT_FINGERS[i]);
    
    if ((l_states[i] == true) && (l_oldstates[i] == false)) {
      l_output[i] = true;
      delay(10);
    } else {
      l_output[i] = false;
      delay(10);
    }

    l_oldstates[i] = l_states[i];
  }

  delay(1000);
}
