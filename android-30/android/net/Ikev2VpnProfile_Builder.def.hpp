#pragma once

#include "../../JObject.hpp"

class JByteArray;
namespace android::net
{
	class Ikev2VpnProfile;
}
namespace android::net
{
	class ProxyInfo;
}
class JString;
namespace java::security::cert
{
	class X509Certificate;
}

namespace android::net
{
	class Ikev2VpnProfile_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Ikev2VpnProfile_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Ikev2VpnProfile_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		Ikev2VpnProfile_Builder(JString arg0, JString arg1);
		
		// Methods
		android::net::Ikev2VpnProfile build() const;
		android::net::Ikev2VpnProfile_Builder setAllowedAlgorithms(JObject arg0) const;
		android::net::Ikev2VpnProfile_Builder setAuthDigitalSignature(java::security::cert::X509Certificate arg0, JObject arg1, java::security::cert::X509Certificate arg2) const;
		android::net::Ikev2VpnProfile_Builder setAuthPsk(JByteArray arg0) const;
		android::net::Ikev2VpnProfile_Builder setAuthUsernamePassword(JString arg0, JString arg1, java::security::cert::X509Certificate arg2) const;
		android::net::Ikev2VpnProfile_Builder setBypassable(jboolean arg0) const;
		android::net::Ikev2VpnProfile_Builder setMaxMtu(jint arg0) const;
		android::net::Ikev2VpnProfile_Builder setMetered(jboolean arg0) const;
		android::net::Ikev2VpnProfile_Builder setProxy(android::net::ProxyInfo arg0) const;
	};
} // namespace android::net

