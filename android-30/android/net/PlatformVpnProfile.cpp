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
	
	// QJniObject forward
	PlatformVpnProfile::PlatformVpnProfile(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint PlatformVpnProfile::getType()
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	jstring PlatformVpnProfile::getTypeString()
	{
		return callObjectMethod(
			"getTypeString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::net

