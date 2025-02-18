#pragma once

#include "../../../../JByteArray.hpp"
#include "../../eap/EapInfo.def.hpp"
#include "./IkeSessionConfiguration.def.hpp"
#include "./IkeSessionConnectionInfo.def.hpp"
#include "../../../../JString.hpp"
#include "./IkeSessionConfiguration_Builder.def.hpp"

namespace android::net::ipsec::ike
{
	// Fields
	
	// Constructors
	inline IkeSessionConfiguration_Builder::IkeSessionConfiguration_Builder(android::net::ipsec::ike::IkeSessionConnectionInfo arg0)
		: JObject(
			"android.net.ipsec.ike.IkeSessionConfiguration$Builder",
			"(Landroid/net/ipsec/ike/IkeSessionConnectionInfo;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::net::ipsec::ike::IkeSessionConfiguration_Builder IkeSessionConfiguration_Builder::addIkeExtension(jint arg0) const
	{
		return callObjectMethod(
			"addIkeExtension",
			"(I)Landroid/net/ipsec/ike/IkeSessionConfiguration$Builder;",
			arg0
		);
	}
	inline android::net::ipsec::ike::IkeSessionConfiguration_Builder IkeSessionConfiguration_Builder::addRemoteVendorId(JByteArray arg0) const
	{
		return callObjectMethod(
			"addRemoteVendorId",
			"([B)Landroid/net/ipsec/ike/IkeSessionConfiguration$Builder;",
			arg0.object<jbyteArray>()
		);
	}
	inline android::net::ipsec::ike::IkeSessionConfiguration IkeSessionConfiguration_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/ipsec/ike/IkeSessionConfiguration;"
		);
	}
	inline android::net::ipsec::ike::IkeSessionConfiguration_Builder IkeSessionConfiguration_Builder::clearIkeExtensions() const
	{
		return callObjectMethod(
			"clearIkeExtensions",
			"()Landroid/net/ipsec/ike/IkeSessionConfiguration$Builder;"
		);
	}
	inline android::net::ipsec::ike::IkeSessionConfiguration_Builder IkeSessionConfiguration_Builder::clearRemoteApplicationVersion() const
	{
		return callObjectMethod(
			"clearRemoteApplicationVersion",
			"()Landroid/net/ipsec/ike/IkeSessionConfiguration$Builder;"
		);
	}
	inline android::net::ipsec::ike::IkeSessionConfiguration_Builder IkeSessionConfiguration_Builder::clearRemoteVendorIds() const
	{
		return callObjectMethod(
			"clearRemoteVendorIds",
			"()Landroid/net/ipsec/ike/IkeSessionConfiguration$Builder;"
		);
	}
	inline android::net::ipsec::ike::IkeSessionConfiguration_Builder IkeSessionConfiguration_Builder::setEapInfo(android::net::eap::EapInfo arg0) const
	{
		return callObjectMethod(
			"setEapInfo",
			"(Landroid/net/eap/EapInfo;)Landroid/net/ipsec/ike/IkeSessionConfiguration$Builder;",
			arg0.object()
		);
	}
	inline android::net::ipsec::ike::IkeSessionConfiguration_Builder IkeSessionConfiguration_Builder::setRemoteApplicationVersion(JString arg0) const
	{
		return callObjectMethod(
			"setRemoteApplicationVersion",
			"(Ljava/lang/String;)Landroid/net/ipsec/ike/IkeSessionConfiguration$Builder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::net::ipsec::ike

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::ipsec::ike;
#endif
