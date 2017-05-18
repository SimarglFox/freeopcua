#pragma once
#include <opc/ua/node.h>

//namespace OpcUa;

class IOHandlerBase
{
  public:
    virtual ~IOHandlerBase()
    {
    }

    virtual void AfterMonitorItemCreated(int32_t sessionId,
                                    const OpcUa::NodeId& node,
                                    OpcUa::AttributeId attribute_id,
                                    uint32_t monitoredItemID)
    {
    }

    virtual void BeforeMonitorItemDeleted(int32_t sessionId,
                                          uint32_t monitoredItemID)
    {
    }

    virtual bool BeforeAttributeWrite(int32_t sessionId,
                                      const OpcUa::NodeId& node,
                                      OpcUa::AttributeId attribute_id,
                                      const OpcUa::DataValue& data_value)
    {
        return true;
    }

};
