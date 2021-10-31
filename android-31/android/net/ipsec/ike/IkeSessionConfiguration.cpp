#include "./IkeSessionConnectionInfo.hpp"
#include "./IkeSessionConfiguration.hpp"

namespace android::net::ipsec::ike
{
	// Fields
	jint IkeSessionConfiguration::EXTENSION_TYPE_FRAGMENTATION()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.IkeSessionConfiguration",
			"EXTENSION_TYPE_FRAGMENTATION"
		);
	}
	jint IkeSessionConfiguration::EXTENSION_TYPE_MOBIKE()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.IkeSessionConfiguration",
			"EXTENSION_TYPE_MOBIKE"
		);
	}
	
	// QJniObject forward
	IkeSessionConfiguration::IkeSessionConfiguration(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	android::net::ipsec::ike::IkeSessionConnectionInfo IkeSessionConfiguration::getIkeSessionConnectionInfo()
	{
		return callObjectMethod(
			"getIkeSessionConnectionInfo",
			"()Landroid/net/ipsec/ike/IkeSessionConnectionInfo;"
		);
	}
	jstring IkeSessionConfiguration::getRemoteApplicationVersion()
	{
		return callObjectMethod(
			"getRemoteApplicationVersion",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	__JniBaseClass IkeSessionConfiguration::getRemoteVendorIds()
	{
		return callObjectMethod(
			"getRemoteVendorIds",
			"()Ljava/util/List;"
		);
	}
	jboolean IkeSessionConfiguration::isIkeExtensionEnabled(jint arg0)
	{
		return callMethod<jboolean>(
			"isIkeExtensionEnabled",
			"(I)Z",
			arg0
		);
	}
} // namespace android::net::ipsec::ike

