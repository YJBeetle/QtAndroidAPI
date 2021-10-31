#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::net
{
	class PlatformVpnProfile : public __JniBaseClass
	{
	public:
		// Fields
		static jint TYPE_IKEV2_IPSEC_PSK();
		static jint TYPE_IKEV2_IPSEC_RSA();
		static jint TYPE_IKEV2_IPSEC_USER_PASS();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PlatformVpnProfile(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PlatformVpnProfile(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint getType();
		jstring getTypeString();
	};
} // namespace android::net

