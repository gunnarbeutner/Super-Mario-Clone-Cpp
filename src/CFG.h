#pragma once

#ifndef CFG_H
#define CFG_H

#include "Text.h"
#include "MenuManager.h"
#include "Music.h"

class CCFG
{
private:
    static MenuManager* oMM;
    static Text* oText;
    static CIMG* tSMBLOGO;
    static Music* oMusic;

public:
    CCFG(void);
    ~CCFG(void);

    static int GAME_WIDTH;
    static int GAME_HEIGHT;

    static bool keySpace;

    static int keyIDA;
    static int keyIDS;
    static int keyIDD;
    static int keyIDSpace;
    static int keyIDShift;

    static CIMG* getSMBLOGO();

    static Text* getText();

    static MenuManager* getMM();
    static Music* getMusic();

    static bool canMoveBackward;
};

#endif