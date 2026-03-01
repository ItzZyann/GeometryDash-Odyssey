#pragma once
using namespace geode::prelude;

class OdysseyPopup : public geode::Popup
{
protected:
    bool init(std::string const &title, std::string const &desc);
    bool m_translationWarning = false;
    bool m_savefileWarning = false;

public:
    static OdysseyPopup *create(std::string, std::string);
    void setWarning(bool, bool);

    void onClose(CCObject *) override;
};