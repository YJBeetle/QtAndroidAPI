#include "./IkeSessionConfiguration.hpp"
#include "./IkeSessionConnectionInfo.hpp"
#include "./IkeSessionConfiguration_Builder.hpp"

namespace android::net::ipsec::ike
{
	// Fields
	
	// QJniObject forward
	IkeSessionConfiguration_Builder::IkeSessionConfiguration_Builder(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	IkeSessionConfiguration_Builder::IkeSessionConfiguration_Builder(android::net::ipsec::ike::IkeSessionConnectionInfo arg0)
		: __JniBaseClass(
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
	android::net::ipsec::ike::IkeSessionConfiguration_Builder IkeSessionConfiguration_Builder::addRemoteVendorId(jbyteArray arg0)
	{
		return callObjectMethod(
			"addRemoteVendorId",
			"([B)Landroid/net/ipsec/ike/IkeSessionConfiguration$Builder;",
			arg0
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
	android::net::ipsec::ike::IkeSessionConfiguration_Builder IkeSessionConfiguration_Builder::setRemoteApplicationVersion(jstring arg0)
	{
		return callObjectMethod(
			"setRemoteApplicationVersion",
			"(Ljava/lang/String;)Landroid/net/ipsec/ike/IkeSessionConfiguration$Builder;",
			arg0
		);
	}
} // namespace android::net::ipsec::ike

