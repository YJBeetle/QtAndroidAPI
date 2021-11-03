#include "./IkeSessionConnectionInfo.hpp"
#include "../../../../JString.hpp"
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
	IkeSessionConfiguration::IkeSessionConfiguration(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::net::ipsec::ike::IkeSessionConnectionInfo IkeSessionConfiguration::getIkeSessionConnectionInfo() const
	{
		return callObjectMethod(
			"getIkeSessionConnectionInfo",
			"()Landroid/net/ipsec/ike/IkeSessionConnectionInfo;"
		);
	}
	JString IkeSessionConfiguration::getRemoteApplicationVersion() const
	{
		return callObjectMethod(
			"getRemoteApplicationVersion",
			"()Ljava/lang/String;"
		);
	}
	JObject IkeSessionConfiguration::getRemoteVendorIds() const
	{
		return callObjectMethod(
			"getRemoteVendorIds",
			"()Ljava/util/List;"
		);
	}
	jboolean IkeSessionConfiguration::isIkeExtensionEnabled(jint arg0) const
	{
		return callMethod<jboolean>(
			"isIkeExtensionEnabled",
			"(I)Z",
			arg0
		);
	}
} // namespace android::net::ipsec::ike

