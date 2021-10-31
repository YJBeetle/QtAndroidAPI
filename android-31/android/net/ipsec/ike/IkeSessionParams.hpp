#pragma once

#include "../../../../__JniBaseClass.hpp"

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

namespace android::net::ipsec::ike
{
	class IkeSessionParams : public __JniBaseClass
	{
	public:
		// Fields
		static jint IKE_OPTION_ACCEPT_ANY_REMOTE_ID();
		static jint IKE_OPTION_EAP_ONLY_AUTH();
		static jint IKE_OPTION_FORCE_PORT_4500();
		static jint IKE_OPTION_MOBIKE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IkeSessionParams(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		IkeSessionParams(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(jobject arg0);
		jint getDpdDelaySeconds();
		jint getHardLifetimeSeconds();
		__JniBaseClass getIkeSaProposals();
		android::net::ipsec::ike::IkeSessionParams_IkeAuthConfig getLocalAuthConfig();
		android::net::ipsec::ike::IkeIdentification getLocalIdentification();
		jint getNattKeepAliveDelaySeconds();
		android::net::Network getNetwork();
		android::net::ipsec::ike::IkeSessionParams_IkeAuthConfig getRemoteAuthConfig();
		android::net::ipsec::ike::IkeIdentification getRemoteIdentification();
		jintArray getRetransmissionTimeoutsMillis();
		jstring getServerHostname();
		jint getSoftLifetimeSeconds();
		jboolean hasIkeOption(jint arg0);
		jint hashCode();
	};
} // namespace android::net::ipsec::ike

