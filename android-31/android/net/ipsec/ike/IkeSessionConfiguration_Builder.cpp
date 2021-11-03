#include "../../../../JByteArray.hpp"
#include "./IkeSessionConfiguration.hpp"
#include "./IkeSessionConnectionInfo.hpp"
#include "../../../../JString.hpp"
#include "./IkeSessionConfiguration_Builder.hpp"

namespace android::net::ipsec::ike
{
	// Fields
	
	// QJniObject forward
	IkeSessionConfiguration_Builder::IkeSessionConfiguration_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	IkeSessionConfiguration_Builder::IkeSessionConfiguration_Builder(android::net::ipsec::ike::IkeSessionConnectionInfo arg0)
		: JObject(
			"android.net.ipsec.ike.IkeSessionConfiguration$Builder",
			"(Landroid/net/ipsec/ike/IkeSessionConnectionInfo;)V",
			arg0.object()
		) {}
	
	// Methods
	android::net::ipsec::ike::IkeSessionConfiguration_Builder IkeSessionConfiguration_Builder::addIkeExtension(jint arg0)
	{
		return callObjectMethod(
			"addIkeExtension",
			"(I)Landroid/net/ipsec/ike/IkeSessionConfiguration$Builder;",
			arg0
		);
	}
	android::net::ipsec::ike::IkeSessionConfiguration_Builder IkeSessionConfiguration_Builder::addRemoteVendorId(JByteArray arg0)
	{
		return callObjectMethod(
			"addRemoteVendorId",
			"([B)Landroid/net/ipsec/ike/IkeSessionConfiguration$Builder;",
			arg0.object<jbyteArray>()
		);
	}
	android::net::ipsec::ike::IkeSessionConfiguration IkeSessionConfiguration_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/ipsec/ike/IkeSessionConfiguration;"
		);
	}
	android::net::ipsec::ike::IkeSessionConfiguration_Builder IkeSessionConfiguration_Builder::clearIkeExtensions()
	{
		return callObjectMethod(
			"clearIkeExtensions",
			"()Landroid/net/ipsec/ike/IkeSessionConfiguration$Builder;"
		);
	}
	android::net::ipsec::ike::IkeSessionConfiguration_Builder IkeSessionConfiguration_Builder::clearRemoteApplicationVersion()
	{
		return callObjectMethod(
			"clearRemoteApplicationVersion",
			"()Landroid/net/ipsec/ike/IkeSessionConfiguration$Builder;"
		);
	}
	android::net::ipsec::ike::IkeSessionConfiguration_Builder IkeSessionConfiguration_Builder::clearRemoteVendorIds()
	{
		return callObjectMethod(
			"clearRemoteVendorIds",
			"()Landroid/net/ipsec/ike/IkeSessionConfiguration$Builder;"
		);
	}
	android::net::ipsec::ike::IkeSessionConfiguration_Builder IkeSessionConfiguration_Builder::setRemoteApplicationVersion(JString arg0)
	{
		return callObjectMethod(
			"setRemoteApplicationVersion",
			"(Ljava/lang/String;)Landroid/net/ipsec/ike/IkeSessionConfiguration$Builder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::net::ipsec::ike

