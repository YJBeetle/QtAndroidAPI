#pragma once

#include "../../../../JObject.hpp"

class JByteArray;
namespace android::net::wifi::aware
{
	class PeerHandle;
}

namespace android::net::wifi::aware
{
	class ServiceDiscoveryInfo : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ServiceDiscoveryInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ServiceDiscoveryInfo(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JObject getMatchFilters() const;
		jint getPeerCipherSuite() const;
		android::net::wifi::aware::PeerHandle getPeerHandle() const;
		JByteArray getScid() const;
		JByteArray getServiceSpecificInfo() const;
	};
} // namespace android::net::wifi::aware

