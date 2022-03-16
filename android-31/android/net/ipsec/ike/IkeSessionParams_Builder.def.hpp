#pragma once

#include "../../../../JObject.hpp"

class JByteArray;
class JIntArray;
namespace android::net
{
	class Network;
}
namespace android::net::eap
{
	class EapSessionConfig;
}
namespace android::net::ipsec::ike
{
	class IkeIdentification;
}
namespace android::net::ipsec::ike
{
	class IkeSaProposal;
}
namespace android::net::ipsec::ike
{
	class IkeSessionParams;
}
class JString;
namespace java::security::cert
{
	class X509Certificate;
}

namespace android::net::ipsec::ike
{
	class IkeSessionParams_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit IkeSessionParams_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		IkeSessionParams_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		IkeSessionParams_Builder();
		IkeSessionParams_Builder(android::net::ipsec::ike::IkeSessionParams arg0);
		
		// Methods
		android::net::ipsec::ike::IkeSessionParams_Builder addIkeOption(jint arg0) const;
		android::net::ipsec::ike::IkeSessionParams_Builder addIkeSaProposal(android::net::ipsec::ike::IkeSaProposal arg0) const;
		android::net::ipsec::ike::IkeSessionParams build() const;
		android::net::ipsec::ike::IkeSessionParams_Builder removeIkeOption(jint arg0) const;
		android::net::ipsec::ike::IkeSessionParams_Builder setAuthDigitalSignature(java::security::cert::X509Certificate arg0, java::security::cert::X509Certificate arg1, JObject arg2) const;
		android::net::ipsec::ike::IkeSessionParams_Builder setAuthDigitalSignature(java::security::cert::X509Certificate arg0, java::security::cert::X509Certificate arg1, JObject arg2, JObject arg3) const;
		android::net::ipsec::ike::IkeSessionParams_Builder setAuthEap(java::security::cert::X509Certificate arg0, android::net::eap::EapSessionConfig arg1) const;
		android::net::ipsec::ike::IkeSessionParams_Builder setAuthPsk(JByteArray arg0) const;
		android::net::ipsec::ike::IkeSessionParams_Builder setDpdDelaySeconds(jint arg0) const;
		android::net::ipsec::ike::IkeSessionParams_Builder setLifetimeSeconds(jint arg0, jint arg1) const;
		android::net::ipsec::ike::IkeSessionParams_Builder setLocalIdentification(android::net::ipsec::ike::IkeIdentification arg0) const;
		android::net::ipsec::ike::IkeSessionParams_Builder setNattKeepAliveDelaySeconds(jint arg0) const;
		android::net::ipsec::ike::IkeSessionParams_Builder setNetwork(android::net::Network arg0) const;
		android::net::ipsec::ike::IkeSessionParams_Builder setRemoteIdentification(android::net::ipsec::ike::IkeIdentification arg0) const;
		android::net::ipsec::ike::IkeSessionParams_Builder setRetransmissionTimeoutsMillis(JIntArray arg0) const;
		android::net::ipsec::ike::IkeSessionParams_Builder setServerHostname(JString arg0) const;
	};
} // namespace android::net::ipsec::ike

