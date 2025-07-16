#include <wx/wx.h>

class Application : public wxApp{
  public:
    bool OnInit() override;
};

wxIMPLEMENT_APP(Application);