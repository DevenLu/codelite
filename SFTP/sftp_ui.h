//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#ifndef SFTP_UI_BASE_CLASSES_H
#define SFTP_UI_BASE_CLASSES_H

#include <wx/settings.h>
#include <wx/xrc/xmlres.h>
#include <wx/xrc/xh_bmp.h>
#include <wx/dialog.h>
#include <wx/iconbndl.h>
#include <wx/sizer.h>
#include <wx/dataview.h>
#include <wx/button.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>

class SSHAccountManagerDlgBase : public wxDialog
{
protected:
    wxDataViewListCtrl* m_dvListCtrlAccounts;
    wxButton* m_buttonNew;
    wxButton* m_buttonDelete;
    wxButton* m_button6;
    wxButton* m_button8;

protected:
    virtual void OnEditAccount(wxDataViewEvent& event) { event.Skip(); }
    virtual void OnAddAccount(wxCommandEvent& event) { event.Skip(); }
    virtual void OnDeleteAccount(wxCommandEvent& event) { event.Skip(); }

public:
    SSHAccountManagerDlgBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("SSH Account Manager"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER);
    virtual ~SSHAccountManagerDlgBase();
};


class AddSSHAcountDlgBase : public wxDialog
{
protected:
    wxStaticText* m_staticHostIp;
    wxTextCtrl* m_textCtrlHost;
    wxStaticText* m_staticText45;
    wxTextCtrl* m_textCtrlPort;
    wxStaticText* m_staticText37;
    wxTextCtrl* m_textCtrlUsername;
    wxStaticText* m_staticText41;
    wxTextCtrl* m_textCtrlPassword;
    wxButton* m_button27;
    wxButton* m_button25;

protected:
    virtual void OnOKUI(wxUpdateUIEvent& event) { event.Skip(); }

public:
    AddSSHAcountDlgBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Add Account"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER);
    virtual ~AddSSHAcountDlgBase();
};

#endif
