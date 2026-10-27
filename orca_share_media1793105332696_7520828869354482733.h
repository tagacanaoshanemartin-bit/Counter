int ONE[] = {0,1,1,0,0,0,0};
int TWO[] = {1,1,0,1,1,0,1};
int THREE[] = {1,1,1,1,0,0,1};
int FOUR[] = {0,1,1,0,0,1,1};
int FIVE[] = {1,0,1,1,0,1,1};
int SIX[] = {0,0,1,1,1,1,1};
int SEVEN[] = {1,1,1,0,0,0,0};
int EIGHT[] = {1,1,1,1,1,1,1};
int NINE[] = {1,1,1,1,0,1,1};
int ZERO[] = {1,1,1,1,1,1,0};

void toSevSeg(int display[], int digit[]) {
  for(int i=0; i<sizeof(ones)/sizeof(ones[0]); i++) {
    digitalWrite(display[i], digit[i]); // on the display, write what digit is provided
  }

} 

void decoder(int c) {
  int tensPlace = c/10;
  int onesPlace = c - (tensPlace*10);

  switch(tensPlace) {
    case 0: toSevSeg(tens, ZERO); break;
    case 1: toSevSeg(tens, ONE); break;
    case 2: toSevSeg(tens, TWO); break;
    case 3: toSevSeg(tens, THREE); break;
    case 4: toSevSeg(tens, FOUR); break;
    case 5: toSevSeg(tens, FIVE); break;
    case 6: toSevSeg(tens, SIX); break;
    case 7: toSevSeg(tens, SEVEN); break;
    case 8: toSevSeg(tens, EIGHT); break;
    case 9: toSevSeg(tens, NINE); break;
  }

  switch(onesPlace) {
    case 0: toSevSeg(ones, ZERO); break;
    case 1: toSevSeg(ones, ONE); break;
    case 2: toSevSeg(ones, TWO); break;
    case 3: toSevSeg(ones, THREE); break;
    case 4: toSevSeg(ones, FOUR); break;
    case 5: toSevSeg(ones, FIVE); break;
    case 6: toSevSeg(ones, SIX); break;
    case 7: toSevSeg(ones, SEVEN); break;
    case 8: toSevSeg(ones, EIGHT); break;
    case 9: toSevSeg(ones, NINE); break;
  }
}