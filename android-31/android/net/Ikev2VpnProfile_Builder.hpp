#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Ikev2VpnProfile;
}
namespace android::net
{
	class ProxyInfo;
}
namespace java::security::cert
{
	class X509Certificate;
}

namespace android::net
{
	class Ikev2VpnProfile_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Ikev2VpnProfile_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Ikev2VpnProfile_Builder(QAndroidJniObject obj);
		
		// Constructors
		Ikev2VpnProfile_Builder(jstring arg0, jstring arg1);
		
		// Methods
		android::net::Ikev2VpnProfile build();
		android::net::Ikev2VpnProfile_Builder setAllowedAlgorithms(__JniBaseClass arg0);
		android::net::Ikev2VpnProfile_Builder setAuthDigitalSignature(java::security::cert::X509Certificate arg0, __JniBaseClass arg1, java::security::cert::X509Certificate arg2);
		android::net::Ikev2VpnProfile_Builder setAuthPsk(jbyteArray arg0);
		android::net::Ikev2VpnProfile_Builder setAuthUsernamePassword(jstring arg0, jstring arg1, java::security::cert::X509Certificate arg2);
		android::net::Ikev2VpnProfile_Builder setBypassable(jboolean arg0);
		android::net::Ikev2VpnProfile_Builder setMaxMtu(jint arg0);
		android::net::Ikev2VpnProfile_Builder setMetered(jboolean arg0);
		android::net::Ikev2VpnProfile_Builder setProxy(android::net::ProxyInfo arg0);
	};
} // namespace android::net

