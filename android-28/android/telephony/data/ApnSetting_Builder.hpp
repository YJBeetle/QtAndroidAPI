#pragma once

#include "../../net/Uri.def.hpp"
#include "./ApnSetting.def.hpp"
#include "../../../JString.hpp"
#include "../../../java/net/InetAddress.def.hpp"
#include "./ApnSetting_Builder.def.hpp"

namespace android::telephony::data
{
	// Fields
	
	// Constructors
	inline ApnSetting_Builder::ApnSetting_Builder()
		: JObject(
			"android.telephony.data.ApnSetting$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::telephony::data::ApnSetting ApnSetting_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/telephony/data/ApnSetting;"
		);
	}
	inline android::telephony::data::ApnSetting_Builder ApnSetting_Builder::setApnName(JString arg0) const
	{
		return callObjectMethod(
			"setApnName",
			"(Ljava/lang/String;)Landroid/telephony/data/ApnSetting$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::telephony::data::ApnSetting_Builder ApnSetting_Builder::setApnTypeBitmask(jint arg0) const
	{
		return callObjectMethod(
			"setApnTypeBitmask",
			"(I)Landroid/telephony/data/ApnSetting$Builder;",
			arg0
		);
	}
	inline android::telephony::data::ApnSetting_Builder ApnSetting_Builder::setAuthType(jint arg0) const
	{
		return callObjectMethod(
			"setAuthType",
			"(I)Landroid/telephony/data/ApnSetting$Builder;",
			arg0
		);
	}
	inline android::telephony::data::ApnSetting_Builder ApnSetting_Builder::setCarrierEnabled(jboolean arg0) const
	{
		return callObjectMethod(
			"setCarrierEnabled",
			"(Z)Landroid/telephony/data/ApnSetting$Builder;",
			arg0
		);
	}
	inline android::telephony::data::ApnSetting_Builder ApnSetting_Builder::setEntryName(JString arg0) const
	{
		return callObjectMethod(
			"setEntryName",
			"(Ljava/lang/String;)Landroid/telephony/data/ApnSetting$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::telephony::data::ApnSetting_Builder ApnSetting_Builder::setMmsProxyAddress(java::net::InetAddress arg0) const
	{
		return callObjectMethod(
			"setMmsProxyAddress",
			"(Ljava/net/InetAddress;)Landroid/telephony/data/ApnSetting$Builder;",
			arg0.object()
		);
	}
	inline android::telephony::data::ApnSetting_Builder ApnSetting_Builder::setMmsProxyPort(jint arg0) const
	{
		return callObjectMethod(
			"setMmsProxyPort",
			"(I)Landroid/telephony/data/ApnSetting$Builder;",
			arg0
		);
	}
	inline android::telephony::data::ApnSetting_Builder ApnSetting_Builder::setMmsc(android::net::Uri arg0) const
	{
		return callObjectMethod(
			"setMmsc",
			"(Landroid/net/Uri;)Landroid/telephony/data/ApnSetting$Builder;",
			arg0.object()
		);
	}
	inline android::telephony::data::ApnSetting_Builder ApnSetting_Builder::setMvnoType(jint arg0) const
	{
		return callObjectMethod(
			"setMvnoType",
			"(I)Landroid/telephony/data/ApnSetting$Builder;",
			arg0
		);
	}
	inline android::telephony::data::ApnSetting_Builder ApnSetting_Builder::setNetworkTypeBitmask(jint arg0) const
	{
		return callObjectMethod(
			"setNetworkTypeBitmask",
			"(I)Landroid/telephony/data/ApnSetting$Builder;",
			arg0
		);
	}
	inline android::telephony::data::ApnSetting_Builder ApnSetting_Builder::setOperatorNumeric(JString arg0) const
	{
		return callObjectMethod(
			"setOperatorNumeric",
			"(Ljava/lang/String;)Landroid/telephony/data/ApnSetting$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::telephony::data::ApnSetting_Builder ApnSetting_Builder::setPassword(JString arg0) const
	{
		return callObjectMethod(
			"setPassword",
			"(Ljava/lang/String;)Landroid/telephony/data/ApnSetting$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::telephony::data::ApnSetting_Builder ApnSetting_Builder::setProtocol(jint arg0) const
	{
		return callObjectMethod(
			"setProtocol",
			"(I)Landroid/telephony/data/ApnSetting$Builder;",
			arg0
		);
	}
	inline android::telephony::data::ApnSetting_Builder ApnSetting_Builder::setProxyAddress(java::net::InetAddress arg0) const
	{
		return callObjectMethod(
			"setProxyAddress",
			"(Ljava/net/InetAddress;)Landroid/telephony/data/ApnSetting$Builder;",
			arg0.object()
		);
	}
	inline android::telephony::data::ApnSetting_Builder ApnSetting_Builder::setProxyPort(jint arg0) const
	{
		return callObjectMethod(
			"setProxyPort",
			"(I)Landroid/telephony/data/ApnSetting$Builder;",
			arg0
		);
	}
	inline android::telephony::data::ApnSetting_Builder ApnSetting_Builder::setRoamingProtocol(jint arg0) const
	{
		return callObjectMethod(
			"setRoamingProtocol",
			"(I)Landroid/telephony/data/ApnSetting$Builder;",
			arg0
		);
	}
	inline android::telephony::data::ApnSetting_Builder ApnSetting_Builder::setUser(JString arg0) const
	{
		return callObjectMethod(
			"setUser",
			"(Ljava/lang/String;)Landroid/telephony/data/ApnSetting$Builder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::telephony::data

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telephony::data;
#endif
