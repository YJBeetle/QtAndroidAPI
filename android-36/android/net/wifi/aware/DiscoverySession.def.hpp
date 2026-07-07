#pragma once

#include "../../../../JObject.hpp"

class JByteArray;
namespace android::net
{
	class NetworkSpecifier;
}
namespace android::net::wifi::aware
{
	class PeerHandle;
}
class JString;

namespace android::net::wifi::aware
{
	class DiscoverySession : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DiscoverySession(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DiscoverySession(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void acceptPairingRequest(jint arg0, android::net::wifi::aware::PeerHandle arg1, JString arg2, jint arg3, JString arg4) const;
		void close() const;
		android::net::NetworkSpecifier createNetworkSpecifierOpen(android::net::wifi::aware::PeerHandle arg0) const;
		android::net::NetworkSpecifier createNetworkSpecifierPassphrase(android::net::wifi::aware::PeerHandle arg0, JString arg1) const;
		void initiateBootstrappingRequest(android::net::wifi::aware::PeerHandle arg0, jint arg1) const;
		void initiatePairingRequest(android::net::wifi::aware::PeerHandle arg0, JString arg1, jint arg2, JString arg3) const;
		void rejectPairingRequest(jint arg0, android::net::wifi::aware::PeerHandle arg1) const;
		void sendMessage(android::net::wifi::aware::PeerHandle arg0, jint arg1, JByteArray arg2) const;
	};
} // namespace android::net::wifi::aware

