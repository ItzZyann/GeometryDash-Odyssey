#pragma once
using namespace geode::prelude;

class OdysseyLevelPopup : public geode::Popup
{
private:
    GJGameLevel *m_level;
    int m_levelID = 0;

protected:
    bool init();
    void onPlay(CCObject *);
    void onSettings(CCObject *);
    void onComic(CCObject *);
    void onLore(CCObject *);

public:
    static OdysseyLevelPopup *create(int);
};