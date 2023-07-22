#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::net
{
	class PlatformVpnProfile : public JObject
	{
	public:
		// Fields
		static jint TYPE_IKEV2_IPSEC_PSK();
		static jint TYPE_IKEV2_IPSEC_RSA();
		static jint TYPE_IKEV2_IPSEC_USER_PASS();
		
		// QJniObject forward
		template<typename ...Ts> explicit PlatformVpnProfile(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PlatformVpnProfile(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint getType() const;
		JString getTypeString() const;
	};
} // namespace android::net

