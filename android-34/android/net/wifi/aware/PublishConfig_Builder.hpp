#pragma once

#include "../../../../JByteArray.hpp"
#include "./AwarePairingConfig.def.hpp"
#include "./PublishConfig.def.hpp"
#include "./WifiAwareDataPathSecurityConfig.def.hpp"
#include "../../../../JString.hpp"
#include "./PublishConfig_Builder.def.hpp"

namespace android::net::wifi::aware
{
	// Fields
	
	// Constructors
	inline PublishConfig_Builder::PublishConfig_Builder()
		: JObject(
			"android.net.wifi.aware.PublishConfig$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::net::wifi::aware::PublishConfig PublishConfig_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/wifi/aware/PublishConfig;"
		);
	}
	inline android::net::wifi::aware::PublishConfig_Builder PublishConfig_Builder::setDataPathSecurityConfig(android::net::wifi::aware::WifiAwareDataPathSecurityConfig arg0) const
	{
		return callObjectMethod(
			"setDataPathSecurityConfig",
			"(Landroid/net/wifi/aware/WifiAwareDataPathSecurityConfig;)Landroid/net/wifi/aware/PublishConfig$Builder;",
			arg0.object()
		);
	}
	inline android::net::wifi::aware::PublishConfig_Builder PublishConfig_Builder::setInstantCommunicationModeEnabled(jboolean arg0, jint arg1) const
	{
		return callObjectMethod(
			"setInstantCommunicationModeEnabled",
			"(ZI)Landroid/net/wifi/aware/PublishConfig$Builder;",
			arg0,
			arg1
		);
	}
	inline android::net::wifi::aware::PublishConfig_Builder PublishConfig_Builder::setMatchFilter(JObject arg0) const
	{
		return callObjectMethod(
			"setMatchFilter",
			"(Ljava/util/List;)Landroid/net/wifi/aware/PublishConfig$Builder;",
			arg0.object()
		);
	}
	inline android::net::wifi::aware::PublishConfig_Builder PublishConfig_Builder::setPairingConfig(android::net::wifi::aware::AwarePairingConfig arg0) const
	{
		return callObjectMethod(
			"setPairingConfig",
			"(Landroid/net/wifi/aware/AwarePairingConfig;)Landroid/net/wifi/aware/PublishConfig$Builder;",
			arg0.object()
		);
	}
	inline android::net::wifi::aware::PublishConfig_Builder PublishConfig_Builder::setPublishType(jint arg0) const
	{
		return callObjectMethod(
			"setPublishType",
			"(I)Landroid/net/wifi/aware/PublishConfig$Builder;",
			arg0
		);
	}
	inline android::net::wifi::aware::PublishConfig_Builder PublishConfig_Builder::setRangingEnabled(jboolean arg0) const
	{
		return callObjectMethod(
			"setRangingEnabled",
			"(Z)Landroid/net/wifi/aware/PublishConfig$Builder;",
			arg0
		);
	}
	inline android::net::wifi::aware::PublishConfig_Builder PublishConfig_Builder::setServiceName(JString arg0) const
	{
		return callObjectMethod(
			"setServiceName",
			"(Ljava/lang/String;)Landroid/net/wifi/aware/PublishConfig$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::net::wifi::aware::PublishConfig_Builder PublishConfig_Builder::setServiceSpecificInfo(JByteArray arg0) const
	{
		return callObjectMethod(
			"setServiceSpecificInfo",
			"([B)Landroid/net/wifi/aware/PublishConfig$Builder;",
			arg0.object<jbyteArray>()
		);
	}
	inline android::net::wifi::aware::PublishConfig_Builder PublishConfig_Builder::setTerminateNotificationEnabled(jboolean arg0) const
	{
		return callObjectMethod(
			"setTerminateNotificationEnabled",
			"(Z)Landroid/net/wifi/aware/PublishConfig$Builder;",
			arg0
		);
	}
	inline android::net::wifi::aware::PublishConfig_Builder PublishConfig_Builder::setTtlSec(jint arg0) const
	{
		return callObjectMethod(
			"setTtlSec",
			"(I)Landroid/net/wifi/aware/PublishConfig$Builder;",
			arg0
		);
	}
} // namespace android::net::wifi::aware

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::wifi::aware;
#endif
