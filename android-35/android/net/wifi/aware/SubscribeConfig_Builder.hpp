#pragma once

#include "../../../../JByteArray.hpp"
#include "./AwarePairingConfig.def.hpp"
#include "./SubscribeConfig.def.hpp"
#include "../../../../JString.hpp"
#include "./SubscribeConfig_Builder.def.hpp"

namespace android::net::wifi::aware
{
	// Fields
	
	// Constructors
	inline SubscribeConfig_Builder::SubscribeConfig_Builder()
		: JObject(
			"android.net.wifi.aware.SubscribeConfig$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::net::wifi::aware::SubscribeConfig SubscribeConfig_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/wifi/aware/SubscribeConfig;"
		);
	}
	inline android::net::wifi::aware::SubscribeConfig_Builder SubscribeConfig_Builder::setInstantCommunicationModeEnabled(jboolean arg0, jint arg1) const
	{
		return callObjectMethod(
			"setInstantCommunicationModeEnabled",
			"(ZI)Landroid/net/wifi/aware/SubscribeConfig$Builder;",
			arg0,
			arg1
		);
	}
	inline android::net::wifi::aware::SubscribeConfig_Builder SubscribeConfig_Builder::setMatchFilter(JObject arg0) const
	{
		return callObjectMethod(
			"setMatchFilter",
			"(Ljava/util/List;)Landroid/net/wifi/aware/SubscribeConfig$Builder;",
			arg0.object()
		);
	}
	inline android::net::wifi::aware::SubscribeConfig_Builder SubscribeConfig_Builder::setMaxDistanceMm(jint arg0) const
	{
		return callObjectMethod(
			"setMaxDistanceMm",
			"(I)Landroid/net/wifi/aware/SubscribeConfig$Builder;",
			arg0
		);
	}
	inline android::net::wifi::aware::SubscribeConfig_Builder SubscribeConfig_Builder::setMinDistanceMm(jint arg0) const
	{
		return callObjectMethod(
			"setMinDistanceMm",
			"(I)Landroid/net/wifi/aware/SubscribeConfig$Builder;",
			arg0
		);
	}
	inline android::net::wifi::aware::SubscribeConfig_Builder SubscribeConfig_Builder::setPairingConfig(android::net::wifi::aware::AwarePairingConfig arg0) const
	{
		return callObjectMethod(
			"setPairingConfig",
			"(Landroid/net/wifi/aware/AwarePairingConfig;)Landroid/net/wifi/aware/SubscribeConfig$Builder;",
			arg0.object()
		);
	}
	inline android::net::wifi::aware::SubscribeConfig_Builder SubscribeConfig_Builder::setServiceName(JString arg0) const
	{
		return callObjectMethod(
			"setServiceName",
			"(Ljava/lang/String;)Landroid/net/wifi/aware/SubscribeConfig$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::net::wifi::aware::SubscribeConfig_Builder SubscribeConfig_Builder::setServiceSpecificInfo(JByteArray arg0) const
	{
		return callObjectMethod(
			"setServiceSpecificInfo",
			"([B)Landroid/net/wifi/aware/SubscribeConfig$Builder;",
			arg0.object<jbyteArray>()
		);
	}
	inline android::net::wifi::aware::SubscribeConfig_Builder SubscribeConfig_Builder::setSubscribeType(jint arg0) const
	{
		return callObjectMethod(
			"setSubscribeType",
			"(I)Landroid/net/wifi/aware/SubscribeConfig$Builder;",
			arg0
		);
	}
	inline android::net::wifi::aware::SubscribeConfig_Builder SubscribeConfig_Builder::setTerminateNotificationEnabled(jboolean arg0) const
	{
		return callObjectMethod(
			"setTerminateNotificationEnabled",
			"(Z)Landroid/net/wifi/aware/SubscribeConfig$Builder;",
			arg0
		);
	}
	inline android::net::wifi::aware::SubscribeConfig_Builder SubscribeConfig_Builder::setTtlSec(jint arg0) const
	{
		return callObjectMethod(
			"setTtlSec",
			"(I)Landroid/net/wifi/aware/SubscribeConfig$Builder;",
			arg0
		);
	}
} // namespace android::net::wifi::aware

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::wifi::aware;
#endif
