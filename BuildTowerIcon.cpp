#include "BuildTowerIcon.h"
#include "Game.h"

extern Game * game;

BuildTowerIcon::BuildTowerIcon(QGraphicsItem *parent): QGraphicsPixmapItem(parent){
    setPixmap(QPixmap(":/Star.png"));
    this->setPos(500,0);
}

void BuildTowerIcon::mousePressEvent(QGraphicsSceneMouseEvent *event){
    if (!game->build){
        game->build = new Tower();
        game->setCursor(QString(":/Tower4.png"));
    }
}
