#pragma once

#include <opc/ua/server/opc_tcp_async.h>

namespace OpcUa {
namespace Server {

class AsyncOpcTcpAddon : public Common::Addon
  {
  public:
    DEFINE_CLASS_POINTERS(AsyncOpcTcpAddon)

  public:
    virtual void Initialize(Common::AddonsManager& addons, const Common::AddonParameters& params) override;
    virtual void Stop() override;

  public:
    void PublishApplicationsInformation(std::vector<OpcUa::ApplicationDescription> applications, std::vector<OpcUa::EndpointDescription> endpoints, const Common::AddonsManager& addons) const;

    AsyncOpcTcp::SharedPtr GetEndpoint();
  private:
    AsyncOpcTcp::SharedPtr Endpoint;
  };

}
}
