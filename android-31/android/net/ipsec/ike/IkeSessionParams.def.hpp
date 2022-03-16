#pragma once

#include "../../../../JObject.hpp"

class JIntArray;
namespace android::net
{
	class Network;
}
namespace android::net::ipsec::ike
{
	class IkeIdentification;
}
namespace android::net::ipsec::ike
{
	class IkeSessionParams_IkeAuthConfig;
}
class JObject;
class JString;

namespace android::net::ipsec::ike
{
	class IkeSessionParams : public JObject
	{
	public:
		// Fields
		static jint IKE_OPTION_ACCEPT_ANY_REMOTE_ID();
		static jint IKE_OPTION_EAP_ONLY_AUTH();
		static jint IKE_OPTION_FORCE_PORT_4500();
		static jint IKE_OPTION_MOBIKE();
		
		// QJniObject forward
		template<typename ...Ts> explicit IkeSessionParams(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		IkeSessionParams(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		jint getDpdDelaySeconds() const;
		jint getHardLifetimeSeconds() const;
		JObject getIkeSaProposals() const;
		android::net::ipsec::ike::IkeSessionParams_IkeAuthConfig getLocalAuthConfig() const;
		android::net::ipsec::ike::IkeIdentification getLocalIdentification() const;
		jint getNattKeepAliveDelaySeconds() const;
		android::net::Network getNetwork() const;
		android::net::ipsec::ike::IkeSessionParams_IkeAuthConfig getRemoteAuthConfig() const;
		android::net::ipsec::ike::IkeIdentification getRemoteIdentification() const;
		JIntArray getRetransmissionTimeoutsMillis() const;
		JString getServerHostname() const;
		jint getSoftLifetimeSeconds() const;
		jboolean hasIkeOption(jint arg0) const;
		jint hashCode() const;
	};
} // namespace android::net::ipsec::ike

