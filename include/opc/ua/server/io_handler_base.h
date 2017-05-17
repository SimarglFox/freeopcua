#pragma once
#include <opc/ua/node.h>

//namespace OpcUa;

class IOHandlerBase
{
  public:
    virtual ~IOHandlerBase()
    {
    }

    virtual void MonitorItemCreated(const OpcUa::Node& node,
                                    int32_t attribute_id)
    {
    }

    virtual void MonitorItemDeleted(const OpcUa::NodeId& node,
                                    int32_t attribute_id)
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
