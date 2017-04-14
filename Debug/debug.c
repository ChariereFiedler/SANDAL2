#include <stdio.h>

#include "../SANDAL2.h"

void touch(ElementSDL2 *this){
  nextAnimationElementSDL2(this);
}

void endJump(ElementSDL2 *this,int code){
  if(code==1){
    setAnimationElementSDL2(this,0);
  }
}

int main(){
  ElementSDL2 * objet;
  int run = 1;
  int tps = 0, ticks = 0;
  int noir[4] = {0,0,0,0};
  int rouge[4] = {255,0,0,0};
  int i;
  
  if(initAllSDL2(IMG_INIT_JPG)){
    fprintf(stderr,"Erreur d'initialisation de la bibliotheque graphique.\n");
    exit(-1);
  }

  /* initialisation de la fenetre */
  initWindowSDL2(400,400,"test",SDL_WINDOW_RESIZABLE,noir,1);
  if(initIteratorWindowSDL2()){
    closeAllSDL2();
    fprintf(stderr,"Erreur d'ouverture de la fenetre.\n");
    exit(-1);
  }

  objet = createImage(150.f,100.f,100.f,200.f,"spritesheet.jpg",1,0);
  addHitBoxElementSDL2(objet,rectangleHitBox(0.f,0.f,1.f,1.f),0);
  
  createAnimationElementSDL2(objet,0);
  for(i=0;i<4;++i){
    addSpriteAnimationElementSDL2(objet,0,55*i,0,55,75,10);
  }
  setWaySpriteAnimationElementSDL2(objet,0,1);

  createAnimationElementSDL2(objet,1);
  for(i=0;i<4;++i){
    addSpriteAnimationElementSDL2(objet,1,259+i*72,0,72,75,10);
  }
  setWaySpriteAnimationElementSDL2(objet,1,1);
  
  addRotationSpeedElementSDL2(objet,1.f);

  setOnClickElementSDL2(objet,touch);

  setEndSpriteElementSDL2(objet,endJump);


  objet=createTexte(150.f,100.f,50.f,50.f,"arial.ttf","OK",rouge,2,1,-1);
  setTextStyleElementSDL2(objet,SANDAL2_STRIKETHROUGH);
  
  /* display de la fenetre */
  while(run){
    tps = SDL_GetTicks();
    /* gestion d'evenement */
    run=!PollEventSDL2(NULL);

    /* update de la fenetre */
    updateWindowSDL2();
    /* affichage de la fenetre */
    displayWindowSDL2();
    /* delai pour 60 frames/secondes */
    ticks = 16 - SDL_GetTicks() + tps;
    if(ticks>0){
      SDL_Delay(ticks);
    }
  }

  return 0;
}
