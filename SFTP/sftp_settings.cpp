#include "sftp_settings.h"

SFTPSettings::SFTPSettings()
    : clConfigItem("sftp-settings")
{
}

SFTPSettings::~SFTPSettings()
{
}

void SFTPSettings::FromJSON(const JSONElement& json)
{
    m_accounts.clear();
    JSONElement arrAccounts = json.namedObject("accounts");
    int size = arrAccounts.arraySize();
    for(int i=0; i<size; ++i) {
        SSHAccountInfo account;
        account.FromJSON(arrAccounts.arrayItem(i));
        m_accounts.push_back( account );
    }
}

JSONElement SFTPSettings::ToJSON() const
{
    JSONElement element = JSONElement::createObject(GetName());
    JSONElement arrAccounts = JSONElement::createArray("accounts");
    element.append(arrAccounts);
    
    SSHAccountInfo::List_t::const_iterator iter = m_accounts.begin(); 
    for(; iter != m_accounts.end(); ++iter ) {
        arrAccounts.append( iter->ToJSON() );
    }
    return element;
}

void SFTPSettings::Load(SFTPSettings& settings)
{
    clConfig config("sftp-settings.conf");
    config.ReadItem( &settings );
}

void SFTPSettings::Save(const SFTPSettings& settings)
{
    clConfig config("sftp-settings.conf");
    config.WriteItem( &settings );
}
