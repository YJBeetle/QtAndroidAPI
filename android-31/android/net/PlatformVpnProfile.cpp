#include "../../JString.hpp"
#include "./PlatformVpnProfile.hpp"

namespace android::net
{
	// Fields
	jint PlatformVpnProfile::TYPE_IKEV2_IPSEC_PSK()
	{
		return getStaticField<jint>(
			"android.net.PlatformVpnProfile",
			"TYPE_IKEV2_IPSEC_PSK"
		);
	}
	jint PlatformVpnProfile::TYPE_IKEV2_IPSEC_RSA()
	{
		return getStaticField<jint>(
			"android.net.PlatformVpnProfile",
			"TYPE_IKEV2_IPSEC_RSA"
		);
	}
	jint PlatformVpnProfile::TYPE_IKEV2_IPSEC_USER_PASS()
	{
		return getStaticField<jint>(
			"android.net.PlatformVpnProfile",
			"TYPE_IKEV2_IPSEC_USER_PASS"
		);
	}
	
	// QAndroidJniObject forward
	PlatformVpnProfile::PlatformVpnProfile(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint PlatformVpnProfile::getType() const
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	JString PlatformVpnProfile::getTypeString() const
	{
		return callObjectMethod(
			"getTypeString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::net

