#ifndef NODEDBGEVENTBASE_H
#define NODEDBGEVENTBASE_H

#include "json_node.h"
#include <wx/sharedptr.h>

class NodeDbgEventBase
{
public:
    typedef wxSharedPtr<NodeDbgEventBase> Ptr_t;

protected:
    wxString m_eventName;

public:
    NodeDbgEventBase(const wxString& eventName);
    virtual ~NodeDbgEventBase();
    /**
     * @brief process message in JSON format
     */
    virtual void Process(const JSONElement& json) = 0;

    /**
     * @brief create new instance of this type
     */
    virtual NodeDbgEventBase::Ptr_t Clone() = 0;
    
    void SetEventName(const wxString& eventName) { this->m_eventName = eventName; }
    const wxString& GetEventName() const { return m_eventName; }
};

#endif // NODEDBGEVENTBASE_H