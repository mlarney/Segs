// -*- C++ -*- generated by wxGlade 0.6.2 on Wed Jan 02 16:19:18 2008

#include <wx/wx.h>
#include <wx/image.h>

#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

// begin wxGlade: ::dependencies
// end wxGlade

// begin wxGlade: ::extracode

// end wxGlade

#include "Avatar.h"

class AuthObserver
{
public:
	virtual void notify_connected()=0;
	virtual void notify_disconnected()=0;
	virtual void notify_raw_data(char *dat,size_t sz)=0;
};

class LoginDialog: public wxDialog,public AuthObserver
{
public:
    // begin wxGlade: LoginDialog::ids
    // end wxGlade
	StickFigures::HumanStickfigure m_human1;
    LoginDialog(wxWindow* parent, int id, const wxString& title, const wxPoint& pos=wxDefaultPosition, const wxSize& size=wxDefaultSize, long style=wxDEFAULT_DIALOG_STYLE);
	void notify_connected();
	void notify_disconnected();
	void notify_raw_data(char *dat,size_t sz);
private:
    // begin wxGlade: LoginDialog::methods
    void set_properties();
    void do_layout();
    // end wxGlade

protected:
    // begin wxGlade: LoginDialog::attributes
    wxTextCtrl* m_txt_login;
    wxTextCtrl* m_txt_passw;
    wxTextCtrl* m_server_response;
    wxButton* m_btn_login;
    wxButton* m_btn_cancel;
    // end wxGlade

    DECLARE_EVENT_TABLE();

public:
    virtual void OnSetLogin(wxCommandEvent &event); // wxGlade: <event_handler>
    virtual void OnSetPassword(wxCommandEvent &event); // wxGlade: <event_handler>
    virtual void OnLogin(wxCommandEvent &event); // wxGlade: <event_handler>
	void OnMyPaint(wxPaintEvent &ev);
}; // wxGlade: end class


#endif // LOGINDIALOG_H
