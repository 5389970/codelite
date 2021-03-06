//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: OpenWindowsPanelBase.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#include "openwindowspanelbase.h"

// Declare the bitmap loading function
extern void wxCrafterKq0OgDInitBitmapResources();

static bool bBitmapLoaded = false;

OpenWindowsPanelBase::OpenWindowsPanelBase(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size,
                                           long style)
    : wxPanel(parent, id, pos, size, style)
{
    if(!bBitmapLoaded) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxCrafterKq0OgDInitBitmapResources();
        bBitmapLoaded = true;
    }

    wxBoxSizer* mainSizer = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(mainSizer);

    m_dvListCtrl = new clThemedListCtrl(this, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)),
                                        wxDV_NO_HEADER | wxDV_ROW_LINES | wxDV_MULTIPLE);

    mainSizer->Add(m_dvListCtrl, 1, wxALL | wxEXPAND, WXC_FROM_DIP(0));

    m_dvListCtrl->AppendIconTextColumn(_("Path"), wxDATAVIEW_CELL_INERT, WXC_FROM_DIP(-2), wxALIGN_LEFT,
                                       wxDATAVIEW_COL_RESIZABLE);

    SetName(wxT("OpenWindowsPanelBase"));
    SetSize(wxDLG_UNIT(this, wxSize(500, 300)));
    if(GetSizer()) { GetSizer()->Fit(this); }
    // Connect events
    m_dvListCtrl->Connect(wxEVT_COMMAND_DATAVIEW_SELECTION_CHANGED,
                          wxDataViewEventHandler(OpenWindowsPanelBase::OnTabSelected), NULL, this);
    m_dvListCtrl->Connect(wxEVT_COMMAND_DATAVIEW_ITEM_ACTIVATED,
                          wxDataViewEventHandler(OpenWindowsPanelBase::OnTabActivated), NULL, this);
    m_dvListCtrl->Connect(wxEVT_COMMAND_DATAVIEW_ITEM_CONTEXT_MENU,
                          wxDataViewEventHandler(OpenWindowsPanelBase::OnMenu), NULL, this);
}

OpenWindowsPanelBase::~OpenWindowsPanelBase()
{
    m_dvListCtrl->Disconnect(wxEVT_COMMAND_DATAVIEW_SELECTION_CHANGED,
                             wxDataViewEventHandler(OpenWindowsPanelBase::OnTabSelected), NULL, this);
    m_dvListCtrl->Disconnect(wxEVT_COMMAND_DATAVIEW_ITEM_ACTIVATED,
                             wxDataViewEventHandler(OpenWindowsPanelBase::OnTabActivated), NULL, this);
    m_dvListCtrl->Disconnect(wxEVT_COMMAND_DATAVIEW_ITEM_CONTEXT_MENU,
                             wxDataViewEventHandler(OpenWindowsPanelBase::OnMenu), NULL, this);
}
